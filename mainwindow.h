#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QTableWidget>
#include <tesseract/baseapi.h>
#include <leptonica/allheaders.h>
#include <QTranslator>



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
    void addCandidat();
    void clearForm();

private slots:
    void on_RECHERCHER_clicked();

private slots:
    void exportToPDF(QTableWidget* table);   // ← Déclaration correcte
    void exportToExcel(QTableWidget* table); // ← Déclaration correcte

private slots:
    void sortTableData();                    // ← Aussi ici

private slots:
    void on_MODIFIERC_clicked();

private slots:
    void on_SUPPRIMER_clicked();

private slots:
    void on_B_IMAGE_clicked();
    void on_INSERER_IMAGE_clicked();
    void on_ANNULER_IMAGE_clicked();

private:
    QString imagePath;


private slots:
    void on_INSERER2_clicked();
    void on_ANNULER4_clicked();

private slots:
    void afficherStatistiques();

private:
    Ui::MainWindow *ui;

    void afficherTotalCandidats();
    void afficherParNiveau();
    void afficherParAge();
    void afficherParVille();
    void afficherNaissanceParAnnee();

    QChartView* creerBarChart(const QString& titre, const QMap<QString, int>& donnees);
    QChartView* creerPieChart(const QString& titre, const QMap<QString, int>& donnees);
};

private:
    QString ocrCarteIdentite(const QString &imagePath);
    QString traduireTexte(const QString &texte);
    void remplirChamps(const QString &texteOCR);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
