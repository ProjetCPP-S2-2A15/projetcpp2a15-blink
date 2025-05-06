#include "centre.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QVariant>
#include <QSqlError>

// Constructeur avec paramètres
Centre::Centre(int id, QString nom, QString adresse, QString region, QString responsable, QString mail) {
    this->Id_Centre = id;
    this->Nom_Centre = nom;
    this->Adresse = adresse;
    this->Region = region;
    this->Responsable = responsable;
    this->Mail_Responsable = mail;
}

// Ajouter un centre dans la base de données
bool Centre::ajouter() {
    QSqlQuery query;
    query.prepare("INSERT INTO CENTRE_EXAMEN (Id_Centre, Nom_Centre, Adresse, Region, Responsable, Mail_Responsable) "
                  "VALUES (:Id_Centre, :Nom_Centre, :Adresse, :Region, :Responsable, :Mail_Responsable)");
    query.bindValue(":Id_Centre", Id_Centre);
    query.bindValue(":Nom_Centre", Nom_Centre);
    query.bindValue(":Adresse", Adresse);
    query.bindValue(":Region", Region);
    query.bindValue(":Responsable", Responsable);
    query.bindValue(":Mail_Responsable", Mail_Responsable);

    return query.exec();  // Retourne vrai si l'insertion est réussie
}

// Afficher la liste des centres
QSqlQueryModel* Centre::afficher()
{
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT Id_Centre, Nom_Centre, Adresse, Region, Responsable, Mail_Responsable FROM CENTRE_EXAMEN ORDER BY Id_Centre");

    return model;
}

bool Centre::modifier()
{
    QSqlQuery query;
    query.prepare("UPDATE CENTRE_EXAMEN SET Nom_Centre=:nom, Adresse=:adresse, Region=:region, "
                  "Responsable=:responsable, Mail_Responsable=:mail WHERE Id_Centre=:id");

    query.bindValue(":id", Id_Centre);
    query.bindValue(":nom", Nom_Centre);
    query.bindValue(":adresse", Adresse);
    query.bindValue(":region", Region);
    query.bindValue(":responsable", Responsable);
    query.bindValue(":mail", Mail_Responsable);

    if (!query.exec()) {
        qDebug() << "Erreur lors de la modification du centre:" << query.lastError().text();
        return false;
    }
    return true;
}

// Vérifier si un centre existe par son ID
bool Centre::existe(int id) {
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM CENTRE_EXAMEN WHERE Id_Centre = :Id_Centre");
    query.bindValue(":Id_Centre", id);

    if (query.exec() && query.next()) {
        return query.value(0).toInt() > 0;  // Retourne vrai si l'ID existe
    }
    return false;
}

// Supprimer un centre en fonction de son ID après vérification
bool Centre::supprimer(int id) {

    QSqlQuery query;
    query.prepare("DELETE FROM CENTRE_EXAMEN WHERE Id_Centre = :Id_Centre");
    query.bindValue(":Id_Centre", id);

    return query.exec();  // Retourne vrai si la suppression est réussie
}
