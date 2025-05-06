#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QTableWidget>
#include "statsdialog.h"
#include <QtCharts>



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    //void on_INSERER2_clicked();
    //void on_ANNULER4_clicked();
    void on_ANNULER1_clicked();
    void on_ANNULER2_clicked();
    void on_ANNULER5_clicked();
    void on_ANNULER6_clicked();
    void on_addCandidat_clicked();
    //void clearForm();
    void on_RECHERCHER_clicked();
    void exportToPDF(QTableWidget* table);   // ← Déclaration correcte
    void exportToExcel(QTableWidget* table); // ← Déclaration correcte
    void sortTableData();
    void on_MODIFIERC_clicked();
    void on_SUPPRIMER_clicked();
    void on_IMAGE_clicked();
    void on_INSERER1_clicked();
    void on_ANNULER3_clicked();
    void afficherStatistiques();

private:
    QMap<QString, int> getStatsNiveau();
    QMap<QString, int> getStatsAge();
    QMap<QString, int> getStatsVille();
    QMap<QString, int> getStatsNaissance();
    int getTotalCandidats();
    QChartView* creerBarChart(const QString& titre, const QMap<QString, int>& donnees);
    QChartView* creerPieChart(const QString& titre, const QMap<QString, int>& donnees);

private:
    Ui::MainWindow *ui;
    QString imagePath;
};

#endif // MAINWINDOW_H
