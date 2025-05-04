#include "arduino.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QThread>
#include<QTimer>
#include <QDate>

Arduino::Arduino(QObject *parent) : QObject(parent)
{
    data = "";
    arduino_port_name = "COM5"; // Hardcoded since we've confirmed COM5
    arduino_is_available = false;
    serial = new QSerialPort(this);

    // Enhanced error handling
    connect(serial, &QSerialPort::errorOccurred, this, [=](QSerialPort::SerialPortError error) {
        if (error != QSerialPort::NoError) {
            qDebug() << "Serial Error:" << serial->errorString();
            if (error == QSerialPort::ResourceError) {
                qDebug() << "Attempting to reconnect...";
                QTimer::singleShot(2000, this, &Arduino::connect_arduino);
            }
        }
    });
}

int Arduino::connect_arduino()
{
    serial->close(); // Clear previous connection
    QThread::msleep(500); // Wait for cleanup

    serial->setPortName(arduino_port_name);
    if (serial->open(QIODevice::ReadWrite)) {
        serial->setBaudRate(QSerialPort::Baud9600);
        serial->setDataBits(QSerialPort::Data8);
        serial->setParity(QSerialPort::NoParity);
        serial->setStopBits(QSerialPort::OneStop);
        serial->setFlowControl(QSerialPort::NoFlowControl);

        // Critical wait for Arduino reset
        QThread::msleep(2000);

        qDebug() << "Connected to" << arduino_port_name
                 << "| Open:" << serial->isOpen()
                 << "| Writable:" << serial->isWritable();

        // Test communication
        serial->write("QT_CONNECT_TEST\n");
        if (serial->waitForBytesWritten(1000)) {
            qDebug() << "Test signal sent to Arduino";
            return 0;
        }
    }

    qDebug() << "Connection failed to" << arduino_port_name
             << "| Error:" << serial->errorString();
    return -1;
}

void Arduino::sendExamsToArduino()
{
    if (!serial->isOpen() && connect_arduino() != 0) {
        qDebug() << "Aborting send - no connection";
        return;
    }

    qDebug() << "\n=== Sending Exams ===";
    qDebug() << "Port Status:"
             << "Open:" << serial->isOpen()
             << "Writable:" << serial->isWritable()
             << "Bytes to Write:" << serial->bytesToWrite();

    QSqlQuery query;
    // Updated query to include NOM_EXAM
    if (!query.exec("SELECT ID_EXAM, NOM_EXAM, DATE_EXAM FROM EXAM WHERE etat IS NULL")) {
        qDebug() << "Database Error:" << query.lastError().text();
        serial->write("ERROR:DB_QUERY_FAILED\n");
        return;
    }

    int examCount = 0;
    while (query.next()) {
        // Format: ID_EXAM,NOM_EXAM,DATE_EXAM
        QString line = query.value(0).toString() + "," +
                       query.value(1).toString() + "," +
                       query.value(2).toDate().toString("yyyy-MM-dd") + "\n";
        serial->write(line.toUtf8());
        examCount++;
        qDebug() << "Sent:" << line.trimmed();
        serial->waitForBytesWritten(100);
        QThread::msleep(50); // Prevent buffer overflow
    }

    if (examCount == 0) {
        serial->write("NO_EXAMS_FOUND\n");
        qDebug() << "No exams found in database";
    } else {
        serial->write("END_TRANSMISSION\n");
        qDebug() << "Sent" << examCount << "exams";
    }
    serial->flush();
}





//
void Arduino::processArduinoCommands()
{
    while (serial->canReadLine()) {
        QByteArray line = serial->readLine().trimmed();
        qDebug() << "Arduino >" << line;

        if (line == "REQUEST_EXAMS") {
            qDebug() << "Received exam request - sending exams";
            sendExamsToArduino();
        }
        else if (line.startsWith("REMOVE:")) {
            QString examId = QString::fromUtf8(line.mid(7)).trimmed();
            qDebug() << "Processing removal for ID:" << examId;

            QSqlQuery query;
            query.prepare("UPDATE EXAM SET etat = 1 WHERE ID_EXAM = :id");
            query.bindValue(":id", examId);
            qDebug() << "Executing query for ID:" << examId;

            if (!query.exec()) {
                qDebug() << "Update Error:" << query.lastError();
                serial->write("ERROR:UPDATE_FAILED\n");
            } else {
                qDebug() << "Marked exam" << examId << "as completed";
                serial->write("SUCCESS:" + examId.toUtf8() + "\n");
                sendExamsToArduino(); // Refresh list
            }
        } else {
            qDebug() << "Unknown command received:" << line;
        }
    }
}






int Arduino::close_arduino()
{
    if (serial->isOpen()) {
        serial->close();
        return 0;
    }
    return 1;
}

QByteArray Arduino::read_from_arduino()
{
    if (serial->isReadable()) {
        data = serial->readAll();
        return data;
    }
    return QByteArray();
}

void Arduino::write_to_arduino(QByteArray d)
{
    if (serial->isWritable()) {
        serial->write(d);
    } else {
        qDebug() << "Couldn't write to serial!";
    }
}

QSerialPort* Arduino::getserial()
{
    return serial;
}

QString Arduino::getarduino_port_name()
{
    return arduino_port_name;
}
