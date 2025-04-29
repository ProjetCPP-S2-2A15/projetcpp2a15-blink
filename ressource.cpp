#include "ressource.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

ressource::ressource() {
    ID = 0;
    nom = "";
    status = "";
    type = "";
    quantite = 0;
}

ressource::ressource(int ID, QString nom, QString status, QString type, int quantite) {
    this->ID = ID;
    this->nom = nom;
    this->status = status;
    this->type = type;
    this->quantite = quantite;
}

bool ressource::ajouter()
{
    QSqlQuery query;

    // Prepare your query
    query.prepare("INSERT INTO ressource (ID, nom, status, type, quantite) "
                  "VALUES (:ID, :nom, :status, :type, :quantite)");

    // Bind the values
    query.bindValue(":ID", ID);
    query.bindValue(":nom", nom);
    query.bindValue(":status", status);
    query.bindValue(":type", type);
    query.bindValue(":quantite", quantite);

    // Execute the query
    if (!query.exec()) {
        // Log the error if the query fails
        qDebug() << "Erreur SQL à l'ajout du ressource : " << query.lastError().text();
        return false;
    }
    return true;
}

bool ressource::supprimer(int ID) {
    QSqlQuery query;
    query.prepare("DELETE FROM ressource WHERE ID = :ID");
    query.bindValue(":ID", ID);

    if (!query.exec()) {
        qDebug() << "Erreur lors de la suppression:" << query.lastError().text();
        return false;
    }

    return true;
}

QSqlQueryModel* ressource::afficher() {
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM ressource");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("STATUS"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("TYPE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("QUANTITE"));

    return model;
}

bool ressource::modifier() {
    QSqlQuery query;
    query.prepare("UPDATE ressource SET nom = :nom, status = :status, type = :type, quantite = :quantite "
                  "WHERE ID = :ID");

    query.bindValue(":ID", ID);
    query.bindValue(":nom", nom);
    query.bindValue(":status", status);
    query.bindValue(":type", type);
    query.bindValue(":quantite", quantite);

    if (!query.exec()) {
        qDebug() << "Erreur lors de la modification:" << query.lastError().text();
        return false;
    }

    return true;
}
