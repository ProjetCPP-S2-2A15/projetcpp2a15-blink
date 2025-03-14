#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");

    db.setDatabaseName("ProjetC");//inserer le nom de la source de données
    db.setUserName("ProjetC");
    db.setPassword("nada123");

    if (db.open()){
        test=true;
        return  test;
    }

}
