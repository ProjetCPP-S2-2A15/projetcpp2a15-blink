#include "smtpclient.h"
#include <QTextStream>
#include <QDebug>

SmtpClient::SmtpClient(const QString &host, int port, const QString &user, const QString &pass, QObject *parent)
    : QObject(parent), host(host), username(user), password(pass), port(port)
{
    socket = new QSslSocket(this);
}

bool SmtpClient::sendMail(const QString &from, const QString &to, const QString &subject, const QString &body)
{
    socket->connectToHostEncrypted(host, port);
    if (!socket->waitForEncrypted(5000)) {
        qDebug() << "Erreur de connexion SSL:" << socket->errorString();
        return false;
    }

    if (!waitForResponse("220")) return false;

    sendCommand("EHLO " + host);
    if (!waitForResponse("250")) return false;

    sendCommand("AUTH LOGIN");
    if (!waitForResponse("334")) return false;

    sendCommand(username.toUtf8().toBase64());
    if (!waitForResponse("334")) return false;

    sendCommand(password.toUtf8().toBase64());
    if (!waitForResponse("235")) return false;

    sendCommand("MAIL FROM:<" + from + ">");
    if (!waitForResponse("250")) return false;

    sendCommand("RCPT TO:<" + to + ">");
    if (!waitForResponse("250")) return false;

    sendCommand("DATA");
    if (!waitForResponse("354")) return false;

    QString message = "Subject: " + subject + "\r\n\r\n" + body + "\r\n.";
    sendCommand(message);
    if (!waitForResponse("250")) return false;

    sendCommand("QUIT");
    socket->disconnectFromHost();
    return true;
}

bool SmtpClient::waitForResponse(const QString &expectedCode)
{
    if (!socket->waitForReadyRead(5000)) return false;
    QString response = socket->readAll();
    qDebug() << "SMTP Response:" << response;
    return response.startsWith(expectedCode);
}

void SmtpClient::sendCommand(const QString &command)
{
    QTextStream ts(socket);
    ts << command << "\r\n";
    ts.flush();
}
