#ifndef CANDIDAT_H
#define CANDIDAT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Candidat
{
public:
    Candidat();
    Candidat(int id, QString nom, QString prenom, QString email);

    // Getters
    int getId() const;
    QString getNom() const;
    QString getPrenom() const;
    QString getEmail() const;

    // Setters
    void setId(int id);
    void setNom(const QString &nom);
    void setPrenom(const QString &prenom);
    void setEmail(const QString &email);

    // Database operations
    bool ajouter();
    bool supprimer(int id);
    bool modifier();
    QSqlQueryModel *afficher();

private:
    int id;
    QString nom;
    QString prenom;
    QString email;
};

#endif // CANDIDAT_H
