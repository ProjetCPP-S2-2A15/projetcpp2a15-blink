#include "connection.h"

Connection::Connection()
{
}

bool Connection::createconnect()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("ProjetC"); // Insert your database name here
    db.setUserName("projetC");     // Insert your username here
    db.setPassword("projetC");     // Insert your password here

    if (db.open()) {
        return true;
    } else {
        qDebug() << "Database connection error: " << db.lastError().text();
        return false;
    }
}
