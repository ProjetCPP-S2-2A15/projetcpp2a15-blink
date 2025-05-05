#include "connection.h"
#include <QtSql/QSqlDatabase>

Connection::Connection()
{

}

bool Connection::createconnect()
{
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("ProjetC");//inserer le nom de la source de données
db.setUserName("ProjetC");//inserer nom de l'utilisateur
db.setPassword("ProjetC");//inserer mot de passe de cet utilisateur

if (db.open()){
    return true;
}
else {
qDebug() << "database connection error: " << db.lastError().text();

    return  false;
}
}
