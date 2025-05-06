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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTreeWidget *treeWidget_Centre;
    QTableView *tableView_5;
    QTextEdit *textEdit_17;
    QPushButton *btnContratDeVerification;
    QCheckBox *checkBox1;
    QCheckBox *checkBox3;
    QCheckBox *checkBox2;
    QLineEdit *lineEdit_14;
    QTextEdit *textEdit_18;
    QPushButton *pushButton_5;
    QTextEdit *textEdit_19;
    QTableView *tableView_6;
    QTextEdit *textEdit_20;
    QPushButton *btnExporterPDF;
    QLineEdit *lineEdit_Recherche;
    QPushButton *btnEnvoiMail;
    QTableView *tableView_7;
    QTextEdit *textEdit_22;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTextEdit *textEdit_5;
    QTextEdit *textEdit_4;
    QLineEdit *lineEdit_Responsable;
    QTextEdit *textEdit_7;
    QLineEdit *lineEdit_Id_Centre;
    QLineEdit *lineEdit_Adresse;
    QLineEdit *lineEdit_Region;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_8;
    QLineEdit *lineEdit_Nom_Centre;
    QLineEdit *lineEdit_Mail_Responsable;
    QTextEdit *textEdit;
    QTextEdit *textEdit_6;
    QPushButton *btnAjouter;
    QWidget *tab_2;
    QTextEdit *textEdit_10;
    QLineEdit *lineEdit_Nom_Centre2;
    QTextEdit *textEdit_12;
    QLineEdit *lineEdit_Adresse2;
    QLineEdit *lineEdit_Id_Centre2;
    QTextEdit *textEdit_15;
    QTextEdit *textEdit_9;
    QTextEdit *textEdit_14;
    QTextEdit *textEdit_11;
    QLineEdit *lineEdit_Region2;
    QTextEdit *textEdit_13;
    QLineEdit *lineEdit_Mail_Responsable2;
    QLineEdit *lineEdit_Responsable2;
    QPushButton *btnModifier;
    QWidget *tab_3;
    QPushButton *btnSupprimer;
    QLineEdit *lineEdit_Id_Centre3;
    QWidget *statistiqueWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1579, 985);
        QFont font;
        font.setPointSize(9);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(133, 161, 193);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        treeWidget_Centre = new QTreeWidget(centralwidget);
        treeWidget_Centre->setObjectName("treeWidget_Centre");
        treeWidget_Centre->setGeometry(QRect(690, 70, 771, 291));
        treeWidget_Centre->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        treeWidget_Centre->setSortingEnabled(true);
        tableView_5 = new QTableView(centralwidget);
        tableView_5->setObjectName("tableView_5");
        tableView_5->setGeometry(QRect(620, 390, 261, 351));
        tableView_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        textEdit_17 = new QTextEdit(centralwidget);
        textEdit_17->setObjectName("textEdit_17");
        textEdit_17->setGeometry(QRect(640, 400, 221, 31));
        btnContratDeVerification = new QPushButton(centralwidget);
        btnContratDeVerification->setObjectName("btnContratDeVerification");
        btnContratDeVerification->setGeometry(QRect(710, 700, 93, 29));
        checkBox1 = new QCheckBox(centralwidget);
        checkBox1->setObjectName("checkBox1");
        checkBox1->setGeometry(QRect(640, 490, 231, 24));
        checkBox1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        checkBox3 = new QCheckBox(centralwidget);
        checkBox3->setObjectName("checkBox3");
        checkBox3->setGeometry(QRect(640, 590, 231, 24));
        checkBox3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        checkBox2 = new QCheckBox(centralwidget);
        checkBox2->setObjectName("checkBox2");
        checkBox2->setGeometry(QRect(640, 540, 231, 24));
        checkBox2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_14 = new QLineEdit(centralwidget);
        lineEdit_14->setObjectName("lineEdit_14");
        lineEdit_14->setGeometry(QRect(470, 450, 113, 31));
        textEdit_18 = new QTextEdit(centralwidget);
        textEdit_18->setObjectName("textEdit_18");
        textEdit_18->setGeometry(QRect(340, 450, 111, 31));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(410, 520, 93, 29));
        textEdit_19 = new QTextEdit(centralwidget);
        textEdit_19->setObjectName("textEdit_19");
        textEdit_19->setGeometry(QRect(350, 400, 221, 31));
        tableView_6 = new QTableView(centralwidget);
        tableView_6->setObjectName("tableView_6");
        tableView_6->setGeometry(QRect(330, 390, 261, 351));
        tableView_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        textEdit_20 = new QTextEdit(centralwidget);
        textEdit_20->setObjectName("textEdit_20");
        textEdit_20->setGeometry(QRect(350, 400, 221, 31));
        btnExporterPDF = new QPushButton(centralwidget);
        btnExporterPDF->setObjectName("btnExporterPDF");
        btnExporterPDF->setGeometry(QRect(1370, 10, 93, 41));
        lineEdit_Recherche = new QLineEdit(centralwidget);
        lineEdit_Recherche->setObjectName("lineEdit_Recherche");
        lineEdit_Recherche->setGeometry(QRect(690, 10, 671, 41));
        lineEdit_Recherche->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        btnEnvoiMail = new QPushButton(centralwidget);
        btnEnvoiMail->setObjectName("btnEnvoiMail");
        btnEnvoiMail->setGeometry(QRect(410, 700, 93, 29));
        tableView_7 = new QTableView(centralwidget);
        tableView_7->setObjectName("tableView_7");
        tableView_7->setGeometry(QRect(40, 10, 261, 731));
        tableView_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        textEdit_22 = new QTextEdit(centralwidget);
        textEdit_22->setObjectName("textEdit_22");
        textEdit_22->setGeometry(QRect(70, 30, 201, 41));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 150, 261, 61));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(40, 210, 261, 61));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(40, 330, 261, 61));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(40, 270, 261, 61));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(40, 450, 261, 61));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(40, 390, 261, 61));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(330, 0, 321, 371));
        tabWidget->setTabBarAutoHide(true);
        tab = new QWidget();
        tab->setObjectName("tab");
        textEdit_5 = new QTextEdit(tab);
        textEdit_5->setObjectName("textEdit_5");
        textEdit_5->setGeometry(QRect(20, 140, 111, 31));
        textEdit_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        textEdit_4 = new QTextEdit(tab);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setGeometry(QRect(20, 100, 111, 31));
        textEdit_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_Responsable = new QLineEdit(tab);
        lineEdit_Responsable->setObjectName("lineEdit_Responsable");
        lineEdit_Responsable->setGeometry(QRect(150, 220, 113, 31));
        lineEdit_Responsable->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        textEdit_7 = new QTextEdit(tab);
        textEdit_7->setObjectName("textEdit_7");
        textEdit_7->setGeometry(QRect(20, 220, 111, 31));
        textEdit_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_Id_Centre = new QLineEdit(tab);
        lineEdit_Id_Centre->setObjectName("lineEdit_Id_Centre");
        lineEdit_Id_Centre->setGeometry(QRect(150, 60, 113, 31));
        lineEdit_Id_Centre->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_Adresse = new QLineEdit(tab);
        lineEdit_Adresse->setObjectName("lineEdit_Adresse");
        lineEdit_Adresse->setGeometry(QRect(150, 140, 113, 31));
        lineEdit_Adresse->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_Region = new QLineEdit(tab);
        lineEdit_Region->setObjectName("lineEdit_Region");
        lineEdit_Region->setGeometry(QRect(150, 180, 113, 31));
        lineEdit_Region->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        textEdit_3 = new QTextEdit(tab);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(20, 60, 111, 31));
        textEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        textEdit_8 = new QTextEdit(tab);
        textEdit_8->setObjectName("textEdit_8");
        textEdit_8->setGeometry(QRect(20, 260, 111, 31));
        textEdit_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_Nom_Centre = new QLineEdit(tab);
        lineEdit_Nom_Centre->setObjectName("lineEdit_Nom_Centre");
        lineEdit_Nom_Centre->setGeometry(QRect(150, 100, 113, 31));
        lineEdit_Nom_Centre->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_Mail_Responsable = new QLineEdit(tab);
        lineEdit_Mail_Responsable->setObjectName("lineEdit_Mail_Responsable");
        lineEdit_Mail_Responsable->setGeometry(QRect(150, 260, 113, 31));
        lineEdit_Mail_Responsable->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        textEdit = new QTextEdit(tab);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(40, 10, 201, 31));
        textEdit_6 = new QTextEdit(tab);
        textEdit_6->setObjectName("textEdit_6");
        textEdit_6->setGeometry(QRect(20, 180, 111, 31));
        textEdit_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        btnAjouter = new QPushButton(tab);
        btnAjouter->setObjectName("btnAjouter");
        btnAjouter->setGeometry(QRect(90, 310, 93, 29));
        btnAjouter->setFont(font);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        textEdit_10 = new QTextEdit(tab_2);
        textEdit_10->setObjectName("textEdit_10");
        textEdit_10->setGeometry(QRect(50, 10, 221, 31));
        lineEdit_Nom_Centre2 = new QLineEdit(tab_2);
        lineEdit_Nom_Centre2->setObjectName("lineEdit_Nom_Centre2");
        lineEdit_Nom_Centre2->setGeometry(QRect(170, 100, 113, 31));
        lineEdit_Nom_Centre2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        textEdit_12 = new QTextEdit(tab_2);
        textEdit_12->setObjectName("textEdit_12");
        textEdit_12->setGeometry(QRect(40, 260, 111, 31));
        textEdit_12->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_Adresse2 = new QLineEdit(tab_2);
        lineEdit_Adresse2->setObjectName("lineEdit_Adresse2");
        lineEdit_Adresse2->setGeometry(QRect(170, 140, 113, 31));
        lineEdit_Adresse2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_Id_Centre2 = new QLineEdit(tab_2);
        lineEdit_Id_Centre2->setObjectName("lineEdit_Id_Centre2");
        lineEdit_Id_Centre2->setGeometry(QRect(170, 60, 113, 31));
        lineEdit_Id_Centre2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_Id_Centre2->setReadOnly(true);
        textEdit_15 = new QTextEdit(tab_2);
        textEdit_15->setObjectName("textEdit_15");
        textEdit_15->setGeometry(QRect(40, 180, 111, 31));
        textEdit_15->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        textEdit_9 = new QTextEdit(tab_2);
        textEdit_9->setObjectName("textEdit_9");
        textEdit_9->setGeometry(QRect(40, 140, 111, 31));
        textEdit_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        textEdit_14 = new QTextEdit(tab_2);
        textEdit_14->setObjectName("textEdit_14");
        textEdit_14->setGeometry(QRect(40, 220, 111, 31));
        textEdit_14->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        textEdit_11 = new QTextEdit(tab_2);
        textEdit_11->setObjectName("textEdit_11");
        textEdit_11->setGeometry(QRect(40, 100, 111, 31));
        textEdit_11->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_Region2 = new QLineEdit(tab_2);
        lineEdit_Region2->setObjectName("lineEdit_Region2");
        lineEdit_Region2->setGeometry(QRect(170, 180, 113, 31));
        lineEdit_Region2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        textEdit_13 = new QTextEdit(tab_2);
        textEdit_13->setObjectName("textEdit_13");
        textEdit_13->setGeometry(QRect(40, 60, 111, 31));
        textEdit_13->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_Mail_Responsable2 = new QLineEdit(tab_2);
        lineEdit_Mail_Responsable2->setObjectName("lineEdit_Mail_Responsable2");
        lineEdit_Mail_Responsable2->setGeometry(QRect(170, 260, 113, 31));
        lineEdit_Mail_Responsable2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_Responsable2 = new QLineEdit(tab_2);
        lineEdit_Responsable2->setObjectName("lineEdit_Responsable2");
        lineEdit_Responsable2->setGeometry(QRect(170, 220, 113, 31));
        lineEdit_Responsable2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        btnModifier = new QPushButton(tab_2);
        btnModifier->setObjectName("btnModifier");
        btnModifier->setGeometry(QRect(110, 310, 93, 31));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        btnSupprimer = new QPushButton(tab_3);
        btnSupprimer->setObjectName("btnSupprimer");
        btnSupprimer->setGeometry(QRect(110, 210, 93, 41));
        lineEdit_Id_Centre3 = new QLineEdit(tab_3);
        lineEdit_Id_Centre3->setObjectName("lineEdit_Id_Centre3");
        lineEdit_Id_Centre3->setGeometry(QRect(160, 130, 113, 31));
        lineEdit_Id_Centre3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab_3, QString());
        statistiqueWidget = new QWidget(centralwidget);
        statistiqueWidget->setObjectName("statistiqueWidget");
        statistiqueWidget->setGeometry(QRect(890, 370, 591, 391));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1579, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget_Centre->headerItem();
        ___qtreewidgetitem->setText(5, QCoreApplication::translate("MainWindow", "Mail Responsable", nullptr));
        ___qtreewidgetitem->setText(4, QCoreApplication::translate("MainWindow", "Responsable", nullptr));
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("MainWindow", "R\303\251gion", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("MainWindow", "Adresse", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("MainWindow", "Nom Centre", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "Id Centre", nullptr));
        textEdit_17->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Contrat de Verification</p></body></html>", nullptr));
        btnContratDeVerification->setText(QCoreApplication::translate("MainWindow", "Imprimer", nullptr));
        checkBox1->setText(QCoreApplication::translate("MainWindow", "Condition d'examen v\303\251rifi\303\251e", nullptr));
        checkBox3->setText(QCoreApplication::translate("MainWindow", "Respect des lois d'\303\251ducation", nullptr));
        checkBox2->setText(QCoreApplication::translate("MainWindow", "Centre certifi\303\251 par le minist\303\251re", nullptr));
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
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Notification Mail</p></body></html>", nullptr));
        btnExporterPDF->setText(QCoreApplication::translate("MainWindow", "Version PDF", nullptr));
        lineEdit_Recherche->setText(QString());
        lineEdit_Recherche->setPlaceholderText(QCoreApplication::translate("MainWindow", "Recherche...", nullptr));
        btnEnvoiMail->setText(QCoreApplication::translate("MainWindow", "Envoi", nullptr));
        textEdit_22->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">MENU</p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Centre D'examen", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Etablissement", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Examen", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Candidat", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Ressource", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Enseignant", nullptr));
        textEdit_5->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Adresse :</p></body></html>", nullptr));
        textEdit_4->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Nom_Centre :</p></body></html>", nullptr));
        lineEdit_Responsable->setText(QString());
        textEdit_7->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Responsable :</p></body></html>", nullptr));
        lineEdit_Id_Centre->setText(QString());
        lineEdit_Adresse->setText(QString());
        lineEdit_Region->setText(QString());
        textEdit_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Id_Centre :</p></body></html>", nullptr));
        textEdit_8->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Mail_Resp :</p></body></html>", nullptr));
        lineEdit_Nom_Centre->setText(QString());
        lineEdit_Mail_Responsable->setText(QString());
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Ajouter un Centre d'Examen</p></body></html>", nullptr));
        textEdit_6->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Region :</p></body></html>", nullptr));
        btnAjouter->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        textEdit_10->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Modifier un Centre d'Examen</p></body></html>", nullptr));
        lineEdit_Nom_Centre2->setText(QString());
        textEdit_12->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Mail_Resp :</p></body></html>", nullptr));
        lineEdit_Adresse2->setText(QString());
        lineEdit_Id_Centre2->setText(QString());
        textEdit_15->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Region :</p></body></html>", nullptr));
        textEdit_9->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Adresse :</p></body></html>", nullptr));
        textEdit_14->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Responsable :</p></body></html>", nullptr));
        textEdit_11->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Nom_Centre :</p></body></html>", nullptr));
        lineEdit_Region2->setText(QString());
        textEdit_13->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Id_Centre :</p></body></html>", nullptr));
        lineEdit_Mail_Responsable2->setText(QString());
        lineEdit_Responsable2->setText(QString());
        btnModifier->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        btnSupprimer->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        lineEdit_Id_Centre3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
