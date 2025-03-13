/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QPushButton *btnAjouter;
    QTableView *tableView_2;
    QPushButton *btnSupprimer;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QLineEdit *lineEdit_Id_Centre;
    QLineEdit *lineEdit_Nom_Centre;
    QTextEdit *textEdit_4;
    QLineEdit *lineEdit_Adresse;
    QTextEdit *textEdit_5;
    QLineEdit *lineEdit_Region;
    QTextEdit *textEdit_6;
    QLineEdit *lineEdit_Responsable;
    QTextEdit *textEdit_7;
    QLineEdit *lineEdit_Mail_Responsable;
    QTextEdit *textEdit_8;
    QTableView *tableView_4;
    QLineEdit *lineEdit_Id_Centre2;
    QLineEdit *lineEdit_Adresse2;
    QTextEdit *textEdit_11;
    QLineEdit *lineEdit_Mail_Responsable2;
    QTextEdit *textEdit_15;
    QLineEdit *lineEdit_Nom_Centre2;
    QLineEdit *lineEdit_Region2;
    QTextEdit *textEdit_13;
    QTextEdit *textEdit_14;
    QTextEdit *textEdit_9;
    QTextEdit *textEdit_12;
    QLineEdit *lineEdit_Responsable2;
    QPushButton *btnModifier;
    QTextEdit *textEdit_10;
    QTreeWidget *treeWidget_Centre;
    QTextEdit *textEdit_16;
    QLineEdit *lineEdit_Id_Centre3;
    QTableView *tableView_3;
    QTableView *tableView_5;
    QTextEdit *textEdit_17;
    QPushButton *pushButton_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QLineEdit *lineEdit_14;
    QTextEdit *textEdit_18;
    QPushButton *pushButton_5;
    QTextEdit *textEdit_19;
    QTableView *tableView_6;
    QTextEdit *textEdit_20;
    QPushButton *pushButton_6;
    QTextEdit *textEdit_21;
    QPushButton *btnSupprimer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1306, 877);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(60, 40, 261, 351));
        btnAjouter = new QPushButton(centralwidget);
        btnAjouter->setObjectName("btnAjouter");
        btnAjouter->setGeometry(QRect(140, 350, 93, 29));
        tableView_2 = new QTableView(centralwidget);
        tableView_2->setObjectName("tableView_2");
        tableView_2->setGeometry(QRect(350, 420, 261, 171));
        btnSupprimer = new QPushButton(centralwidget);
        btnSupprimer->setObjectName("btnSupprimer");
        btnSupprimer->setGeometry(QRect(430, 550, 93, 29));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(90, 50, 201, 31));
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(370, 430, 221, 31));
        textEdit_3 = new QTextEdit(centralwidget);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(70, 100, 111, 31));
        lineEdit_Id_Centre = new QLineEdit(centralwidget);
        lineEdit_Id_Centre->setObjectName("lineEdit_Id_Centre");
        lineEdit_Id_Centre->setGeometry(QRect(200, 100, 113, 31));
        lineEdit_Nom_Centre = new QLineEdit(centralwidget);
        lineEdit_Nom_Centre->setObjectName("lineEdit_Nom_Centre");
        lineEdit_Nom_Centre->setGeometry(QRect(200, 140, 113, 31));
        textEdit_4 = new QTextEdit(centralwidget);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setGeometry(QRect(70, 140, 111, 31));
        lineEdit_Adresse = new QLineEdit(centralwidget);
        lineEdit_Adresse->setObjectName("lineEdit_Adresse");
        lineEdit_Adresse->setGeometry(QRect(200, 180, 113, 31));
        textEdit_5 = new QTextEdit(centralwidget);
        textEdit_5->setObjectName("textEdit_5");
        textEdit_5->setGeometry(QRect(70, 180, 111, 31));
        lineEdit_Region = new QLineEdit(centralwidget);
        lineEdit_Region->setObjectName("lineEdit_Region");
        lineEdit_Region->setGeometry(QRect(200, 220, 113, 31));
        textEdit_6 = new QTextEdit(centralwidget);
        textEdit_6->setObjectName("textEdit_6");
        textEdit_6->setGeometry(QRect(70, 220, 111, 31));
        lineEdit_Responsable = new QLineEdit(centralwidget);
        lineEdit_Responsable->setObjectName("lineEdit_Responsable");
        lineEdit_Responsable->setGeometry(QRect(200, 260, 113, 31));
        textEdit_7 = new QTextEdit(centralwidget);
        textEdit_7->setObjectName("textEdit_7");
        textEdit_7->setGeometry(QRect(70, 260, 111, 31));
        lineEdit_Mail_Responsable = new QLineEdit(centralwidget);
        lineEdit_Mail_Responsable->setObjectName("lineEdit_Mail_Responsable");
        lineEdit_Mail_Responsable->setGeometry(QRect(200, 300, 113, 31));
        textEdit_8 = new QTextEdit(centralwidget);
        textEdit_8->setObjectName("textEdit_8");
        textEdit_8->setGeometry(QRect(70, 300, 111, 31));
        tableView_4 = new QTableView(centralwidget);
        tableView_4->setObjectName("tableView_4");
        tableView_4->setGeometry(QRect(60, 420, 261, 351));
        lineEdit_Id_Centre2 = new QLineEdit(centralwidget);
        lineEdit_Id_Centre2->setObjectName("lineEdit_Id_Centre2");
        lineEdit_Id_Centre2->setGeometry(QRect(200, 480, 113, 31));
        lineEdit_Id_Centre2->setReadOnly(true);
        lineEdit_Adresse2 = new QLineEdit(centralwidget);
        lineEdit_Adresse2->setObjectName("lineEdit_Adresse2");
        lineEdit_Adresse2->setGeometry(QRect(200, 560, 113, 31));
        textEdit_11 = new QTextEdit(centralwidget);
        textEdit_11->setObjectName("textEdit_11");
        textEdit_11->setGeometry(QRect(70, 520, 111, 31));
        lineEdit_Mail_Responsable2 = new QLineEdit(centralwidget);
        lineEdit_Mail_Responsable2->setObjectName("lineEdit_Mail_Responsable2");
        lineEdit_Mail_Responsable2->setGeometry(QRect(200, 680, 113, 31));
        textEdit_15 = new QTextEdit(centralwidget);
        textEdit_15->setObjectName("textEdit_15");
        textEdit_15->setGeometry(QRect(70, 600, 111, 31));
        lineEdit_Nom_Centre2 = new QLineEdit(centralwidget);
        lineEdit_Nom_Centre2->setObjectName("lineEdit_Nom_Centre2");
        lineEdit_Nom_Centre2->setGeometry(QRect(200, 520, 113, 31));
        lineEdit_Region2 = new QLineEdit(centralwidget);
        lineEdit_Region2->setObjectName("lineEdit_Region2");
        lineEdit_Region2->setGeometry(QRect(200, 600, 113, 31));
        textEdit_13 = new QTextEdit(centralwidget);
        textEdit_13->setObjectName("textEdit_13");
        textEdit_13->setGeometry(QRect(70, 480, 111, 31));
        textEdit_14 = new QTextEdit(centralwidget);
        textEdit_14->setObjectName("textEdit_14");
        textEdit_14->setGeometry(QRect(70, 640, 111, 31));
        textEdit_9 = new QTextEdit(centralwidget);
        textEdit_9->setObjectName("textEdit_9");
        textEdit_9->setGeometry(QRect(70, 560, 111, 31));
        textEdit_12 = new QTextEdit(centralwidget);
        textEdit_12->setObjectName("textEdit_12");
        textEdit_12->setGeometry(QRect(70, 680, 111, 31));
        lineEdit_Responsable2 = new QLineEdit(centralwidget);
        lineEdit_Responsable2->setObjectName("lineEdit_Responsable2");
        lineEdit_Responsable2->setGeometry(QRect(200, 640, 113, 31));
        btnModifier = new QPushButton(centralwidget);
        btnModifier->setObjectName("btnModifier");
        btnModifier->setGeometry(QRect(140, 730, 93, 29));
        textEdit_10 = new QTextEdit(centralwidget);
        textEdit_10->setObjectName("textEdit_10");
        textEdit_10->setGeometry(QRect(90, 430, 201, 31));
        treeWidget_Centre = new QTreeWidget(centralwidget);
        treeWidget_Centre->setObjectName("treeWidget_Centre");
        treeWidget_Centre->setGeometry(QRect(350, 40, 841, 351));
        textEdit_16 = new QTextEdit(centralwidget);
        textEdit_16->setObjectName("textEdit_16");
        textEdit_16->setGeometry(QRect(360, 480, 111, 31));
        lineEdit_Id_Centre3 = new QLineEdit(centralwidget);
        lineEdit_Id_Centre3->setObjectName("lineEdit_Id_Centre3");
        lineEdit_Id_Centre3->setGeometry(QRect(490, 480, 113, 31));
        tableView_3 = new QTableView(centralwidget);
        tableView_3->setObjectName("tableView_3");
        tableView_3->setGeometry(QRect(640, 420, 261, 351));
        tableView_5 = new QTableView(centralwidget);
        tableView_5->setObjectName("tableView_5");
        tableView_5->setGeometry(QRect(930, 420, 261, 351));
        textEdit_17 = new QTextEdit(centralwidget);
        textEdit_17->setObjectName("textEdit_17");
        textEdit_17->setGeometry(QRect(660, 430, 221, 31));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(730, 730, 93, 29));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(660, 490, 231, 24));
        checkBox_2 = new QCheckBox(centralwidget);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(660, 550, 231, 24));
        checkBox_3 = new QCheckBox(centralwidget);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setGeometry(QRect(660, 520, 231, 24));
        lineEdit_14 = new QLineEdit(centralwidget);
        lineEdit_14->setObjectName("lineEdit_14");
        lineEdit_14->setGeometry(QRect(490, 670, 113, 31));
        textEdit_18 = new QTextEdit(centralwidget);
        textEdit_18->setObjectName("textEdit_18");
        textEdit_18->setGeometry(QRect(360, 670, 111, 31));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(430, 740, 93, 29));
        textEdit_19 = new QTextEdit(centralwidget);
        textEdit_19->setObjectName("textEdit_19");
        textEdit_19->setGeometry(QRect(370, 620, 221, 31));
        tableView_6 = new QTableView(centralwidget);
        tableView_6->setObjectName("tableView_6");
        tableView_6->setGeometry(QRect(350, 610, 261, 161));
        textEdit_20 = new QTextEdit(centralwidget);
        textEdit_20->setObjectName("textEdit_20");
        textEdit_20->setGeometry(QRect(370, 620, 221, 31));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(1140, 780, 93, 29));
        textEdit_21 = new QTextEdit(centralwidget);
        textEdit_21->setObjectName("textEdit_21");
        textEdit_21->setGeometry(QRect(950, 430, 221, 31));
        btnSupprimer_2 = new QPushButton(centralwidget);
        btnSupprimer_2->setObjectName("btnSupprimer_2");
        btnSupprimer_2->setGeometry(QRect(430, 730, 93, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1306, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnAjouter->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        btnSupprimer->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Ajouter un Centre d'Examen</p></body></html>", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Supprimer un Centre d'examen</p></body></html>", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Id_Centre :</p></body></html>", nullptr));
        lineEdit_Id_Centre->setText(QString());
        lineEdit_Nom_Centre->setText(QString());
        textEdit_4->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Nom_Centre :</p></body></html>", nullptr));
        lineEdit_Adresse->setText(QString());
        textEdit_5->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Adresse :</p></body></html>", nullptr));
        lineEdit_Region->setText(QString());
        textEdit_6->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Region :</p></body></html>", nullptr));
        lineEdit_Responsable->setText(QString());
        textEdit_7->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Responsable :</p></body></html>", nullptr));
        lineEdit_Mail_Responsable->setText(QString());
        textEdit_8->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Mail_Resp :</p></body></html>", nullptr));
        lineEdit_Id_Centre2->setText(QString());
        lineEdit_Adresse2->setText(QString());
        textEdit_11->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Nom_Centre :</p></body></html>", nullptr));
        lineEdit_Mail_Responsable2->setText(QString());
        textEdit_15->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Region :</p></body></html>", nullptr));
        lineEdit_Nom_Centre2->setText(QString());
        lineEdit_Region2->setText(QString());
        textEdit_13->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Id_Centre :</p></body></html>", nullptr));
        textEdit_14->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Responsable :</p></body></html>", nullptr));
        textEdit_9->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Adresse :</p></body></html>", nullptr));
        textEdit_12->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Mail_Resp :</p></body></html>", nullptr));
        lineEdit_Responsable2->setText(QString());
        btnModifier->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        textEdit_10->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Modifier un Centre d'Examen</p></body></html>", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget_Centre->headerItem();
        ___qtreewidgetitem->setText(5, QCoreApplication::translate("MainWindow", "Mail Responsable", nullptr));
        ___qtreewidgetitem->setText(4, QCoreApplication::translate("MainWindow", "Responsable", nullptr));
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("MainWindow", "R\303\251gion", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("MainWindow", "Adresse", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("MainWindow", "Nom Centre", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "Id Centre", nullptr));
        textEdit_16->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Id_Centre :</p></body></html>", nullptr));
        lineEdit_Id_Centre3->setText(QString());
        textEdit_17->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Contrat de Verification</p></body></html>", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Imprimer", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "Condition d'examen v\303\251rifi\303\251e", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "Respect des lois d'\303\251ducation", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "Centre certifi\303\251 par le minist\303\251re", nullptr));
        lineEdit_14->setText(QString());
        textEdit_18->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Id_Centre :</p></body></html>", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        textEdit_19->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Supprimer un Centre d'examen</p></body></html>", nullptr));
        textEdit_20->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Notification mail</p></body></html>", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Version PDF", nullptr));
        textEdit_21->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Statistique</p></body></html>", nullptr));
        btnSupprimer_2->setText(QCoreApplication::translate("MainWindow", "Envoy\303\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
