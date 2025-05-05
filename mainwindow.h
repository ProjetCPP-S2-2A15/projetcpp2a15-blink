#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QTableWidget>
//#include <tesseract/baseapi.h>
//#include <leptonica/allheaders.h>
#include <QTranslator>



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


/*private slots:
    void afficherStatistiques();*/

/*private:
    void afficherTotalCandidats();
    void afficherParNiveau();
    void afficherParAge();
    void afficherParVille();
    void afficherNaissanceParAnnee();

    QChartView* creerBarChart(const QString& titre, const QMap<QString, int>& donnees);
    QChartView* creerPieChart(const QString& titre, const QMap<QString, int>& donnees);
};*/

/*private:
    QString ocrCarteIdentite(const QString &imagePath);
    QString traduireTexte(const QString &texte);
    void remplirChamps(const QString &texteOCR);
};*/

private:
    Ui::MainWindow *ui;
    QString imagePath;
};

#endif // MAINWINDOW_H
