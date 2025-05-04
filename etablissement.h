#ifndef ETABLISSEMENT_H
#define ETABLISSEMENT_H
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QString>

class etablissement
{
    QString nom, adresse, email, type;
    int id_etab, telephone;

public:
    etablissement();
    etablissement(int, QString, QString, int, QString, QString);

    int getID() { return id_etab; }
    QString getNom() { return nom; }
    QString getAdresse() { return adresse; }
    int getTelephone() { return telephone; }
    QString getEmail() { return email; }
    QString getType() { return type; }

    void setID(int id_etab) { this->id_etab = id_etab; }
    void setNom(QString nom) { this->nom = nom; }
    void setAdresse(QString adresse) { this->adresse = adresse; }
    void setTelephone(int telephone) { this->telephone = telephone; }
    void setEmail(QString email) { this->email = email; }
    void setType(QString type) { this->type = type; }

    bool ajouter();
    bool supprimer(int);
    void extracted(QSqlQueryModel *&model);
    QSqlQueryModel* afficher();
    bool modifier();

};

#endif // ETABLISSEMENT_H
