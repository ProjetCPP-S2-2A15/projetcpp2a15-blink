#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("projetC");
    db.setUserName("projetC");
    db.setPassword("projetC");

    if (db.open())
        test = true;


    if (db.open())
        test=true;





    return  test;
}
