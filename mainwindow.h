#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "enseignant.h"
#include "QtWidgets/qmainwindow.h"
#include "enseignant.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Enseignant e;
    void on_addbutton_clicked();
    void on_pushButtonsupprimer_clicked();
    void on_updateButton_clicked();
    void on_refresh_clicked();

};
#endif // MAINWINDOW_H
