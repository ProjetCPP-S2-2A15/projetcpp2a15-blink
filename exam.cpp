#include "exam.h"
#include <QDebug>

Exam::Exam(QString id, QString nom, QString niv, QString session, QDate date, int copies, QString pdfPath)
    : id_exam(id), nom_exam(nom), niveau(niv), exam_session(session), date_exam(date),
    nombre_de_copie(copies), pdf(pdfPath) {}

bool Exam::ajouter() {
    try {
        // Check database connection
        QSqlDatabase db = QSqlDatabase::database();
        if (!db.isOpen()) {
            qDebug() << "Database connection is not open!";
            return false;
        }

        // Insert the new exam
        QSqlQuery query;
        query.prepare("INSERT INTO exam (nom_exam, niveau, exam_session, date_exam, nombre_de_copie, pdf) "
                      "VALUES (:nom_exam, :niveau, :exam_session, :date_exam, :nombre_de_copie, :pdf)");
        query.bindValue(":nom_exam", nom_exam);
        query.bindValue(":niveau", niveau);
        query.bindValue(":exam_session", exam_session);
        query.bindValue(":date_exam", date_exam);
        query.bindValue(":nombre_de_copie", nombre_de_copie);
        query.bindValue(":pdf", pdf);

        qDebug() << "Executing INSERT query with values:"
                 << "nom_exam:" << nom_exam
                 << "niveau:" << niveau
                 << "exam_session:" << exam_session
                 << "date_exam:" << date_exam.toString("yyyy-MM-dd")
                 << "nombre_de_copie:" << nombre_de_copie
                 << "pdf:" << pdf;

        if (!query.exec()) {
            qDebug() << "Insert error:" << query.lastError().text();
            return false;
        }

        qDebug() << "Insert succeeded";

        // Get the last inserted ID
        QSqlQuery idQuery;
        idQuery.prepare("SELECT MAX(id_exam) as last_id FROM exam");
        if (idQuery.exec() && idQuery.next()) {
            id_exam = idQuery.value("last_id").toString();
            qDebug() << "Inserted exam with ID:" << id_exam;
        } else {
            qDebug() << "Failed to retrieve inserted ID:" << idQuery.lastError().text();
            // Don't return false here, the insert was successful
        }

        return true;
    } catch (const std::exception& e) {
        qDebug() << "Exception caught in ajouter:" << e.what();
        return false;
    } catch (...) {
        qDebug() << "Unknown exception caught in ajouter";
        return false;
    }
}

QSqlQueryModel* Exam::afficher() {
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("SELECT id_exam, nom_exam, niveau, exam_session, date_exam, nombre_de_copie, pdf FROM exam");
    if (!query.exec()) {
        qDebug() << "Select error in afficher:" << query.lastError().text();
    }

    model->setQuery(std::move(query));
    qDebug() << "Rows retrieved in afficher:" << model->rowCount();

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID Examen"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom d'examen"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Niveau"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Session"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Date"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Nombre de copie"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("PDF"));

    return model;
}

bool Exam::modifierParId(QString id) {
    try {
        QSqlQuery query;
        query.prepare("UPDATE exam SET nom_exam = :nom_exam, niveau = :niveau, exam_session = :exam_session, "
                      "date_exam = :date_exam, nombre_de_copie = :nombre_de_copie, pdf = :pdf WHERE id_exam = :id");
        query.bindValue(":nom_exam", nom_exam);
        query.bindValue(":niveau", niveau);
        query.bindValue(":exam_session", exam_session);
        query.bindValue(":date_exam", date_exam);
        query.bindValue(":nombre_de_copie", nombre_de_copie);
        query.bindValue(":pdf", pdf);
        query.bindValue(":id", id);

        if (!query.exec()) {
            qDebug() << "Update error in modifierParId:" << query.lastError().text();
            return false;
        }

        qDebug() << "Exam with ID" << id << "updated successfully";
        return true;
    } catch (const std::exception& e) {
        qDebug() << "Exception caught in modifierParId:" << e.what();
        return false;
    } catch (...) {
        qDebug() << "Unknown exception caught in modifierParId";
        return false;
    }
}

bool Exam::supprimer(QString id) {
    QSqlQuery query;
    query.prepare("DELETE FROM exam WHERE id_exam = :id");
    query.bindValue(":id", id);
    return query.exec();
}

QSqlQueryModel* Exam::rechercher(QString searchText) {
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("SELECT id_exam, nom_exam, niveau, exam_session, date_exam, nombre_de_copie, pdf FROM exam "
                  "WHERE nom_exam LIKE '%' || :searchText || '%' OR id_exam LIKE '%' || :searchText || '%'");
    query.bindValue(":searchText", searchText);
    if (!query.exec()) {
        qDebug() << "Search error:" << query.lastError().text();
    }

    model->setQuery(std::move(query));

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID Examen"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom d'examen"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Niveau"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Session"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Date"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Nombre de copie"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("PDF"));

    return model;
}

QSqlQueryModel* Exam::trier(QString critere, QString ordre) {
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("SELECT id_exam, nom_exam, niveau, exam_session, date_exam, nombre_de_copie, pdf FROM exam "
                  "ORDER BY " + critere + " " + ordre);
    if (!query.exec()) {
        qDebug() << "Sort error:" << query.lastError().text();
    }

    model->setQuery(std::move(query));

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID Examen"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom d'examen"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Niveau"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Session"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Date"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Nombre de copie"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("PDF"));

    return model;
}

Exam Exam::getExamById(QString id) {
    QSqlQuery query;
    query.prepare("SELECT id_exam, nom_exam, niveau, exam_session, date_exam, nombre_de_copie, pdf FROM exam WHERE id_exam = :id");
    query.bindValue(":id", id);
    if (query.exec() && query.next()) {
        return Exam(
            query.value("id_exam").toString(),
            query.value("nom_exam").toString(),
            query.value("niveau").toString(),
            query.value("exam_session").toString(),
            query.value("date_exam").toDate(),
            query.value("nombre_de_copie").toInt(),
            query.value("pdf").toString()
            );
    }
    return Exam();
}
