#ifndef SMTPCLIENT_H
#define SMTPCLIENT_H

#include <QObject>
#include <QSslSocket>

class SmtpClient : public QObject
{
    Q_OBJECT

public:
    SmtpClient(const QString &host, int port, const QString &user, const QString &pass, QObject *parent = nullptr);
    bool sendMail(const QString &from, const QString &to, const QString &subject, const QString &body);

private:
    QSslSocket *socket;
    QString host, username, password;
    int port;

    bool waitForResponse(const QString &expectedCode);
    void sendCommand(const QString &command);
};

#endif // SMTPCLIENT_H
