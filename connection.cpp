#include "connection.h"

Connection::Connection() {}

bool Connection::createconnect() {
    bool test = false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("ProjetC");  // Ensure the database source is correctly configured
    db.setUserName("ProjetC");      // Insert your username
    db.setPassword("nada123");      // Insert your password

    if (db.open()) {
        test = true;
    }

    return test;
}
