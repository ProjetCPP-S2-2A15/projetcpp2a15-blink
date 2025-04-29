#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ressource.h"
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
    void afficherStatistiques();

    void on_ajout_clicked();

    void on_supp_clicked();

    void on_modifier_clicked();

    void on_rechercher_clicked();

    void on_refresh_clicked();

    void on_btn_tri_clicked();

    void on_btn_pdf_clicked();

private:
    Ui::MainWindow *ui;
    ressource Etmp;
};

#endif // MAINWINDOW_H
