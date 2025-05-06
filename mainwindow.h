#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTreeWidgetItem>
#include "centre.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void afficherCentres();

private slots:
    void ajouterCentre();
    void on_treeWidget_Centre_itemClicked(QTreeWidgetItem *item, int column);
    void modifierCentre();
    void supprimerCentre();
    void clearFieldsAdd();
    void clearFieldsUpdate();
    void exporterPDF();
    void filtrerCentres();
    void afficherStatistiques();
    void ContratDeVerification();
    void envoyerEmail();

private:
    Ui::MainWindow *ui;
    Centre centre;
};
#endif // MAINWINDOW_H
