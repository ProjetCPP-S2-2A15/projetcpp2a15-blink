#ifndef CENTRE_H
#define CENTRE_H

#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QString>

class Centre
{
    QString Nom_Centre, Adresse, Region, Responsable, Mail_Responsable;
    int Id_Centre;

public:
    Centre() {}
    Centre(int, QString, QString, QString, QString, QString);

    QString getNom_Centre() { return Nom_Centre; }
    QString getAdresse() { return Adresse; }
    QString getRegion() { return Region; }
    QString getResponsable() { return Responsable; }
    QString getMail_Responsable() { return Mail_Responsable; }
    int getId_Centre() { return Id_Centre; }

    void setNom_Centre(QString n) { Nom_Centre = n; }
    void setAdresse(QString a) { Adresse = a; }
    void setRegion(QString r) { Region = r; }
    void setResponsable(QString res) { Responsable = res; }
    void setMail_Responsable(QString mr) { Mail_Responsable = mr; }
    void setId_Centre(int id) { Id_Centre = id; }

    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int);
    bool modifier();
    bool existe (int);
};

#endif // CENTRE_H
