#include "gestionressource.h"
#include <QSqlQuery>
#include <QVariant>
#include <QDebug>

GestionRessource::GestionRessource() {}

bool GestionRessource::ajouter(int id, QString nom, QString type, int quantite, QString statut, int idCentre) {
    QSqlQuery q;
    q.prepare("INSERT INTO RESSOURCE (ID_Ressource, Nom_Ressource, Type, Quantite_Disponible, Statut, ID_Centre) "
              "VALUES (:id, :nom, :type, :quantite, :statut, :idCentre)");
    q.bindValue(":id", id);
    q.bindValue(":nom", nom);
    q.bindValue(":type", type);
    q.bindValue(":quantite", quantite);
    q.bindValue(":statut", statut);
    q.bindValue(":idCentre", idCentre);
    return q.exec();
}

bool GestionRessource::supprimer(int id) {
    QSqlQuery q;
    q.prepare("DELETE FROM RESSOURCE WHERE ID_Ressource = :id");
    q.bindValue(":id", id);
    return q.exec();
}

bool GestionRessource::modifier(int id, QString nom, QString type, int quantite, QString statut, int idCentre) {
    QSqlQuery q;
    q.prepare("UPDATE RESSOURCE SET Nom_Ressource=:nom, Type=:type, Quantite_Disponible=:qte, "
              "Statut=:statut, ID_Centre=:centre WHERE ID_Ressource=:id");
    q.bindValue(":nom", nom);
    q.bindValue(":type", type);
    q.bindValue(":qte", quantite);
    q.bindValue(":statut", statut);
    q.bindValue(":centre", idCentre);
    q.bindValue(":id", id);
    return q.exec();
}

QSqlQueryModel* GestionRessource::afficher() {
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM RESSOURCE");
    return model;
}

QSqlQueryModel* GestionRessource::rechercher(const QString& val) {
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM RESSOURCE WHERE LOWER(Nom_Ressource) LIKE LOWER('%" + val + "%') "
                                                                                               "OR CAST(ID_Ressource AS VARCHAR2(20)) LIKE '%" + val + "%'");
    return model;
}

QSqlQueryModel* GestionRessource::trier(const QString& critere, const QString& ordre) {
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM RESSOURCE ORDER BY " + critere + " " + ordre);
    return model;
}

bool GestionRessource::ajouterCheckOut(int idRessource, const QString& responsable, const QString& tel) {
    QSqlQuery q;
    q.prepare("INSERT INTO Agenda (ID_Ressource, Date_Check, Type_Action, Nom_Responsable, Tel_Responsable) "
              "VALUES (:id, SYSDATE, 'Check-out', :nom, :tel)");
    q.bindValue(":id", idRessource);
    q.bindValue(":nom", responsable);
    q.bindValue(":tel", tel);

    bool ok = q.exec();
    if (ok) {
        QString message = "Matériel ID " + QString::number(idRessource) + " prêté à " + responsable;
        return envoyerSMS(tel, message);
    }
    return false;
}

bool GestionRessource::envoyerSMS(const QString& tel, const QString& msg) {
    qDebug() << "SMS envoyé à " << tel << ": " << msg;

    return true;
}
