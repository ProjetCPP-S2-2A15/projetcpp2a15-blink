#include "connection.h"

Connection::Connection(){}

bool Connection::createconnect()
{
    bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("ProjetC");//inserer le nom de la source de données
    db.setUserName("ProjetC");//inserer nom de l'utilisateur
    db.setPassword("ProjetC");//inserer mot de passe de cet utilisateur

    if (db.open()) test=true;
    return  test;
}

void Connection::closeConnection(){db.close();}
