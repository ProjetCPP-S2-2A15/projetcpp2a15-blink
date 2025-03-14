#include "enseignant.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QRegularExpression>

// Constructeurs
Enseignant::Enseignant() : id(0), nom(""), prenom(""), matiere(""), email(""), telephone(""), role("") {}

Enseignant::Enseignant(int id) : id(id), nom(""), prenom(""), matiere(""), email(""), telephone(""), role("") {}

Enseignant::Enseignant(int id, const QString& nom, const QString& prenom, const QString& matiere, const QString& email, const QString& telephone, const QString& role)
    : id(id), nom(nom), prenom(prenom), matiere(matiere), email(email), telephone(telephone), role(role) {}

// Getters
int Enseignant::getId() const {
    return id;
}

QString Enseignant::getNom() const {
    return nom;
}

QString Enseignant::getPrenom() const {
    return prenom;
}

QString Enseignant::getMatiere() const {
    return matiere;
}

QString Enseignant::getEmail() const {
    return email;
}

QString Enseignant::getTelephone() const {
    return telephone;
}

QString Enseignant::getRole() const {
    return role;
}

// Setters
void Enseignant::setId(int id) {
    this->id = id;
}

void Enseignant::setNom(const QString& nom) {
    this->nom = nom;
}

void Enseignant::setPrenom(const QString& prenom) {
    this->prenom = prenom;
}

void Enseignant::setMatiere(const QString& matiere) {
    this->matiere = matiere;
}

void Enseignant::setEmail(const QString& email) {
    this->email = email;
}

void Enseignant::setTelephone(const QString& telephone) {
    this->telephone = telephone;
}

void Enseignant::setRole(const QString& role) {
    this->role = role;
}

// Validation des données
bool Enseignant::validateData() const {
    //  le nom prénom (uniquement des lettres)
    QRegularExpression nameRegex("^[A-Za-z]+$");
    if (!nameRegex.match(nom).hasMatch() || !nameRegex.match(prenom).hasMatch()) {
        qDebug() << "Nom ou prénom invalide.";
        return false;
    }

    //  la matière n'est pas vide
    if (matiere.isEmpty()) {
        qDebug() << "Matière ne peut pas être vide.";
        return false;
    }

    // Vérifier l'email avec une regex simple
    QRegularExpression emailRegex("^[A-Za-z0-9+_.-]+@[A-Za-z0-9.-]+$");
    if (!emailRegex.match(email).hasMatch()) {
        qDebug() << "Email invalide.";
        return false;
    }

    //  téléphone (doit être un numéro de 8 chiffres)
    QRegularExpression phoneRegex("^\\d{8}$");
    if (!phoneRegex.match(telephone).hasMatch()) {
        qDebug() << "Numéro de téléphone invalide.";
        return false;
    }

    // Vérifier que le rôle est valide
    if (role != "Correction" && role != "Surveillance") {
        qDebug() << "Rôle invalide.";
        return false;
    }

    return true;
}

// Opérations sur la base de données
bool Enseignant::addEnseignant() {
    if (!validateData()) {
        return false;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO Enseignant (Id_Enseignant, Nom, Prénom, Matière, Email, Téléphone, Rôle) "
                  "VALUES (:id, :nom, :prenom, :matiere, :email, :telephone, :role)");
    query.bindValue(":id", id);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":matiere", matiere);
    query.bindValue(":email", email);
    query.bindValue(":telephone", telephone);
    query.bindValue(":role", role);

    if (query.exec()) {
        return true;
    } else {
        qDebug() << "Erreur lors de l'ajout de l'enseignant:" << query.lastError().text();
        return false;
    }
}

bool Enseignant::updateEnseignant() {
    if (!validateData()) {
        return false;
    }

    QSqlQuery query;
    query.prepare("UPDATE Enseignant SET Nom = :nom, Prénom = :prenom, Matière = :matiere, "
                  "Email = :email, Téléphone = :telephone, Rôle = :role WHERE Id_Enseignant = :id");
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":matiere", matiere);
    query.bindValue(":email", email);
    query.bindValue(":telephone", telephone);
    query.bindValue(":role", role);
    query.bindValue(":id", id);

    if (query.exec()) {
        return true;
    } else {
        qDebug() << "Erreur lors de la mise à jour de l'enseignant:" << query.lastError().text();
        return false;
    }
}

QSqlQueryModel* Enseignant::displayEnseignants() {
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;

    query.exec("SELECT * FROM Enseignant");
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prénom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Matière"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Email"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Téléphone"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Rôle"));

    return model;
}

bool Enseignant::deleteEnseignant(int id) {
    QSqlQuery query;
    query.prepare("DELETE FROM Enseignant WHERE Id_Enseignant = :id");
    query.bindValue(":id", id);

    if (query.exec()) {
        return true;
    } else {
        qDebug() << "Erreur lors de la suppression de l'enseignant:" << query.lastError().text();
        return false;
    }
}
