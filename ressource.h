#ifndef RESSOURCE_H
#define RESSOURCE_H
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QString>

class ressource
{
    QString nom,status, type;
    int ID, quantite;
public:
    ressource();
    ressource(int, QString, QString, QString, int);

    int getID() { return ID; }
    QString getNom() { return nom; }
    QString getstatus() { return status; }
    QString getType() { return type; }
    int getQuantite() { return quantite; }

    void setID(int ID) { this->ID = ID; }
    void setNom(QString nom) { this->nom = nom; }
    void setStatus(QString status) { this->status = status; }
    void setType(QString type) { this->type = type; }
    void setQuantite(int quantite) { this->quantite = quantite; }

    bool ajouter();
    bool supprimer(int);
    void extracted(QSqlQueryModel *&model);
    QSqlQueryModel* afficher();
    bool modifier();
};

#endif // RESSOURCE_H


