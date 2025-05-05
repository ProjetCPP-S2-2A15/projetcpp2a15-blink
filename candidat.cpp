#include "candidat.h"

Candidat::Candidat() : id(0), nom(""), prenom(""), email("") {}

Candidat::Candidat(int id, QString nom, QString prenom, QString email)
    : id(id), nom(nom), prenom(prenom), email(email) {}

// Getters
int Candidat::getId() const { return id; }
QString Candidat::getNom() const { return nom; }
QString Candidat::getPrenom() const { return prenom; }
QString Candidat::getEmail() const { return email; }

// Setters
void Candidat::setId(int id) { this->id = id; }
void Candidat::setNom(const QString &nom) { this->nom = nom; }
void Candidat::setPrenom(const QString &prenom) { this->prenom = prenom; }
void Candidat::setEmail(const QString &email) { this->email = email; }

// Ajouter un candidat
bool Candidat::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO candidats (id, nom, prenom, email) "
                  "VALUES (:id, :nom, :prenom, :email)");
    query.bindValue(":id", id);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":email", email);

    return query.exec();
}

// Supprimer un candidat
bool Candidat::supprimer(int id)
{
    QSqlQuery query;
    query.prepare("DELETE FROM candidats WHERE id = :id");
    query.bindValue(":id", id);

    return query.exec();
}

// Modifier un candidat
bool Candidat::modifier()
{
    QSqlQuery query;
    query.prepare("UPDATE candidats SET nom = :nom, prenom = :prenom, email = :email WHERE id = :id");
    query.bindValue(":id", id);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":email", email);

    return query.exec();
}

// Afficher les candidats
QSqlQueryModel *Candidat::afficher()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM candidats");
    return model;
}
