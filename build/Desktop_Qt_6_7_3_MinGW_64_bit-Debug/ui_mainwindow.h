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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_6;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_11;
    QPushButton *refresh;
    QLabel *label_5;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTextBrowser *textBrowser_6;
    QLabel *label_12;
    QLineEdit *type;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *nom;
    QLineEdit *status;
    QLabel *label_15;
    QLineEdit *lineEdit_add;
    QLineEdit *ID;
    QLabel *label_16;
    QLabel *label_17;
    QPushButton *ajout;
    QPushButton *modif;
    QLineEdit *quantite;
    QLabel *label_18;
    QWidget *tab_2;
    QTextBrowser *textBrowser_4;
    QLabel *label_9;
    QLineEdit *lineEdit_recherche;
    QTableView *tableView_rech;
    QPushButton *rechercher;
    QComboBox *combo_tri;
    QPushButton *btn_tri;
    QWidget *tab_3;
    QTextBrowser *textBrowser_3;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_IDS;
    QPushButton *b_annuler2;
    QPushButton *supp;
    QWidget *tab_4;
    QTableView *tableView;
    QPushButton *btn_pdf;
    QLabel *label_stats;
    QTextEdit *textEdit_stats;
    QWidget *tab_5;
    QTextBrowser *textBrowser_5;
    QLabel *label_10;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1556, 882);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(171, 200, 237, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(213, 227, 246, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(85, 100, 118, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(114, 133, 158, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush7(QColor(0, 0, 0, 127));
        brush7.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush8(QColor(85, 100, 118, 127));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        QBrush brush9(QColor(237, 245, 255, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        MainWindow->setPalette(palette);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(10, 70, 256, 551));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(30, 290, 201, 61));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 210, 201, 61));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(30, 370, 201, 61));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(30, 530, 201, 61));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(30, 450, 201, 61));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(320, 290, 63, 20));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 80, 301, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(16);
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(320, 170, 63, 20));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(320, 210, 63, 20));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(320, 250, 81, 20));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(320, 130, 63, 20));
        refresh = new QPushButton(centralWidget);
        refresh->setObjectName("refresh");
        refresh->setGeometry(QRect(10, 30, 83, 29));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(320, 330, 63, 20));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(270, 30, 391, 591));
        tab = new QWidget();
        tab->setObjectName("tab");
        textBrowser_6 = new QTextBrowser(tab);
        textBrowser_6->setObjectName("textBrowser_6");
        textBrowser_6->setGeometry(QRect(0, 10, 371, 371));
        label_12 = new QLabel(tab);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(30, 20, 301, 41));
        label_12->setFont(font);
        type = new QLineEdit(tab);
        type->setObjectName("type");
        type->setGeometry(QRect(140, 230, 113, 28));
        label_13 = new QLabel(tab);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(30, 190, 81, 20));
        label_14 = new QLabel(tab);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(30, 70, 63, 20));
        nom = new QLineEdit(tab);
        nom->setObjectName("nom");
        nom->setGeometry(QRect(140, 110, 113, 28));
        status = new QLineEdit(tab);
        status->setObjectName("status");
        status->setGeometry(QRect(140, 190, 113, 28));
        label_15 = new QLabel(tab);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(30, 150, 63, 20));
        lineEdit_add = new QLineEdit(tab);
        lineEdit_add->setObjectName("lineEdit_add");
        lineEdit_add->setGeometry(QRect(140, 150, 113, 28));
        ID = new QLineEdit(tab);
        ID->setObjectName("ID");
        ID->setGeometry(QRect(140, 70, 113, 28));
        label_16 = new QLabel(tab);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(30, 110, 63, 20));
        label_17 = new QLabel(tab);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(30, 230, 63, 20));
        ajout = new QPushButton(tab);
        ajout->setObjectName("ajout");
        ajout->setGeometry(QRect(50, 330, 83, 29));
        modif = new QPushButton(tab);
        modif->setObjectName("modif");
        modif->setGeometry(QRect(170, 330, 83, 29));
        quantite = new QLineEdit(tab);
        quantite->setObjectName("quantite");
        quantite->setGeometry(QRect(140, 260, 113, 28));
        label_18 = new QLabel(tab);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(30, 270, 63, 20));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        textBrowser_4 = new QTextBrowser(tab_2);
        textBrowser_4->setObjectName("textBrowser_4");
        textBrowser_4->setGeometry(QRect(0, 10, 371, 371));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 20, 321, 41));
        label_9->setFont(font);
        lineEdit_recherche = new QLineEdit(tab_2);
        lineEdit_recherche->setObjectName("lineEdit_recherche");
        lineEdit_recherche->setGeometry(QRect(10, 60, 261, 28));
        tableView_rech = new QTableView(tab_2);
        tableView_rech->setObjectName("tableView_rech");
        tableView_rech->setGeometry(QRect(10, 100, 311, 221));
        rechercher = new QPushButton(tab_2);
        rechercher->setObjectName("rechercher");
        rechercher->setGeometry(QRect(10, 330, 91, 29));
        combo_tri = new QComboBox(tab_2);
        combo_tri->setObjectName("combo_tri");
        combo_tri->setGeometry(QRect(110, 330, 82, 28));
        btn_tri = new QPushButton(tab_2);
        btn_tri->setObjectName("btn_tri");
        btn_tri->setGeometry(QRect(200, 330, 51, 29));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        textBrowser_3 = new QTextBrowser(tab_3);
        textBrowser_3->setObjectName("textBrowser_3");
        textBrowser_3->setGeometry(QRect(0, 10, 371, 271));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 20, 331, 41));
        label_7->setFont(font);
        label_8 = new QLabel(tab_3);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 60, 63, 20));
        lineEdit_IDS = new QLineEdit(tab_3);
        lineEdit_IDS->setObjectName("lineEdit_IDS");
        lineEdit_IDS->setGeometry(QRect(60, 60, 161, 28));
        b_annuler2 = new QPushButton(tab_3);
        b_annuler2->setObjectName("b_annuler2");
        b_annuler2->setGeometry(QRect(120, 110, 83, 29));
        supp = new QPushButton(tab_3);
        supp->setObjectName("supp");
        supp->setGeometry(QRect(20, 110, 83, 29));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        tableView = new QTableView(tab_4);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(0, 10, 371, 271));
        btn_pdf = new QPushButton(tab_4);
        btn_pdf->setObjectName("btn_pdf");
        btn_pdf->setGeometry(QRect(10, 140, 141, 29));
        label_stats = new QLabel(tab_4);
        label_stats->setObjectName("label_stats");
        label_stats->setGeometry(QRect(10, 70, 101, 20));
        textEdit_stats = new QTextEdit(tab_4);
        textEdit_stats->setObjectName("textEdit_stats");
        textEdit_stats->setGeometry(QRect(70, 60, 104, 41));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        textBrowser_5 = new QTextBrowser(tab_5);
        textBrowser_5->setObjectName("textBrowser_5");
        textBrowser_5->setGeometry(QRect(0, 10, 371, 371));
        label_10 = new QLabel(tab_5);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 20, 321, 41));
        label_10->setFont(font);
        tabWidget->addTab(tab_5, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1556, 17));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Gestion des Clients", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Etablissement", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Condidat", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "centre d'examen", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "resources disponibles", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "examen", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "ajouter un ressouce", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "id_centre", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "status", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Id_ress", nullptr));
        refresh->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "quatit\303\251", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Ajouter un ressouce", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "status", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Id_ress", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "id_centre", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        ajout->setText(QCoreApplication::translate("MainWindow", "valider", nullptr));
        modif->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Quantite", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Recherche un ressouce", nullptr));
        rechercher->setText(QCoreApplication::translate("MainWindow", "rechercher", nullptr));
        btn_tri->setText(QCoreApplication::translate("MainWindow", "tri", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Supprimer un ressource", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        b_annuler2->setText(QCoreApplication::translate("MainWindow", "annuler", nullptr));
        supp->setText(QCoreApplication::translate("MainWindow", "supprimer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Page", nullptr));
        btn_pdf->setText(QCoreApplication::translate("MainWindow", "exporter en PDF", nullptr));
        label_stats->setText(QCoreApplication::translate("MainWindow", "statistique ici", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Page", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "calendrier", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
