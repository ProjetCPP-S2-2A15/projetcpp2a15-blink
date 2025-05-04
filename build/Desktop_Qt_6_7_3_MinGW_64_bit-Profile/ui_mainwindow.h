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
#include <QtGui/QIcon>
#include <QtQuickWidgets/QQuickWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *login;
    QLineEdit *usernameLineEdit;
    QLineEdit *passwordLineEdit;
    QLabel *label;
    QLabel *label_2;
    QPushButton *loginButton;
    QWidget *menu;
    QListView *listView;
    QPushButton *etablissement;
    QPushButton *exam;
    QPushButton *ressource;
    QPushButton *centreExam;
    QPushButton *candidat;
    QPushButton *enseignant;
    QPushButton *menubutton_3;
    QWidget *etablissementpage;
    QPushButton *btn_pdf;
    QLineEdit *lineEdit_recherche;
    QPushButton *exam2;
    QLabel *label_stats;
    QScrollBar *verticalScrollBar_2;
    QPushButton *ressource2;
    QLineEdit *lineEdit_IDS;
    QPushButton *b_rechercher;
    QLabel *label_10;
    QTextBrowser *textBrowser;
    QPushButton *b_refresh;
    QTextBrowser *textBrowser_3;
    QLabel *label_7;
    QPushButton *b_supprimer;
    QScrollBar *verticalScrollBar;
    QTextBrowser *textBrowser_4;
    QTabWidget *tabWidget;
    QWidget *ajouter;
    QLineEdit *lineEdit_T;
    QLineEdit *lineEdit_nom;
    QLabel *label_6;
    QLabel *label_3;
    QLineEdit *lineEdit_tel;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_8;
    QPushButton *b_valider;
    QLabel *label_9;
    QLineEdit *lineEdit_add;
    QLineEdit *lineEdit_e;
    QWidget *modifier;
    QLineEdit *lineEdit_T_2;
    QLineEdit *lineEdit_nom_2;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *lineEdit_tel_2;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLineEdit *lineEdit_ID_2;
    QLineEdit *lineEdit_add_2;
    QLineEdit *lineEdit_e_2;
    QPushButton *b_modifier;
    QComboBox *combo_tri;
    QTextEdit *textEdit_stats;
    QTableView *tableView_rech;
    QLabel *label_11;
    QQuickWidget *quickWidget;
    QLineEdit *lineEdit_ID;
    QTableView *tableView;
    QPushButton *centreExam2;
    QLabel *label_19;
    QPushButton *b_annuler2;
    QPushButton *candidat2;
    QPushButton *etablissement2;
    QPushButton *btn_tri;
    QPushButton *enseignant2;
    QPushButton *menubutton_2;
    QWidget *exampage;
    QLabel *label_20;
    QListView *listView_2;
    QPushButton *releasePortButton;
    QListView *listView_5;
    QListView *listView_4;
    QPushButton *ressourceEXAM;
    QListView *listView_3;
    QPushButton *centredEXAM;
    QPushButton *candidatEXAM;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton_6;
    QLabel *pdf_3;
    QWidget *tab_4;
    QPushButton *pushButton_8;
    QLineEdit *lineEdit_2;
    QLabel *pdf_4;
    QPushButton *statshow;
    QPushButton *addExam;
    QTabWidget *tabWidget_3;
    QWidget *tab;
    QLineEdit *lineEdit_nom_3;
    QSpinBox *copiesSpinBox;
    QPushButton *chargerButton;
    QLabel *nombre;
    QComboBox *sessionComboBox;
    QLabel *date;
    QDateEdit *dateEdit_date;
    QPushButton *ajouterButton;
    QLabel *nom;
    QComboBox *niveauComboBox;
    QLabel *pdf;
    QLabel *niveau;
    QLabel *session_2;
    QLineEdit *pdf_lineedit;
    QWidget *tab_2;
    QLabel *nom_2;
    QLineEdit *lineEdit_nom1;
    QLabel *niveau_2;
    QComboBox *niveauComboBox1;
    QLabel *session_3;
    QComboBox *sessionComboBox1;
    QLabel *nombre_2;
    QSpinBox *copiesSpinBox1;
    QLabel *date_2;
    QDateEdit *dateEdit_date1;
    QLabel *pdf_2;
    QPushButton *chargerButton1;
    QPushButton *ajouterButton1;
    QLineEdit *pdf_lineedit1;
    QPushButton *etablissementEXAM;
    QPushButton *rechercherButton;
    QPushButton *genererButton;
    QComboBox *comboBox_sort;
    QPushButton *supprimerButton;
    QPushButton *examenEXAM;
    QListView *listView_6;
    QTableView *tableView_2;
    QLineEdit *lineEdit_search;
    QPushButton *enseignantEXAM;
    QPushButton *menubutton;
    QWidget *ressourcepage;
    QLabel *label_21;
    QWidget *centreExampage;
    QLabel *label_22;
    QWidget *candidatpage;
    QLabel *label_23;
    QWidget *enseignantpage;
    QLabel *label_24;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1542, 804);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 1541, 771));
        login = new QWidget();
        login->setObjectName("login");
        usernameLineEdit = new QLineEdit(login);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setGeometry(QRect(440, 220, 113, 28));
        passwordLineEdit = new QLineEdit(login);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setGeometry(QRect(440, 270, 113, 28));
        label = new QLabel(login);
        label->setObjectName("label");
        label->setGeometry(QRect(350, 220, 63, 20));
        label_2 = new QLabel(login);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(350, 280, 63, 20));
        loginButton = new QPushButton(login);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(410, 320, 83, 29));
        stackedWidget->addWidget(login);
        menu = new QWidget();
        menu->setObjectName("menu");
        listView = new QListView(menu);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(10, 50, 256, 711));
        etablissement = new QPushButton(menu);
        etablissement->setObjectName("etablissement");
        etablissement->setGeometry(QRect(40, 260, 191, 61));
        exam = new QPushButton(menu);
        exam->setObjectName("exam");
        exam->setGeometry(QRect(40, 320, 191, 61));
        ressource = new QPushButton(menu);
        ressource->setObjectName("ressource");
        ressource->setGeometry(QRect(40, 380, 191, 61));
        centreExam = new QPushButton(menu);
        centreExam->setObjectName("centreExam");
        centreExam->setGeometry(QRect(40, 440, 191, 61));
        candidat = new QPushButton(menu);
        candidat->setObjectName("candidat");
        candidat->setGeometry(QRect(40, 500, 191, 61));
        enseignant = new QPushButton(menu);
        enseignant->setObjectName("enseignant");
        enseignant->setGeometry(QRect(40, 560, 191, 61));
        menubutton_3 = new QPushButton(menu);
        menubutton_3->setObjectName("menubutton_3");
        menubutton_3->setGeometry(QRect(40, 200, 191, 61));
        stackedWidget->addWidget(menu);
        etablissementpage = new QWidget();
        etablissementpage->setObjectName("etablissementpage");
        btn_pdf = new QPushButton(etablissementpage);
        btn_pdf->setObjectName("btn_pdf");
        btn_pdf->setGeometry(QRect(1130, 700, 141, 29));
        lineEdit_recherche = new QLineEdit(etablissementpage);
        lineEdit_recherche->setObjectName("lineEdit_recherche");
        lineEdit_recherche->setGeometry(QRect(1010, 110, 361, 28));
        exam2 = new QPushButton(etablissementpage);
        exam2->setObjectName("exam2");
        exam2->setGeometry(QRect(20, 340, 201, 61));
        label_stats = new QLabel(etablissementpage);
        label_stats->setObjectName("label_stats");
        label_stats->setGeometry(QRect(1280, 700, 101, 20));
        verticalScrollBar_2 = new QScrollBar(etablissementpage);
        verticalScrollBar_2->setObjectName("verticalScrollBar_2");
        verticalScrollBar_2->setGeometry(QRect(1830, 110, 16, 791));
        verticalScrollBar_2->setOrientation(Qt::Orientation::Vertical);
        ressource2 = new QPushButton(etablissementpage);
        ressource2->setObjectName("ressource2");
        ressource2->setGeometry(QRect(20, 400, 201, 61));
        lineEdit_IDS = new QLineEdit(etablissementpage);
        lineEdit_IDS->setObjectName("lineEdit_IDS");
        lineEdit_IDS->setGeometry(QRect(390, 570, 113, 28));
        b_rechercher = new QPushButton(etablissementpage);
        b_rechercher->setObjectName("b_rechercher");
        b_rechercher->setGeometry(QRect(1380, 110, 91, 29));
        label_10 = new QLabel(etablissementpage);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(30, 70, 191, 91));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(133, 161, 193, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(210, 231, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(171, 196, 224, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(66, 80, 96, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(89, 107, 129, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(194, 208, 224, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush9(QColor(0, 0, 0, 127));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush10(QColor(66, 80, 96, 127));
        brush10.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        QBrush brush11(QColor(173, 209, 251, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush11);
        label_10->setPalette(palette);
        label_10->setPixmap(QPixmap(QString::fromUtf8("../../475365257_1626222951621700_6908249215875433429_n.jpg")));
        label_10->setScaledContents(true);
        textBrowser = new QTextBrowser(etablissementpage);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(0, 50, 256, 731));
        b_refresh = new QPushButton(etablissementpage);
        b_refresh->setObjectName("b_refresh");
        b_refresh->setGeometry(QRect(10, 10, 83, 29));
        textBrowser_3 = new QTextBrowser(etablissementpage);
        textBrowser_3->setObjectName("textBrowser_3");
        textBrowser_3->setGeometry(QRect(270, 470, 371, 271));
        label_7 = new QLabel(etablissementpage);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(300, 480, 341, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(16);
        font.setBold(true);
        label_7->setFont(font);
        b_supprimer = new QPushButton(etablissementpage);
        b_supprimer->setObjectName("b_supprimer");
        b_supprimer->setGeometry(QRect(350, 660, 83, 29));
        verticalScrollBar = new QScrollBar(etablissementpage);
        verticalScrollBar->setObjectName("verticalScrollBar");
        verticalScrollBar->setGeometry(QRect(1520, -20, 16, 791));
        verticalScrollBar->setOrientation(Qt::Orientation::Vertical);
        textBrowser_4 = new QTextBrowser(etablissementpage);
        textBrowser_4->setObjectName("textBrowser_4");
        textBrowser_4->setGeometry(QRect(670, 90, 831, 371));
        tabWidget = new QTabWidget(etablissementpage);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(270, 80, 371, 371));
        ajouter = new QWidget();
        ajouter->setObjectName("ajouter");
        lineEdit_T = new QLineEdit(ajouter);
        lineEdit_T->setObjectName("lineEdit_T");
        lineEdit_T->setGeometry(QRect(160, 220, 113, 28));
        lineEdit_nom = new QLineEdit(ajouter);
        lineEdit_nom->setObjectName("lineEdit_nom");
        lineEdit_nom->setGeometry(QRect(160, 60, 113, 28));
        label_6 = new QLabel(ajouter);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(50, 220, 63, 20));
        label_3 = new QLabel(ajouter);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 100, 63, 20));
        lineEdit_tel = new QLineEdit(ajouter);
        lineEdit_tel->setObjectName("lineEdit_tel");
        lineEdit_tel->setGeometry(QRect(160, 140, 113, 28));
        label_4 = new QLabel(ajouter);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 60, 63, 20));
        label_5 = new QLabel(ajouter);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 180, 63, 20));
        label_8 = new QLabel(ajouter);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 0, 301, 41));
        label_8->setFont(font);
        b_valider = new QPushButton(ajouter);
        b_valider->setObjectName("b_valider");
        b_valider->setGeometry(QRect(110, 270, 141, 29));
        label_9 = new QLabel(ajouter);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(50, 140, 81, 20));
        lineEdit_add = new QLineEdit(ajouter);
        lineEdit_add->setObjectName("lineEdit_add");
        lineEdit_add->setGeometry(QRect(160, 100, 113, 28));
        lineEdit_e = new QLineEdit(ajouter);
        lineEdit_e->setObjectName("lineEdit_e");
        lineEdit_e->setGeometry(QRect(160, 180, 113, 28));
        tabWidget->addTab(ajouter, QString());
        modifier = new QWidget();
        modifier->setObjectName("modifier");
        lineEdit_T_2 = new QLineEdit(modifier);
        lineEdit_T_2->setObjectName("lineEdit_T_2");
        lineEdit_T_2->setGeometry(QRect(180, 250, 113, 28));
        lineEdit_nom_2 = new QLineEdit(modifier);
        lineEdit_nom_2->setObjectName("lineEdit_nom_2");
        lineEdit_nom_2->setGeometry(QRect(180, 90, 113, 28));
        label_12 = new QLabel(modifier);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(70, 250, 63, 20));
        label_13 = new QLabel(modifier);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(70, 130, 63, 20));
        lineEdit_tel_2 = new QLineEdit(modifier);
        lineEdit_tel_2->setObjectName("lineEdit_tel_2");
        lineEdit_tel_2->setGeometry(QRect(180, 170, 113, 28));
        label_14 = new QLabel(modifier);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(70, 90, 63, 20));
        label_15 = new QLabel(modifier);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(70, 210, 63, 20));
        label_16 = new QLabel(modifier);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(20, 0, 301, 41));
        label_16->setFont(font);
        label_17 = new QLabel(modifier);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(70, 50, 63, 20));
        label_18 = new QLabel(modifier);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(70, 170, 81, 20));
        lineEdit_ID_2 = new QLineEdit(modifier);
        lineEdit_ID_2->setObjectName("lineEdit_ID_2");
        lineEdit_ID_2->setGeometry(QRect(180, 50, 113, 28));
        lineEdit_add_2 = new QLineEdit(modifier);
        lineEdit_add_2->setObjectName("lineEdit_add_2");
        lineEdit_add_2->setGeometry(QRect(180, 130, 113, 28));
        lineEdit_e_2 = new QLineEdit(modifier);
        lineEdit_e_2->setObjectName("lineEdit_e_2");
        lineEdit_e_2->setGeometry(QRect(180, 210, 113, 28));
        b_modifier = new QPushButton(modifier);
        b_modifier->setObjectName("b_modifier");
        b_modifier->setGeometry(QRect(110, 290, 141, 29));
        tabWidget->addTab(modifier, QString());
        combo_tri = new QComboBox(etablissementpage);
        combo_tri->setObjectName("combo_tri");
        combo_tri->setGeometry(QRect(1350, 460, 82, 28));
        textEdit_stats = new QTextEdit(etablissementpage);
        textEdit_stats->setObjectName("textEdit_stats");
        textEdit_stats->setGeometry(QRect(1380, 690, 104, 41));
        tableView_rech = new QTableView(etablissementpage);
        tableView_rech->setObjectName("tableView_rech");
        tableView_rech->setGeometry(QRect(700, 150, 311, 291));
        label_11 = new QLabel(etablissementpage);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(320, 570, 63, 20));
        quickWidget = new QQuickWidget(etablissementpage);
        quickWidget->setObjectName("quickWidget");
        quickWidget->setGeometry(QRect(1040, 150, 441, 291));
        quickWidget->setResizeMode(QQuickWidget::ResizeMode::SizeRootObjectToView);
        lineEdit_ID = new QLineEdit(etablissementpage);
        lineEdit_ID->setObjectName("lineEdit_ID");
        lineEdit_ID->setGeometry(QRect(0, 50, 113, 28));
        tableView = new QTableView(etablissementpage);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(670, 470, 831, 271));
        centreExam2 = new QPushButton(etablissementpage);
        centreExam2->setObjectName("centreExam2");
        centreExam2->setGeometry(QRect(20, 460, 201, 61));
        label_19 = new QLabel(etablissementpage);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(680, 100, 321, 41));
        label_19->setFont(font);
        b_annuler2 = new QPushButton(etablissementpage);
        b_annuler2->setObjectName("b_annuler2");
        b_annuler2->setGeometry(QRect(480, 660, 83, 29));
        candidat2 = new QPushButton(etablissementpage);
        candidat2->setObjectName("candidat2");
        candidat2->setGeometry(QRect(20, 520, 201, 61));
        etablissement2 = new QPushButton(etablissementpage);
        etablissement2->setObjectName("etablissement2");
        etablissement2->setGeometry(QRect(20, 280, 201, 61));
        btn_tri = new QPushButton(etablissementpage);
        btn_tri->setObjectName("btn_tri");
        btn_tri->setGeometry(QRect(1440, 460, 51, 29));
        enseignant2 = new QPushButton(etablissementpage);
        enseignant2->setObjectName("enseignant2");
        enseignant2->setGeometry(QRect(20, 580, 201, 61));
        menubutton_2 = new QPushButton(etablissementpage);
        menubutton_2->setObjectName("menubutton_2");
        menubutton_2->setGeometry(QRect(20, 220, 201, 61));
        stackedWidget->addWidget(etablissementpage);
        lineEdit_ID->raise();
        textBrowser_4->raise();
        tableView->raise();
        textBrowser_3->raise();
        textBrowser->raise();
        btn_pdf->raise();
        lineEdit_recherche->raise();
        exam2->raise();
        label_stats->raise();
        verticalScrollBar_2->raise();
        ressource2->raise();
        lineEdit_IDS->raise();
        b_rechercher->raise();
        label_10->raise();
        b_refresh->raise();
        label_7->raise();
        b_supprimer->raise();
        verticalScrollBar->raise();
        tabWidget->raise();
        combo_tri->raise();
        textEdit_stats->raise();
        tableView_rech->raise();
        label_11->raise();
        quickWidget->raise();
        centreExam2->raise();
        label_19->raise();
        b_annuler2->raise();
        candidat2->raise();
        etablissement2->raise();
        btn_tri->raise();
        enseignant2->raise();
        menubutton_2->raise();
        exampage = new QWidget();
        exampage->setObjectName("exampage");
        label_20 = new QLabel(exampage);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(1200, 130, 111, 21));
        label_20->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #003366;\n"
"    font-weight: bold;\n"
"    text-shadow: 1px 1px 2px rgba(0, 0, 0, 0.2);\n"
"}"));
        listView_2 = new QListView(exampage);
        listView_2->setObjectName("listView_2");
        listView_2->setGeometry(QRect(910, 320, 131, 51));
        listView_2->setStyleSheet(QString::fromUtf8("background-color :#6A9ED1"));
        releasePortButton = new QPushButton(exampage);
        releasePortButton->setObjectName("releasePortButton");
        releasePortButton->setGeometry(QRect(1240, 350, 83, 29));
        listView_5 = new QListView(exampage);
        listView_5->setObjectName("listView_5");
        listView_5->setGeometry(QRect(1190, 320, 201, 191));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush12(QColor(106, 158, 209, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush6);
        QBrush brush13(QColor(233, 244, 255, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush13);
        QBrush brush14(QColor(105, 116, 127, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush14);
        QBrush brush15(QColor(141, 155, 170, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush15);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette1.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush15);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush15);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush16(QColor(211, 233, 255, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush16);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush17(QColor(105, 116, 127, 127));
        brush17.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush17);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::Accent, brush6);
        listView_5->setPalette(palette1);
        listView_5->setStyleSheet(QString::fromUtf8("background-color :#6A9ED1"));
        listView_4 = new QListView(exampage);
        listView_4->setObjectName("listView_4");
        listView_4->setGeometry(QRect(20, 0, 151, 971));
        QPalette palette2;
        QLinearGradient gradient(0, 0, 1, 1);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(230, 242, 255, 255));
        gradient.setColorAt(0.5, QColor(179, 217, 255, 255));
        gradient.setColorAt(1, QColor(128, 191, 255, 255));
        QBrush brush18(gradient);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush18);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        QLinearGradient gradient1(0, 0, 1, 1);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(230, 242, 255, 255));
        gradient1.setColorAt(0.5, QColor(179, 217, 255, 255));
        gradient1.setColorAt(1, QColor(128, 191, 255, 255));
        QBrush brush19(gradient1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush19);
        QLinearGradient gradient2(0, 0, 1, 1);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(230, 242, 255, 255));
        gradient2.setColorAt(0.5, QColor(179, 217, 255, 255));
        gradient2.setColorAt(1, QColor(128, 191, 255, 255));
        QBrush brush20(gradient2);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush20);
        QLinearGradient gradient3(0, 0, 1, 1);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(230, 242, 255, 255));
        gradient3.setColorAt(0.5, QColor(179, 217, 255, 255));
        gradient3.setColorAt(1, QColor(128, 191, 255, 255));
        QBrush brush21(gradient3);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush21);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        QLinearGradient gradient4(0, 0, 1, 1);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(230, 242, 255, 255));
        gradient4.setColorAt(0.5, QColor(179, 217, 255, 255));
        gradient4.setColorAt(1, QColor(128, 191, 255, 255));
        QBrush brush22(gradient4);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush22);
        QLinearGradient gradient5(0, 0, 1, 1);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(230, 242, 255, 255));
        gradient5.setColorAt(0.5, QColor(179, 217, 255, 255));
        gradient5.setColorAt(1, QColor(128, 191, 255, 255));
        QBrush brush23(gradient5);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush23);
        QLinearGradient gradient6(0, 0, 1, 1);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(230, 242, 255, 255));
        gradient6.setColorAt(0.5, QColor(179, 217, 255, 255));
        gradient6.setColorAt(1, QColor(128, 191, 255, 255));
        QBrush brush24(gradient6);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush24);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        QLinearGradient gradient7(0, 0, 1, 1);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(230, 242, 255, 255));
        gradient7.setColorAt(0.5, QColor(179, 217, 255, 255));
        gradient7.setColorAt(1, QColor(128, 191, 255, 255));
        QBrush brush25(gradient7);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush25);
        QLinearGradient gradient8(0, 0, 1, 1);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(230, 242, 255, 255));
        gradient8.setColorAt(0.5, QColor(179, 217, 255, 255));
        gradient8.setColorAt(1, QColor(128, 191, 255, 255));
        QBrush brush26(gradient8);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush26);
        listView_4->setPalette(palette2);
        listView_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1, \n"
"        stop:0 #3498db, stop:1 #2980b9);\n"
"    border: 1px solid #2c3e50;\n"
"    border-radius: 5px;\n"
"    color: white;\n"
"    padding: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1, \n"
"        stop:0 #2980b9, stop:1 #3498db);\n"
"}"));
        ressourceEXAM = new QPushButton(exampage);
        ressourceEXAM->setObjectName("ressourceEXAM");
        ressourceEXAM->setGeometry(QRect(20, 320, 151, 71));
        ressourceEXAM->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1,\n"
"        stop:0 #99CCFF, stop:1 #66B2FF);\n"
"    border: 1px solid #3399FF;\n"
"    border-radius: 8px;\n"
"    color: #003366;\n"
"    padding: 5px 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1,\n"
"        stop:0 #66B2FF, stop:1 #3399FF);\n"
"}"));
        listView_3 = new QListView(exampage);
        listView_3->setObjectName("listView_3");
        listView_3->setGeometry(QRect(1050, 320, 131, 51));
        listView_3->setStyleSheet(QString::fromUtf8("background-color :#6A9ED1\n"
""));
        centredEXAM = new QPushButton(exampage);
        centredEXAM->setObjectName("centredEXAM");
        centredEXAM->setGeometry(QRect(20, 390, 151, 61));
        centredEXAM->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1,\n"
"        stop:0 #99CCFF, stop:1 #66B2FF);\n"
"    border: 1px solid #3399FF;\n"
"    border-radius: 8px;\n"
"    color: #003366;\n"
"    padding: 5px 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1,\n"
"        stop:0 #66B2FF, stop:1 #3399FF);\n"
"}"));
        candidatEXAM = new QPushButton(exampage);
        candidatEXAM->setObjectName("candidatEXAM");
        candidatEXAM->setGeometry(QRect(20, 450, 151, 61));
        candidatEXAM->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1,\n"
"        stop:0 #99CCFF, stop:1 #66B2FF);\n"
"    border: 1px solid #3399FF;\n"
"    border-radius: 8px;\n"
"    color: #003366;\n"
"    padding: 5px 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1,\n"
"        stop:0 #66B2FF, stop:1 #3399FF);\n"
"}"));
        tabWidget_2 = new QTabWidget(exampage);
        tabWidget_2->setObjectName("tabWidget_2");
        tabWidget_2->setGeometry(QRect(440, 400, 341, 161));
        tabWidget_2->setStyleSheet(QString::fromUtf8("background-color :#6A9ED1"));
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        lineEdit = new QLineEdit(tab_3);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 40, 113, 28));
        pushButton_6 = new QPushButton(tab_3);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(132, 40, 101, 31));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1,\n"
"        stop:0 #99CCFF, stop:1 #66B2FF);\n"
"    border: 1px solid #3399FF;\n"
"    border-radius: 8px;\n"
"    color: #003366;\n"
"    padding: 5px 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1,\n"
"        stop:0 #66B2FF, stop:1 #3399FF);\n"
"}\n"
""));
        pdf_3 = new QLabel(tab_3);
        pdf_3->setObjectName("pdf_3");
        pdf_3->setGeometry(QRect(10, 10, 121, 20));
        pdf_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #003366;\n"
"    font-weight: bold;\n"
"    text-shadow: 1px 1px 2px rgba(0, 0, 0, 0.2);\n"
"}"));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        pushButton_8 = new QPushButton(tab_4);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(172, 40, 91, 31));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1,\n"
"        stop:0 #99CCFF, stop:1 #66B2FF);\n"
"    border: 1px solid #3399FF;\n"
"    border-radius: 8px;\n"
"    color: #003366;\n"
"    padding: 5px 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1,\n"
"        stop:0 #66B2FF, stop:1 #3399FF);\n"
"}"));
        lineEdit_2 = new QLineEdit(tab_4);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(10, 40, 151, 28));
        pdf_4 = new QLabel(tab_4);
        pdf_4->setObjectName("pdf_4");
        pdf_4->setGeometry(QRect(10, 10, 63, 20));
        pdf_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #003366;\n"
"    font-weight: bold;\n"
"    text-shadow: 1px 1px 2px rgba(0, 0, 0, 0.2);\n"
"}"));
        tabWidget_2->addTab(tab_4, QString());
        statshow = new QPushButton(exampage);
        statshow->setObjectName("statshow");
        statshow->setGeometry(QRect(1230, 200, 101, 29));
        statshow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1,\n"
"        stop:0 #99CCFF, stop:1 #66B2FF);\n"
"    border: 1px solid #3399FF;\n"
"    border-radius: 8px;\n"
"    color: #003366;\n"
"    padding: 5px 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1,\n"
"        stop:0 #66B2FF, stop:1 #3399FF);\n"
"}"));
        addExam = new QPushButton(exampage);
        addExam->setObjectName("addExam");
        addExam->setGeometry(QRect(1240, 400, 83, 29));
        tabWidget_3 = new QTabWidget(exampage);
        tabWidget_3->setObjectName("tabWidget_3");
        tabWidget_3->setGeometry(QRect(180, 60, 231, 541));
        tabWidget_3->setStyleSheet(QString::fromUtf8("background-color :#6A9ED1"));
        tab = new QWidget();
        tab->setObjectName("tab");
        lineEdit_nom_3 = new QLineEdit(tab);
        lineEdit_nom_3->setObjectName("lineEdit_nom_3");
        lineEdit_nom_3->setGeometry(QRect(10, 40, 211, 28));
        lineEdit_nom_3->setStyleSheet(QString::fromUtf8("ui->lineEdit->setStyleSheet(\"color: black;\");\n"
""));
        copiesSpinBox = new QSpinBox(tab);
        copiesSpinBox->setObjectName("copiesSpinBox");
        copiesSpinBox->setGeometry(QRect(10, 250, 44, 29));
        chargerButton = new QPushButton(tab);
        chargerButton->setObjectName("chargerButton");
        chargerButton->setGeometry(QRect(130, 390, 83, 31));
        chargerButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1,\n"
"        stop:0 #99CCFF, stop:1 #66B2FF);\n"
"    border: 1px solid #3399FF;\n"
"    border-radius: 8px;\n"
"    color: #003366;\n"
"    padding: 5px 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1,\n"
"        stop:0 #66B2FF, stop:1 #3399FF);\n"
"}"));
        nombre = new QLabel(tab);
        nombre->setObjectName("nombre");
        nombre->setGeometry(QRect(10, 220, 131, 20));
        nombre->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #003366;\n"
"    font-weight: bold;\n"
"    text-shadow: 1px 1px 2px rgba(0, 0, 0, 0.2);\n"
"}"));
        sessionComboBox = new QComboBox(tab);
        sessionComboBox->addItem(QString());
        sessionComboBox->addItem(QString());
        sessionComboBox->setObjectName("sessionComboBox");
        sessionComboBox->setGeometry(QRect(10, 180, 82, 28));
        date = new QLabel(tab);
        date->setObjectName("date");
        date->setGeometry(QRect(10, 290, 63, 20));
        date->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #003366;\n"
"    font-weight: bold;\n"
"    text-shadow: 1px 1px 2px rgba(0, 0, 0, 0.2);\n"
"}"));
        dateEdit_date = new QDateEdit(tab);
        dateEdit_date->setObjectName("dateEdit_date");
        dateEdit_date->setGeometry(QRect(10, 320, 111, 29));
        ajouterButton = new QPushButton(tab);
        ajouterButton->setObjectName("ajouterButton");
        ajouterButton->setGeometry(QRect(60, 450, 83, 29));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QLinearGradient gradient9(0, 0, 0, 1);
        gradient9.setSpread(QGradient::PadSpread);
        gradient9.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient9.setColorAt(0, QColor(153, 204, 255, 255));
        gradient9.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush27(gradient9);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush27);
        QBrush brush28(QColor(59, 113, 157, 255));
        brush28.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush28);
        QBrush brush29(QColor(49, 94, 131, 255));
        brush29.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush29);
        QBrush brush30(QColor(19, 38, 52, 255));
        brush30.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush30);
        QBrush brush31(QColor(26, 50, 70, 255));
        brush31.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush31);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        QLinearGradient gradient10(0, 0, 0, 1);
        gradient10.setSpread(QGradient::PadSpread);
        gradient10.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient10.setColorAt(0, QColor(153, 204, 255, 255));
        gradient10.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush32(gradient10);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush32);
        QLinearGradient gradient11(0, 0, 0, 1);
        gradient11.setSpread(QGradient::PadSpread);
        gradient11.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient11.setColorAt(0, QColor(153, 204, 255, 255));
        gradient11.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush33(gradient11);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush33);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush34(QColor(19, 37, 52, 255));
        brush34.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush34);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush35(QColor(255, 255, 255, 127));
        brush35.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush35);
#endif
        palette3.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        QLinearGradient gradient12(0, 0, 0, 1);
        gradient12.setSpread(QGradient::PadSpread);
        gradient12.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient12.setColorAt(0, QColor(153, 204, 255, 255));
        gradient12.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush36(gradient12);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush36);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush28);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush29);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush30);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush31);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        QLinearGradient gradient13(0, 0, 0, 1);
        gradient13.setSpread(QGradient::PadSpread);
        gradient13.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient13.setColorAt(0, QColor(153, 204, 255, 255));
        gradient13.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush37(gradient13);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush37);
        QLinearGradient gradient14(0, 0, 0, 1);
        gradient14.setSpread(QGradient::PadSpread);
        gradient14.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient14.setColorAt(0, QColor(153, 204, 255, 255));
        gradient14.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush38(gradient14);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush38);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush34);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush35);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush30);
        QLinearGradient gradient15(0, 0, 0, 1);
        gradient15.setSpread(QGradient::PadSpread);
        gradient15.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient15.setColorAt(0, QColor(153, 204, 255, 255));
        gradient15.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush39(gradient15);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush39);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush28);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush29);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush30);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush31);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush30);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush30);
        QLinearGradient gradient16(0, 0, 0, 1);
        gradient16.setSpread(QGradient::PadSpread);
        gradient16.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient16.setColorAt(0, QColor(153, 204, 255, 255));
        gradient16.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush40(gradient16);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush40);
        QLinearGradient gradient17(0, 0, 0, 1);
        gradient17.setSpread(QGradient::PadSpread);
        gradient17.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient17.setColorAt(0, QColor(153, 204, 255, 255));
        gradient17.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush41(gradient17);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush41);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush42(QColor(39, 75, 105, 255));
        brush42.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush42);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush43(QColor(19, 38, 52, 127));
        brush43.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush43);
#endif
        QBrush brush44(QColor(27, 53, 74, 255));
        brush44.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Disabled, QPalette::Accent, brush44);
        ajouterButton->setPalette(palette3);
        ajouterButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1,\n"
"        stop:0 #99CCFF, stop:1 #66B2FF);\n"
"    border: 1px solid #3399FF;\n"
"    border-radius: 8px;\n"
"    color: #003366;\n"
"    padding: 5px 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1,\n"
"        stop:0 #66B2FF, stop:1 #3399FF);\n"
"}"));
        ajouterButton->setCheckable(false);
        nom = new QLabel(tab);
        nom->setObjectName("nom");
        nom->setGeometry(QRect(10, 10, 111, 20));
        nom->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #003366;\n"
"    font-weight: bold;\n"
"    text-shadow: 1px 1px 2px rgba(0, 0, 0, 0.2);\n"
"}"));
        niveauComboBox = new QComboBox(tab);
        niveauComboBox->addItem(QString());
        niveauComboBox->addItem(QString());
        niveauComboBox->addItem(QString());
        niveauComboBox->setObjectName("niveauComboBox");
        niveauComboBox->setGeometry(QRect(10, 110, 82, 28));
        niveauComboBox->setStyleSheet(QString::fromUtf8("background-color :#6A9ED1"));
        pdf = new QLabel(tab);
        pdf->setObjectName("pdf");
        pdf->setGeometry(QRect(10, 360, 63, 20));
        pdf->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #003366;\n"
"    font-weight: bold;\n"
"    text-shadow: 1px 1px 2px rgba(0, 0, 0, 0.2);\n"
"}"));
        niveau = new QLabel(tab);
        niveau->setObjectName("niveau");
        niveau->setGeometry(QRect(10, 80, 63, 20));
        niveau->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #003366;\n"
"    font-weight: bold;\n"
"    text-shadow: 1px 1px 2px rgba(0, 0, 0, 0.2);\n"
"}"));
        session_2 = new QLabel(tab);
        session_2->setObjectName("session_2");
        session_2->setGeometry(QRect(10, 150, 63, 20));
        session_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #003366;\n"
"    font-weight: bold;\n"
"    text-shadow: 1px 1px 2px rgba(0, 0, 0, 0.2);\n"
"}"));
        pdf_lineedit = new QLineEdit(tab);
        pdf_lineedit->setObjectName("pdf_lineedit");
        pdf_lineedit->setGeometry(QRect(10, 390, 113, 28));
        tabWidget_3->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        nom_2 = new QLabel(tab_2);
        nom_2->setObjectName("nom_2");
        nom_2->setGeometry(QRect(10, 10, 111, 20));
        nom_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #003366;\n"
"    font-weight: bold;\n"
"    text-shadow: 1px 1px 2px rgba(0, 0, 0, 0.2);\n"
"}"));
        lineEdit_nom1 = new QLineEdit(tab_2);
        lineEdit_nom1->setObjectName("lineEdit_nom1");
        lineEdit_nom1->setGeometry(QRect(10, 40, 211, 28));
        niveau_2 = new QLabel(tab_2);
        niveau_2->setObjectName("niveau_2");
        niveau_2->setGeometry(QRect(10, 80, 63, 20));
        niveau_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #003366;\n"
"    font-weight: bold;\n"
"    text-shadow: 1px 1px 2px rgba(0, 0, 0, 0.2);\n"
"}"));
        niveauComboBox1 = new QComboBox(tab_2);
        niveauComboBox1->addItem(QString());
        niveauComboBox1->addItem(QString());
        niveauComboBox1->addItem(QString());
        niveauComboBox1->setObjectName("niveauComboBox1");
        niveauComboBox1->setGeometry(QRect(10, 110, 82, 28));
        session_3 = new QLabel(tab_2);
        session_3->setObjectName("session_3");
        session_3->setGeometry(QRect(10, 150, 63, 20));
        session_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #003366;\n"
"    font-weight: bold;\n"
"    text-shadow: 1px 1px 2px rgba(0, 0, 0, 0.2);\n"
"}"));
        sessionComboBox1 = new QComboBox(tab_2);
        sessionComboBox1->addItem(QString());
        sessionComboBox1->addItem(QString());
        sessionComboBox1->setObjectName("sessionComboBox1");
        sessionComboBox1->setGeometry(QRect(10, 180, 82, 28));
        nombre_2 = new QLabel(tab_2);
        nombre_2->setObjectName("nombre_2");
        nombre_2->setGeometry(QRect(10, 220, 131, 20));
        nombre_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #003366;\n"
"    font-weight: bold;\n"
"    text-shadow: 1px 1px 2px rgba(0, 0, 0, 0.2);\n"
"}"));
        copiesSpinBox1 = new QSpinBox(tab_2);
        copiesSpinBox1->setObjectName("copiesSpinBox1");
        copiesSpinBox1->setGeometry(QRect(10, 250, 44, 29));
        date_2 = new QLabel(tab_2);
        date_2->setObjectName("date_2");
        date_2->setGeometry(QRect(10, 290, 63, 20));
        date_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #003366;\n"
"    font-weight: bold;\n"
"    text-shadow: 1px 1px 2px rgba(0, 0, 0, 0.2);\n"
"}"));
        dateEdit_date1 = new QDateEdit(tab_2);
        dateEdit_date1->setObjectName("dateEdit_date1");
        dateEdit_date1->setGeometry(QRect(10, 320, 111, 29));
        pdf_2 = new QLabel(tab_2);
        pdf_2->setObjectName("pdf_2");
        pdf_2->setGeometry(QRect(10, 360, 63, 20));
        pdf_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #003366;\n"
"    font-weight: bold;\n"
"    text-shadow: 1px 1px 2px rgba(0, 0, 0, 0.2);\n"
"}"));
        chargerButton1 = new QPushButton(tab_2);
        chargerButton1->setObjectName("chargerButton1");
        chargerButton1->setGeometry(QRect(130, 390, 83, 31));
        chargerButton1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1,\n"
"        stop:0 #99CCFF, stop:1 #66B2FF);\n"
"    border: 1px solid #3399FF;\n"
"    border-radius: 8px;\n"
"    color: #003366;\n"
"    padding: 5px 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1,\n"
"        stop:0 #66B2FF, stop:1 #3399FF);\n"
"}"));
        ajouterButton1 = new QPushButton(tab_2);
        ajouterButton1->setObjectName("ajouterButton1");
        ajouterButton1->setGeometry(QRect(60, 440, 83, 29));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QLinearGradient gradient18(0, 0, 0, 1);
        gradient18.setSpread(QGradient::PadSpread);
        gradient18.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient18.setColorAt(0, QColor(153, 204, 255, 255));
        gradient18.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush45(gradient18);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush45);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush28);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush29);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush30);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush31);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        QLinearGradient gradient19(0, 0, 0, 1);
        gradient19.setSpread(QGradient::PadSpread);
        gradient19.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient19.setColorAt(0, QColor(153, 204, 255, 255));
        gradient19.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush46(gradient19);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush46);
        QLinearGradient gradient20(0, 0, 0, 1);
        gradient20.setSpread(QGradient::PadSpread);
        gradient20.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient20.setColorAt(0, QColor(153, 204, 255, 255));
        gradient20.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush47(gradient20);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush47);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush34);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush35);
#endif
        palette4.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        QLinearGradient gradient21(0, 0, 0, 1);
        gradient21.setSpread(QGradient::PadSpread);
        gradient21.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient21.setColorAt(0, QColor(153, 204, 255, 255));
        gradient21.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush48(gradient21);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush48);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush28);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush29);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush30);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush31);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        QLinearGradient gradient22(0, 0, 0, 1);
        gradient22.setSpread(QGradient::PadSpread);
        gradient22.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient22.setColorAt(0, QColor(153, 204, 255, 255));
        gradient22.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush49(gradient22);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush49);
        QLinearGradient gradient23(0, 0, 0, 1);
        gradient23.setSpread(QGradient::PadSpread);
        gradient23.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient23.setColorAt(0, QColor(153, 204, 255, 255));
        gradient23.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush50(gradient23);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush50);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush34);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush35);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush30);
        QLinearGradient gradient24(0, 0, 0, 1);
        gradient24.setSpread(QGradient::PadSpread);
        gradient24.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient24.setColorAt(0, QColor(153, 204, 255, 255));
        gradient24.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush51(gradient24);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush51);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush28);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush29);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush30);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush31);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush30);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush30);
        QLinearGradient gradient25(0, 0, 0, 1);
        gradient25.setSpread(QGradient::PadSpread);
        gradient25.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient25.setColorAt(0, QColor(153, 204, 255, 255));
        gradient25.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush52(gradient25);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush52);
        QLinearGradient gradient26(0, 0, 0, 1);
        gradient26.setSpread(QGradient::PadSpread);
        gradient26.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient26.setColorAt(0, QColor(153, 204, 255, 255));
        gradient26.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush53(gradient26);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush53);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush42);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush43);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::Accent, brush44);
        ajouterButton1->setPalette(palette4);
        ajouterButton1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1,\n"
"        stop:0 #99CCFF, stop:1 #66B2FF);\n"
"    border: 1px solid #3399FF;\n"
"    border-radius: 8px;\n"
"    color: #003366;\n"
"    padding: 5px 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1,\n"
"        stop:0 #66B2FF, stop:1 #3399FF);\n"
"}"));
        ajouterButton1->setCheckable(false);
        pdf_lineedit1 = new QLineEdit(tab_2);
        pdf_lineedit1->setObjectName("pdf_lineedit1");
        pdf_lineedit1->setGeometry(QRect(10, 390, 113, 28));
        tabWidget_3->addTab(tab_2, QString());
        etablissementEXAM = new QPushButton(exampage);
        etablissementEXAM->setObjectName("etablissementEXAM");
        etablissementEXAM->setGeometry(QRect(20, 200, 151, 61));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QLinearGradient gradient27(0, 0, 0, 1);
        gradient27.setSpread(QGradient::PadSpread);
        gradient27.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient27.setColorAt(0, QColor(153, 204, 255, 255));
        gradient27.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush54(gradient27);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush54);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        QLinearGradient gradient28(0, 0, 0, 1);
        gradient28.setSpread(QGradient::PadSpread);
        gradient28.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient28.setColorAt(0, QColor(153, 204, 255, 255));
        gradient28.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush55(gradient28);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush55);
        QLinearGradient gradient29(0, 0, 0, 1);
        gradient29.setSpread(QGradient::PadSpread);
        gradient29.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient29.setColorAt(0, QColor(153, 204, 255, 255));
        gradient29.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush56(gradient29);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush56);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush35);
#endif
        palette5.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        QLinearGradient gradient30(0, 0, 0, 1);
        gradient30.setSpread(QGradient::PadSpread);
        gradient30.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient30.setColorAt(0, QColor(153, 204, 255, 255));
        gradient30.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush57(gradient30);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush57);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        QLinearGradient gradient31(0, 0, 0, 1);
        gradient31.setSpread(QGradient::PadSpread);
        gradient31.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient31.setColorAt(0, QColor(153, 204, 255, 255));
        gradient31.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush58(gradient31);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush58);
        QLinearGradient gradient32(0, 0, 0, 1);
        gradient32.setSpread(QGradient::PadSpread);
        gradient32.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient32.setColorAt(0, QColor(153, 204, 255, 255));
        gradient32.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush59(gradient32);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush59);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush35);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        QLinearGradient gradient33(0, 0, 0, 1);
        gradient33.setSpread(QGradient::PadSpread);
        gradient33.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient33.setColorAt(0, QColor(153, 204, 255, 255));
        gradient33.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush60(gradient33);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush60);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        QLinearGradient gradient34(0, 0, 0, 1);
        gradient34.setSpread(QGradient::PadSpread);
        gradient34.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient34.setColorAt(0, QColor(153, 204, 255, 255));
        gradient34.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush61(gradient34);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush61);
        QLinearGradient gradient35(0, 0, 0, 1);
        gradient35.setSpread(QGradient::PadSpread);
        gradient35.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient35.setColorAt(0, QColor(153, 204, 255, 255));
        gradient35.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush62(gradient35);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush62);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        etablissementEXAM->setPalette(palette5);
        QFont font1;
        font1.setBold(false);
        etablissementEXAM->setFont(font1);
        etablissementEXAM->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1,\n"
"        stop:0 #99CCFF, stop:1 #66B2FF);\n"
"    border: 1px solid #3399FF;\n"
"    border-radius: 8px;\n"
"    color: #003366;\n"
"    padding: 5px 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1,\n"
"        stop:0 #66B2FF, stop:1 #3399FF);\n"
"}"));
        rechercherButton = new QPushButton(exampage);
        rechercherButton->setObjectName("rechercherButton");
        rechercherButton->setGeometry(QRect(1040, 80, 91, 29));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QLinearGradient gradient36(0, 0, 0, 1);
        gradient36.setSpread(QGradient::PadSpread);
        gradient36.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient36.setColorAt(0, QColor(153, 204, 255, 255));
        gradient36.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush63(gradient36);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush63);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush28);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush29);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush30);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush31);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        QLinearGradient gradient37(0, 0, 0, 1);
        gradient37.setSpread(QGradient::PadSpread);
        gradient37.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient37.setColorAt(0, QColor(153, 204, 255, 255));
        gradient37.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush64(gradient37);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush64);
        QLinearGradient gradient38(0, 0, 0, 1);
        gradient38.setSpread(QGradient::PadSpread);
        gradient38.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient38.setColorAt(0, QColor(153, 204, 255, 255));
        gradient38.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush65(gradient38);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush65);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush34);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush35);
#endif
        palette6.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        QLinearGradient gradient39(0, 0, 0, 1);
        gradient39.setSpread(QGradient::PadSpread);
        gradient39.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient39.setColorAt(0, QColor(153, 204, 255, 255));
        gradient39.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush66(gradient39);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush66);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush28);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush29);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush30);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush31);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        QLinearGradient gradient40(0, 0, 0, 1);
        gradient40.setSpread(QGradient::PadSpread);
        gradient40.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient40.setColorAt(0, QColor(153, 204, 255, 255));
        gradient40.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush67(gradient40);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush67);
        QLinearGradient gradient41(0, 0, 0, 1);
        gradient41.setSpread(QGradient::PadSpread);
        gradient41.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient41.setColorAt(0, QColor(153, 204, 255, 255));
        gradient41.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush68(gradient41);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush68);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush34);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush35);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush30);
        QLinearGradient gradient42(0, 0, 0, 1);
        gradient42.setSpread(QGradient::PadSpread);
        gradient42.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient42.setColorAt(0, QColor(153, 204, 255, 255));
        gradient42.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush69(gradient42);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush69);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush28);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush29);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush30);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush31);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush30);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush30);
        QLinearGradient gradient43(0, 0, 0, 1);
        gradient43.setSpread(QGradient::PadSpread);
        gradient43.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient43.setColorAt(0, QColor(153, 204, 255, 255));
        gradient43.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush70(gradient43);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush70);
        QLinearGradient gradient44(0, 0, 0, 1);
        gradient44.setSpread(QGradient::PadSpread);
        gradient44.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient44.setColorAt(0, QColor(153, 204, 255, 255));
        gradient44.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush71(gradient44);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush71);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush42);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush43);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::Accent, brush44);
        rechercherButton->setPalette(palette6);
        rechercherButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1,\n"
"        stop:0 #99CCFF, stop:1 #66B2FF);\n"
"    border: 1px solid #3399FF;\n"
"    border-radius: 8px;\n"
"    color: #003366;\n"
"    padding: 5px 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1,\n"
"        stop:0 #66B2FF, stop:1 #3399FF);\n"
"}"));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::EditFind));
        rechercherButton->setIcon(icon);
        rechercherButton->setCheckable(false);
        genererButton = new QPushButton(exampage);
        genererButton->setObjectName("genererButton");
        genererButton->setGeometry(QRect(930, 330, 91, 31));
        genererButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1,\n"
"        stop:0 #99CCFF, stop:1 #66B2FF);\n"
"    border: 1px solid #3399FF;\n"
"    border-radius: 8px;\n"
"    color: #003366;\n"
"    padding: 5px 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1,\n"
"        stop:0 #66B2FF, stop:1 #3399FF);\n"
"}"));
        comboBox_sort = new QComboBox(exampage);
        comboBox_sort->setObjectName("comboBox_sort");
        comboBox_sort->setGeometry(QRect(1210, 160, 151, 28));
        supprimerButton = new QPushButton(exampage);
        supprimerButton->setObjectName("supprimerButton");
        supprimerButton->setGeometry(QRect(1070, 330, 91, 29));
        supprimerButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1,\n"
"        stop:0 #99CCFF, stop:1 #66B2FF);\n"
"    border: 1px solid #3399FF;\n"
"    border-radius: 8px;\n"
"    color: #003366;\n"
"    padding: 5px 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1,\n"
"        stop:0 #66B2FF, stop:1 #3399FF);\n"
"}"));
        examenEXAM = new QPushButton(exampage);
        examenEXAM->setObjectName("examenEXAM");
        examenEXAM->setGeometry(QRect(20, 260, 151, 61));
        examenEXAM->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1,\n"
"        stop:0 #99CCFF, stop:1 #66B2FF);\n"
"    border: 1px solid #3399FF;\n"
"    border-radius: 8px;\n"
"    color: #003366;\n"
"    padding: 5px 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1,\n"
"        stop:0 #66B2FF, stop:1 #3399FF);\n"
"}"));
        listView_6 = new QListView(exampage);
        listView_6->setObjectName("listView_6");
        listView_6->setGeometry(QRect(1190, 120, 201, 191));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush13);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush14);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush15);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette7.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush13);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush14);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush15);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush14);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush13);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush14);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush15);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush14);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush14);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush16);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush17);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::Accent, brush6);
        listView_6->setPalette(palette7);
        listView_6->setStyleSheet(QString::fromUtf8("background-color :#6A9ED1"));
        tableView_2 = new QTableView(exampage);
        tableView_2->setObjectName("tableView_2");
        tableView_2->setGeometry(QRect(430, 120, 751, 192));
        tableView_2->setStyleSheet(QString::fromUtf8("background-color :#6A9ED1"));
        lineEdit_search = new QLineEdit(exampage);
        lineEdit_search->setObjectName("lineEdit_search");
        lineEdit_search->setGeometry(QRect(490, 80, 531, 28));
        enseignantEXAM = new QPushButton(exampage);
        enseignantEXAM->setObjectName("enseignantEXAM");
        enseignantEXAM->setGeometry(QRect(20, 510, 151, 61));
        enseignantEXAM->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1,\n"
"        stop:0 #99CCFF, stop:1 #66B2FF);\n"
"    border: 1px solid #3399FF;\n"
"    border-radius: 8px;\n"
"    color: #003366;\n"
"    padding: 5px 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1,\n"
"        stop:0 #66B2FF, stop:1 #3399FF);\n"
"}"));
        menubutton = new QPushButton(exampage);
        menubutton->setObjectName("menubutton");
        menubutton->setGeometry(QRect(20, 140, 151, 61));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QLinearGradient gradient45(0, 0, 0, 1);
        gradient45.setSpread(QGradient::PadSpread);
        gradient45.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient45.setColorAt(0, QColor(153, 204, 255, 255));
        gradient45.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush72(gradient45);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush72);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        QLinearGradient gradient46(0, 0, 0, 1);
        gradient46.setSpread(QGradient::PadSpread);
        gradient46.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient46.setColorAt(0, QColor(153, 204, 255, 255));
        gradient46.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush73(gradient46);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush73);
        QLinearGradient gradient47(0, 0, 0, 1);
        gradient47.setSpread(QGradient::PadSpread);
        gradient47.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient47.setColorAt(0, QColor(153, 204, 255, 255));
        gradient47.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush74(gradient47);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush74);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush35);
#endif
        palette8.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        QLinearGradient gradient48(0, 0, 0, 1);
        gradient48.setSpread(QGradient::PadSpread);
        gradient48.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient48.setColorAt(0, QColor(153, 204, 255, 255));
        gradient48.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush75(gradient48);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush75);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        QLinearGradient gradient49(0, 0, 0, 1);
        gradient49.setSpread(QGradient::PadSpread);
        gradient49.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient49.setColorAt(0, QColor(153, 204, 255, 255));
        gradient49.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush76(gradient49);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush76);
        QLinearGradient gradient50(0, 0, 0, 1);
        gradient50.setSpread(QGradient::PadSpread);
        gradient50.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient50.setColorAt(0, QColor(153, 204, 255, 255));
        gradient50.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush77(gradient50);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush77);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush35);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        QLinearGradient gradient51(0, 0, 0, 1);
        gradient51.setSpread(QGradient::PadSpread);
        gradient51.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient51.setColorAt(0, QColor(153, 204, 255, 255));
        gradient51.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush78(gradient51);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush78);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        QLinearGradient gradient52(0, 0, 0, 1);
        gradient52.setSpread(QGradient::PadSpread);
        gradient52.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient52.setColorAt(0, QColor(153, 204, 255, 255));
        gradient52.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush79(gradient52);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush79);
        QLinearGradient gradient53(0, 0, 0, 1);
        gradient53.setSpread(QGradient::PadSpread);
        gradient53.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient53.setColorAt(0, QColor(153, 204, 255, 255));
        gradient53.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush80(gradient53);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush80);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        menubutton->setPalette(palette8);
        menubutton->setFont(font1);
        menubutton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1,\n"
"        stop:0 #99CCFF, stop:1 #66B2FF);\n"
"    border: 1px solid #3399FF;\n"
"    border-radius: 8px;\n"
"    color: #003366;\n"
"    padding: 5px 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background: qlineargradient(x1:0 y1:0, x2:0 y2:1,\n"
"        stop:0 #66B2FF, stop:1 #3399FF);\n"
"}"));
        stackedWidget->addWidget(exampage);
        ressourcepage = new QWidget();
        ressourcepage->setObjectName("ressourcepage");
        label_21 = new QLabel(ressourcepage);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(440, 210, 81, 20));
        stackedWidget->addWidget(ressourcepage);
        centreExampage = new QWidget();
        centreExampage->setObjectName("centreExampage");
        label_22 = new QLabel(centreExampage);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(600, 200, 131, 20));
        stackedWidget->addWidget(centreExampage);
        candidatpage = new QWidget();
        candidatpage->setObjectName("candidatpage");
        label_23 = new QLabel(candidatpage);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(590, 180, 63, 20));
        stackedWidget->addWidget(candidatpage);
        enseignantpage = new QWidget();
        enseignantpage->setObjectName("enseignantpage");
        label_24 = new QLabel(enseignantpage);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(710, 170, 121, 20));
        stackedWidget->addWidget(enseignantpage);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1542, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);
        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(1);
        tabWidget_3->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "username", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "password", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "login", nullptr));
        etablissement->setText(QCoreApplication::translate("MainWindow", "etablissement", nullptr));
        exam->setText(QCoreApplication::translate("MainWindow", "exam", nullptr));
        ressource->setText(QCoreApplication::translate("MainWindow", "ressouce", nullptr));
        centreExam->setText(QCoreApplication::translate("MainWindow", "centre d'exam", nullptr));
        candidat->setText(QCoreApplication::translate("MainWindow", "candidat", nullptr));
        enseignant->setText(QCoreApplication::translate("MainWindow", "enseignant", nullptr));
        menubutton_3->setText(QCoreApplication::translate("MainWindow", "menu", nullptr));
        btn_pdf->setText(QCoreApplication::translate("MainWindow", "exporter en PDF", nullptr));
        exam2->setText(QCoreApplication::translate("MainWindow", "exam", nullptr));
        label_stats->setText(QCoreApplication::translate("MainWindow", "statistique ici", nullptr));
        ressource2->setText(QCoreApplication::translate("MainWindow", "ressource", nullptr));
        b_rechercher->setText(QCoreApplication::translate("MainWindow", "rechercher", nullptr));
        label_10->setText(QString());
        b_refresh->setText(QCoreApplication::translate("MainWindow", "refresh", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "supprimer un etablissement", nullptr));
        b_supprimer->setText(QCoreApplication::translate("MainWindow", "supprimer", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Adresse", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "ajouter un etablissement", nullptr));
        b_valider->setText(QCoreApplication::translate("MainWindow", "valider", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Telephone", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ajouter), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Adresse", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "modifier un etablissement", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Id_etab", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Telephone", nullptr));
        b_modifier->setText(QCoreApplication::translate("MainWindow", "modifier", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(modifier), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        centreExam2->setText(QCoreApplication::translate("MainWindow", "centre d'examen", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "recherche un etablissement", nullptr));
        b_annuler2->setText(QCoreApplication::translate("MainWindow", "annuler", nullptr));
        candidat2->setText(QCoreApplication::translate("MainWindow", "candidat", nullptr));
        etablissement2->setText(QCoreApplication::translate("MainWindow", "etablissement", nullptr));
        btn_tri->setText(QCoreApplication::translate("MainWindow", "tri", nullptr));
        enseignant2->setText(QCoreApplication::translate("MainWindow", "enseignant", nullptr));
        menubutton_2->setText(QCoreApplication::translate("MainWindow", "menu", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">tri du tableau</span></p></body></html>", nullptr));
        releasePortButton->setText(QCoreApplication::translate("MainWindow", "screen", nullptr));
        ressourceEXAM->setText(QCoreApplication::translate("MainWindow", "ressource", nullptr));
        centredEXAM->setText(QCoreApplication::translate("MainWindow", "centre d'examen", nullptr));
        candidatEXAM->setText(QCoreApplication::translate("MainWindow", "candidat", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "generer", nullptr));
        pdf_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>pdf ver QR code</p></body></html>", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QCoreApplication::translate("MainWindow", "QR", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "ajouter", nullptr));
        pdf_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">pdf :</span></p></body></html>", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("MainWindow", " ajout automatique", nullptr));
        statshow->setText(QCoreApplication::translate("MainWindow", "statistique", nullptr));
        addExam->setText(QCoreApplication::translate("MainWindow", "update ", nullptr));
        chargerButton->setText(QCoreApplication::translate("MainWindow", "charger", nullptr));
        nombre->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">nombre de copie :</span></p></body></html>", nullptr));
        sessionComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "principale", nullptr));
        sessionComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "controle", nullptr));

        date->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">date :</span></p></body></html>", nullptr));
        ajouterButton->setText(QCoreApplication::translate("MainWindow", "ok", nullptr));
        nom->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">nom d'examen :</span></p></body></html>", nullptr));
        niveauComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "6eme", nullptr));
        niveauComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "9eme", nullptr));
        niveauComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "4eme", nullptr));

        pdf->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">pdf :</span></p></body></html>", nullptr));
        niveau->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">niveau :</span></p></body></html>", nullptr));
        session_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">session :</span></p></body></html>", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab), QCoreApplication::translate("MainWindow", "ajouter", nullptr));
        nom_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">nom d'examen :</span></p></body></html>", nullptr));
        niveau_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">niveau :</span></p></body></html>", nullptr));
        niveauComboBox1->setItemText(0, QCoreApplication::translate("MainWindow", "6eme", nullptr));
        niveauComboBox1->setItemText(1, QCoreApplication::translate("MainWindow", "9eme", nullptr));
        niveauComboBox1->setItemText(2, QCoreApplication::translate("MainWindow", "4eme", nullptr));

        session_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">session :</span></p></body></html>", nullptr));
        sessionComboBox1->setItemText(0, QCoreApplication::translate("MainWindow", "principale", nullptr));
        sessionComboBox1->setItemText(1, QCoreApplication::translate("MainWindow", "controle", nullptr));

        nombre_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">nombre de copie :</span></p></body></html>", nullptr));
        date_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">date :</span></p></body></html>", nullptr));
        pdf_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">pdf :</span></p></body></html>", nullptr));
        chargerButton1->setText(QCoreApplication::translate("MainWindow", "charger", nullptr));
        ajouterButton1->setText(QCoreApplication::translate("MainWindow", "ok", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_2), QCoreApplication::translate("MainWindow", "modifier", nullptr));
#if QT_CONFIG(whatsthis)
        etablissementEXAM->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Condidat</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        etablissementEXAM->setText(QCoreApplication::translate("MainWindow", "etablissement", nullptr));
        rechercherButton->setText(QCoreApplication::translate("MainWindow", "recherche", nullptr));
        genererButton->setText(QCoreApplication::translate("MainWindow", "imprimer", nullptr));
        supprimerButton->setText(QCoreApplication::translate("MainWindow", "supprimer", nullptr));
        examenEXAM->setText(QCoreApplication::translate("MainWindow", "examem", nullptr));
        enseignantEXAM->setText(QCoreApplication::translate("MainWindow", "enseignant", nullptr));
#if QT_CONFIG(whatsthis)
        menubutton->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Condidat</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        menubutton->setText(QCoreApplication::translate("MainWindow", "menu", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "ressource", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "centre d'exam", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "candidat", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "enseignant", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
