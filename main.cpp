#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include "connection.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
#include <connection.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Connection c;

    bool test = c.createconnect();
    if (test) {
        w.show();
        QMessageBox::information(nullptr, QObject::tr("Connexion à la base de données"),
                                 QObject::tr("Connexion réussie.\nCliquez sur OK pour continuer."),
                                 QMessageBox::Ok);
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Connexion à la base de données"),
                              QObject::tr("Échec de la connexion.\nCliquez sur OK pour quitter."),
                              QMessageBox::Ok);
    }

    return a.exec();
}
