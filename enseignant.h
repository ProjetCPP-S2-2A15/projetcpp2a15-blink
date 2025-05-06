#ifndef ENSEIGNANT_H
#define ENSEIGNANT_H
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QString>

class enseignant
{
    QString nom, prenom, email, role, matiere;
    int ID, telephone;
public:
    enseignant();
    enseignant(int, QString, QString, int, QString, QString, QString);

    int getID() { return ID; }
    QString getNom() { return nom; }
    QString getPrenom() { return prenom; }
    int getTelephone() { return telephone; }
    QString getEmail() { return email; }
    QString getRole() { return role; }
    QString getMatiere() { return matiere; }

    void setID(int ID) { this->ID = ID; }
    void setNom(QString nom) { this->nom = nom; }
    void setPrenom(QString prenom) { this->prenom = prenom; }
    void setTelephone(int telephone) { this->telephone = telephone; }
    void setEmail(QString email) { this->email = email; }
    void setRole(QString role) { this->role = role; }
    void setMatiere(QString matiere) { this->matiere = matiere; }

    bool ajouter();
    bool supprimer(int);
    void extracted(QSqlQueryModel *&model);
    QSqlQueryModel* afficher();
    bool modifier();
};

#endif // ENSEIGNANT_H


