#include "mainwindow.h"
#include <QApplication>
#include "connection.h"
#include <QMessageBox>
#include <QtSql/QSqlDatabase>
#include <QDebug>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //if (!QSqlDatabase::isDriverAvailable("QODBC")) {
    //  qDebug() << "Driver ODBC non disponible !";
    // return -1;
    //}

    // Instantiate the connection
    Connection c;

    // Test database connection
    bool test = c.createconnect();
    if (test) {
        qDebug() << "Database connection successful.";
        QMessageBox::information(nullptr, QObject::tr("Database Status"),
                                 QObject::tr("Connection successful.\nClick Cancel to exit."),
                                 QMessageBox::Cancel);
    } else {
        qDebug() << "Database connection failed.";
        QMessageBox::critical(nullptr, QObject::tr("Database Status"),
                              QObject::tr("Connection failed.\nClick Cancel to exit."),
                              QMessageBox::Cancel);
        return -1; // Exit the program if connection fails
    }


    MainWindow w;
    w.show();
    return a.exec();
}
