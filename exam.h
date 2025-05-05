#ifndef EXAM_H
#define EXAM_H

#include <QString>
#include <QDate>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError> // Added to provide the full definition of QSqlError

class Exam {
private:
    QString id_exam;
    QString nom_exam;
    QString niveau;
    QString exam_session;
    QDate date_exam;
    int nombre_de_copie;
    QString pdf;

public:
    Exam() {}
    Exam(QString, QString, QString, QString, QDate, int, QString);

    QString getIdExam() { return id_exam; }
    QString getNomExam() { return nom_exam; }
    QString getNiveau() { return niveau; }
    QString getExamSession() { return exam_session; }
    QDate getDateExam() { return date_exam; }
    int getNombreDeCopie() { return nombre_de_copie; }
    QString getPdf() { return pdf; }

    void setIdExam(QString id) { id_exam = id; }
    void setNomExam(QString nom) { nom_exam = nom; }
    void setNiveau(QString niv) { niveau = niv; }
    void setExamSession(QString session) { exam_session = session; }
    void setDateExam(QDate date) { date_exam = date; }
    void setNombreDeCopie(int copies) { nombre_de_copie = copies; }
    void setPdf(QString path) { pdf = path; }

    bool ajouter();
    QSqlQueryModel* afficher();
    bool modifierParId(QString id);
    bool supprimer(QString id);
    QSqlQueryModel* rechercher(QString searchText);
    QSqlQueryModel* trier(QString critere, QString ordre);
    Exam getExamById(QString id);
};

#endif // EXAM_H
