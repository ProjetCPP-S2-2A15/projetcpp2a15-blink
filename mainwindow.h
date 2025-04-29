#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "etablissement.h"
#include <QMainWindow>
#include <QVariant>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_b_valider_clicked();
    void on_b_supprimer_clicked();
    void on_b_modifier_clicked();

    void on_b_rechercher_clicked();

    void on_b_refresh_clicked();


    void on_btn_tri_clicked();

    void on_btn_pdf_clicked();

    void afficherStatistiques();

private:
    Ui::MainWindow *ui;
    etablissement Etmp;

signals:
    void setCenter(QVariant, QVariant);
};

#endif // MAINWINDOW_H
