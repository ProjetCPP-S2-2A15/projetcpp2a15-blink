#include "etablissement.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

etablissement::etablissement() {
    id_etab = 0;
    nom = "";
    adresse = "";
    telephone = 0;
    email = "";
    type = "";
}

etablissement::etablissement(int id_etab, QString nom, QString adresse, int telephone, QString email, QString type)
{
    this->id_etab = id_etab;
    this->nom = nom;
    this->adresse = adresse;
    this->telephone = telephone;
    this->email = email;
    this->type = type;
}

bool etablissement::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO etablissement (nom, adresse, telephone, email, type) "
                  "VALUES (:nom, :adresse, :telephone, :email, :type)");

    query.bindValue(":nom", nom);
    query.bindValue(":adresse", adresse);
    query.bindValue(":telephone", telephone);
    query.bindValue(":email", email);
    query.bindValue(":type", type);

    if (!query.exec()) {
        qDebug() << "Erreur lors de l'ajout:" << query.lastError().text();
        return false;
    }

    return true;
}

bool etablissement::supprimer(int id_etab)
{
    QSqlQuery query;
    query.prepare("DELETE FROM etablissement WHERE id_etab = :id_etab");
    query.bindValue(":id_etab", id_etab);

    if (!query.exec()) {
        qDebug() << "Erreur lors de la suppression:" << query.lastError().text();
        return false;
    }

    return true;
}

QSqlQueryModel* etablissement::afficher()
{
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM etablissement");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("ADRESSE"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("TELEPHONE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("EMAIL"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("TYPE"));

    return model;
}

bool etablissement::modifier()
{
    QSqlQuery query;
    query.prepare("UPDATE etablissement SET nom = :nom, adresse = :adresse, telephone = :telephone, email = :email, type = :type "
                  "WHERE id_etab = :id_etab");

    query.bindValue(":id_etab", id_etab);
    query.bindValue(":nom", nom);
    query.bindValue(":adresse", adresse);
    query.bindValue(":telephone", telephone);
    query.bindValue(":email", email);
    query.bindValue(":type", type);

    if (!query.exec()) {
        qDebug() << "Erreur lors de la modification:" << query.lastError().text();
        return false;
    }

    return true;
}
