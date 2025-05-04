#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>
#include "etablissement.h"
#include "exam.h"
#include "arduino.h"
#include <QThread>

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

private slots:
    void on_loginButton_clicked();
    void on_etablissement_clicked();

    void on_etablissement2_clicked();

    void on_exam2_clicked();

    void on_exam_clicked();

    void on_ressource_clicked();

    void on_ressource2_clicked();

    void on_centreExam2_clicked();

    void on_centreExam_clicked();

    void on_candidat_clicked();

    void on_candidat2_clicked();

    void on_enseignant2_clicked();

    void on_enseignant_clicked();

    void on_etablissementEXAM_clicked();

    void on_examenEXAM_clicked();

    void on_ressourceEXAM_clicked();

    void on_centredEXAM_clicked();

    void on_candidatEXAM_clicked();

    void on_enseignantEXAM_clicked();

    void on_menubutton_clicked();

    void on_menubutton_3_clicked();

    void on_menubutton_2_clicked();


    //etablissement
    void on_b_valider_clicked();

    void on_b_supprimer_clicked();

    void on_b_modifier_clicked();

    void on_b_rechercher_clicked();

    void on_b_refresh_clicked();

    void on_btn_tri_clicked();

    void on_btn_pdf_clicked();

    void afficherStatistiques();



    //exam
    void updateTable();
    void on_tableView_clicked(const QModelIndex &index);
    void on_ajouterButton_clicked();
    void on_ajouterButton1_clicked();
    void on_supprimerButton_clicked();
    void on_chargerButton_clicked();
    void on_rechercherButton_clicked();
    void on_comboBoxTri_currentIndexChanged(int index);
    void on_genererButton_clicked();
    void on_statshow_clicked();
    void on_releasePortButton_clicked();
    void releaseSerialPort();
    void prepareForUpload();
    void addExam(QString nomExam, QDate dateExam);


    void on_menubutton_7_clicked();

    void on_etablissement2_3_clicked();

    void on_exam2_3_clicked();

    void on_ressource2_3_clicked();

    void on_centreExam2_3_clicked();

    void on_candidat2_3_clicked();

    void on_enseignant2_3_clicked();

    void on_menubutton_8_clicked();

    void on_etablissement2_4_clicked();

    void on_exam2_4_clicked();

    void on_ressource2_4_clicked();

    void on_centreExam2_4_clicked();

    void on_candidat2_4_clicked();

    void on_enseignant2_4_clicked();

    void on_menubutton_9_clicked();

    void on_etablissement2_5_clicked();

    void on_exam2_5_clicked();

    void on_ressource2_5_clicked();

    void on_centreExam2_5_clicked();

    void on_candidat2_5_clicked();

    void on_enseignant2_5_clicked();

    void on_menubutton_10_clicked();

    void on_etablissement2_6_clicked();

    void on_exam2_6_clicked();

    void on_ressource2_6_clicked();

    void on_centreExam2_6_clicked();

    void on_candidat2_6_clicked();

    void on_enseignant2_6_clicked();

    void on_logoutbutton_clicked();

    void on_logoutbutton_2_clicked();

    void on_logoutbutton_3_clicked();

    void on_logoutbutton_4_clicked();

    void on_logoutbutton_5_clicked();

    void on_logoutbutton_6_clicked();

    void on_logoutbutton_7_clicked();

private:
    Ui::MainWindow *ui;
    etablissement Etmp;
    QByteArray data; // variable contenant les données reçues
    Arduino *arduino;
    Arduino A; // objet temporaire
};
#endif // MAINWINDOW_H
