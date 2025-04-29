#ifndef GESTIONRESSOURCE_H
#define GESTIONRESSOURCE_H

#include <QString>
#include <QSqlQueryModel>

class GestionRessource {
public:
    GestionRessource();

    bool ajouter(int, QString, QString, int, QString, int);
    bool supprimer(int);
    bool modifier(int, QString, QString, int, QString, int);
    QSqlQueryModel* afficher();
    QSqlQueryModel* rechercher(const QString&);
    QSqlQueryModel* trier(const QString& critere, const QString& ordre);

    bool ajouterCheckOut(int idRessource, const QString& responsable, const QString& tel);
    bool envoyerSMS(const QString& tel, const QString& msg);
};

#endif // GESTIONRESSOURCE_H
