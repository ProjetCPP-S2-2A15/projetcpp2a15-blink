#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("ProjetC");
    db.setUserName("ProjetC");
    db.setPassword("ProjetC");

    if (db.open())
        test=true;





    return  test;
}
