#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "enseignant.h"
#include <QMainWindow>
#include <QVariant>
#include "chatbotwindow.h"


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
    void on_ajout_clicked();

    void on_supp_clicked();

    void on_modifier_clicked();



    void on_rechercher_clicked();

    void on_refresh_clicked();

    void on_btn_tri_clicked();

    void on_btn_pdf_clicked();

    void afficherStatistiques();



    void on_btnChatbot_clicked();

private:
    Ui::MainWindow *ui;
    enseignant Etmp;

signals:
    void setCenter(QVariant, QVariant);
};

#endif // MAINWINDOW_H


