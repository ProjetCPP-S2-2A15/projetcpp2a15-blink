#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include "connection.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
    Connection c;
    ChatbotWindow b;
    bool test = c.createconnect();

    if (test) {
        w.show();
        QMessageBox::information(nullptr, QObject::tr("Database is open"),
                                 QObject::tr("Connection successful.\nClick Cancel to exit."), QMessageBox::Cancel);
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Database is not open"),
                              QObject::tr("Connection failed.\nClick Cancel to exit."), QMessageBox::Cancel);
    }

    b.show();
    return a.exec();
}
