#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "exam.h"
#include "arduino.h"
#include <QThread>  // Add to mainwindow.h instead
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();




private slots:
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

private:
    Ui::MainWindow *ui;
    QByteArray data; // variable contenant les données reçues
Arduino *arduino;
    Arduino A; // objet temporaire
};

#endif // MAINWINDOW_H
