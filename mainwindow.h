#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QTableWidget>
#include <QDateEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onAjouterClicked();  // Slot for the "ajouter" button
    void onSupprimerClicked(); // Slot for the "supprimer" button

private:
    // UI elements
    QLineEdit *id_examen;
    QLineEdit *nom_ex;
    QLineEdit *niveau_ex;
    QLineEdit *session;
    QDateEdit *date_examen;
    QLineEdit *nombre;
    QLineEdit *id_2; // For deleting
    QTableWidget *table;
    QPushButton *pushButton;  // "ajouter" button
    QPushButton *pushButton_2; // "supprimer" button
};

#endif // MAINWINDOW_H
