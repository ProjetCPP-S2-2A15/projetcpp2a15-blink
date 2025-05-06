#include "enseignant.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

enseignant::enseignant() {
    ID = 0;
    nom = "";
    prenom = "";
    telephone = 0;
    email = "";
    role = "";
    matiere = "";
}

enseignant::enseignant(int ID, QString nom, QString prenom, int telephone, QString email, QString role, QString matiere) {
    this->ID = ID;
    this->nom = nom;
    this->prenom = prenom;
    this->telephone = telephone;
    this->email = email;
    this->role = role;
    this->matiere = matiere;
}

bool enseignant::ajouter()
{
    QSqlQuery query;

    // Prepare your query
    query.prepare("INSERT INTO enseignant (ID, nom, prenom, telephone, email, role, matiere) "
                  "VALUES (:ID, :nom, :prenom, :telephone, :email, :role, :matiere)");

    // Bind the values
    query.bindValue(":ID", ID);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":telephone", telephone);
    query.bindValue(":email", email);
    query.bindValue(":role", role);
    query.bindValue(":matiere", matiere);

    // Execute the query
    if (!query.exec()) {
        // Log the error if the query fails
        qDebug() << "Erreur SQL à l'ajout de l'enseignant : " << query.lastError().text();
        return false;
    }
    return true;
}

bool enseignant::supprimer(int ID) {
    QSqlQuery query;
    query.prepare("DELETE FROM enseignant WHERE ID = :ID");
    query.bindValue(":ID", ID);

    if (!query.exec()) {
        qDebug() << "Erreur lors de la suppression:" << query.lastError().text();
        return false;
    }

    return true;
}

QSqlQueryModel* enseignant::afficher() {
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM enseignant");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("TELEPHONE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("EMAIL"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("ROLE"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("MATIERE"));

    return model;
}

bool enseignant::modifier() {
    QSqlQuery query;
    query.prepare("UPDATE enseignant SET nom = :nom, prenom = :prenom, telephone = :telephone, email = :email, role = :role, matiere = :matiere "
                  "WHERE ID = :ID");

    query.bindValue(":ID", ID);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":telephone", telephone);
    query.bindValue(":email", email);
    query.bindValue(":role", role);
    query.bindValue(":matiere", matiere);

    if (!query.exec()) {
        qDebug() << "Erreur lors de la modification:" << query.lastError().text();
        return false;
    }

    return true;
}
