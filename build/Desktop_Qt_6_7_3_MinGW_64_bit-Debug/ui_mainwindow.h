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
#include <QtQuickWidgets/QQuickWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
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
    QTextBrowser *textBrowser_4;
    QLabel *label_3;
    QPushButton *pushButton_5;
    QLabel *label_7;
    QPushButton *b_modifier;
    QLabel *label_9;
    QLineEdit *lineEdit_IDS;
    QTextBrowser *textBrowser_3;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_add;
    QLabel *label_10;
    QLabel *label_4;
    QPushButton *b_valider;
    QLabel *label_6;
    QLabel *label_2;
    QLineEdit *lineEdit_tel;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit_e;
    QLabel *label_5;
    QPushButton *b_annuler2;
    QScrollBar *verticalScrollBar_2;
    QLineEdit *lineEdit_nom;
    QPushButton *pushButton_6;
    QPushButton *pushButton;
    QTextBrowser *textBrowser_2;
    QPushButton *b_supprimer;
    QTextBrowser *textBrowser;
    QLabel *label;
    QLabel *label_8;
    QLineEdit *lineEdit_recherche;
    QScrollBar *verticalScrollBar;
    QLabel *label_11;
    QLineEdit *lineEdit_ID;
    QTableView *tableView;
    QQuickWidget *quickWidget;
    QLineEdit *lineEdit_T;
    QPushButton *b_rechercher;
    QTableView *tableView_rech;
    QPushButton *b_refresh;
    QComboBox *combo_tri;
    QPushButton *btn_tri;
    QPushButton *btn_pdf;
    QLabel *label_stats;
    QTextEdit *textEdit_stats;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1538, 840);
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
        MainWindow->setPalette(palette);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        textBrowser_4 = new QTextBrowser(centralWidget);
        textBrowser_4->setObjectName("textBrowser_4");
        textBrowser_4->setGeometry(QRect(670, 90, 831, 371));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(300, 230, 63, 20));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(20, 340, 201, 61));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(300, 480, 341, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(16);
        font.setBold(true);
        label_7->setFont(font);
        b_modifier = new QPushButton(centralWidget);
        b_modifier->setObjectName("b_modifier");
        b_modifier->setGeometry(QRect(470, 400, 83, 29));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(680, 100, 321, 41));
        label_9->setFont(font);
        lineEdit_IDS = new QLineEdit(centralWidget);
        lineEdit_IDS->setObjectName("lineEdit_IDS");
        lineEdit_IDS->setGeometry(QRect(390, 570, 113, 28));
        textBrowser_3 = new QTextBrowser(centralWidget);
        textBrowser_3->setObjectName("textBrowser_3");
        textBrowser_3->setGeometry(QRect(270, 470, 371, 271));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(20, 500, 201, 61));
        lineEdit_add = new QLineEdit(centralWidget);
        lineEdit_add->setObjectName("lineEdit_add");
        lineEdit_add->setGeometry(QRect(410, 230, 113, 28));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(30, 70, 191, 91));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette1.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::Accent, brush11);
        label_10->setPalette(palette1);
        label_10->setPixmap(QPixmap(QString::fromUtf8("../../475365257_1626222951621700_6908249215875433429_n.jpg")));
        label_10->setScaledContents(true);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(300, 270, 81, 20));
        b_valider = new QPushButton(centralWidget);
        b_valider->setObjectName("b_valider");
        b_valider->setGeometry(QRect(330, 400, 83, 29));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(300, 350, 63, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(300, 190, 63, 20));
        lineEdit_tel = new QLineEdit(centralWidget);
        lineEdit_tel->setObjectName("lineEdit_tel");
        lineEdit_tel->setGeometry(QRect(410, 270, 113, 28));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(20, 420, 201, 61));
        lineEdit_e = new QLineEdit(centralWidget);
        lineEdit_e->setObjectName("lineEdit_e");
        lineEdit_e->setGeometry(QRect(410, 310, 113, 28));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(300, 310, 63, 20));
        b_annuler2 = new QPushButton(centralWidget);
        b_annuler2->setObjectName("b_annuler2");
        b_annuler2->setGeometry(QRect(480, 660, 83, 29));
        verticalScrollBar_2 = new QScrollBar(centralWidget);
        verticalScrollBar_2->setObjectName("verticalScrollBar_2");
        verticalScrollBar_2->setGeometry(QRect(1830, 110, 16, 791));
        verticalScrollBar_2->setOrientation(Qt::Orientation::Vertical);
        lineEdit_nom = new QLineEdit(centralWidget);
        lineEdit_nom->setObjectName("lineEdit_nom");
        lineEdit_nom->setGeometry(QRect(410, 190, 113, 28));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(20, 260, 201, 61));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 180, 201, 61));
        textBrowser_2 = new QTextBrowser(centralWidget);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(270, 90, 371, 371));
        b_supprimer = new QPushButton(centralWidget);
        b_supprimer->setObjectName("b_supprimer");
        b_supprimer->setGeometry(QRect(350, 660, 83, 29));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(0, 50, 256, 731));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(300, 100, 301, 41));
        label->setFont(font);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(320, 570, 63, 20));
        lineEdit_recherche = new QLineEdit(centralWidget);
        lineEdit_recherche->setObjectName("lineEdit_recherche");
        lineEdit_recherche->setGeometry(QRect(1010, 110, 361, 28));
        verticalScrollBar = new QScrollBar(centralWidget);
        verticalScrollBar->setObjectName("verticalScrollBar");
        verticalScrollBar->setGeometry(QRect(1520, -20, 16, 791));
        verticalScrollBar->setOrientation(Qt::Orientation::Vertical);
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(300, 150, 63, 20));
        lineEdit_ID = new QLineEdit(centralWidget);
        lineEdit_ID->setObjectName("lineEdit_ID");
        lineEdit_ID->setGeometry(QRect(410, 150, 113, 28));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(670, 470, 831, 271));
        quickWidget = new QQuickWidget(centralWidget);
        quickWidget->setObjectName("quickWidget");
        quickWidget->setGeometry(QRect(1040, 150, 441, 291));
        quickWidget->setResizeMode(QQuickWidget::ResizeMode::SizeRootObjectToView);
        lineEdit_T = new QLineEdit(centralWidget);
        lineEdit_T->setObjectName("lineEdit_T");
        lineEdit_T->setGeometry(QRect(410, 350, 113, 28));
        b_rechercher = new QPushButton(centralWidget);
        b_rechercher->setObjectName("b_rechercher");
        b_rechercher->setGeometry(QRect(1380, 110, 91, 29));
        tableView_rech = new QTableView(centralWidget);
        tableView_rech->setObjectName("tableView_rech");
        tableView_rech->setGeometry(QRect(700, 150, 311, 291));
        b_refresh = new QPushButton(centralWidget);
        b_refresh->setObjectName("b_refresh");
        b_refresh->setGeometry(QRect(10, 10, 83, 29));
        combo_tri = new QComboBox(centralWidget);
        combo_tri->setObjectName("combo_tri");
        combo_tri->setGeometry(QRect(1350, 460, 82, 28));
        btn_tri = new QPushButton(centralWidget);
        btn_tri->setObjectName("btn_tri");
        btn_tri->setGeometry(QRect(1440, 460, 51, 29));
        btn_pdf = new QPushButton(centralWidget);
        btn_pdf->setObjectName("btn_pdf");
        btn_pdf->setGeometry(QRect(1130, 700, 141, 29));
        label_stats = new QLabel(centralWidget);
        label_stats->setObjectName("label_stats");
        label_stats->setGeometry(QRect(1280, 700, 101, 20));
        textEdit_stats = new QTextEdit(centralWidget);
        textEdit_stats->setObjectName("textEdit_stats");
        textEdit_stats->setGeometry(QRect(1380, 690, 104, 41));
        MainWindow->setCentralWidget(centralWidget);
        textBrowser_4->raise();
        textBrowser_3->raise();
        textBrowser_2->raise();
        textBrowser->raise();
        label_3->raise();
        pushButton_5->raise();
        label_7->raise();
        b_modifier->raise();
        label_9->raise();
        lineEdit_IDS->raise();
        pushButton_3->raise();
        lineEdit_add->raise();
        label_10->raise();
        label_4->raise();
        b_valider->raise();
        label_6->raise();
        label_2->raise();
        lineEdit_tel->raise();
        pushButton_4->raise();
        lineEdit_e->raise();
        label_5->raise();
        b_annuler2->raise();
        verticalScrollBar_2->raise();
        lineEdit_nom->raise();
        pushButton_6->raise();
        pushButton->raise();
        b_supprimer->raise();
        label->raise();
        label_8->raise();
        lineEdit_recherche->raise();
        verticalScrollBar->raise();
        label_11->raise();
        lineEdit_ID->raise();
        tableView->raise();
        quickWidget->raise();
        lineEdit_T->raise();
        b_rechercher->raise();
        tableView_rech->raise();
        b_refresh->raise();
        combo_tri->raise();
        btn_tri->raise();
        btn_pdf->raise();
        label_stats->raise();
        textEdit_stats->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1538, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Gestion des Clients", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Adresse", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "centre d'examen", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "supprimer un etablissement", nullptr));
        b_modifier->setText(QCoreApplication::translate("MainWindow", "modifier", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "recherche un etablissement", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "resources disponibles", nullptr));
        label_10->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "Telephone", nullptr));
        b_valider->setText(QCoreApplication::translate("MainWindow", "valider", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "examen", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        b_annuler2->setText(QCoreApplication::translate("MainWindow", "annuler", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "etablissement", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "condidat", nullptr));
        b_supprimer->setText(QCoreApplication::translate("MainWindow", "supprimer", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "ajouter un etablissement", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Id_etab", nullptr));
        b_rechercher->setText(QCoreApplication::translate("MainWindow", "rechercher", nullptr));
        b_refresh->setText(QCoreApplication::translate("MainWindow", "refresh", nullptr));
        btn_tri->setText(QCoreApplication::translate("MainWindow", "tri", nullptr));
        btn_pdf->setText(QCoreApplication::translate("MainWindow", "exporter en PDF", nullptr));
        label_stats->setText(QCoreApplication::translate("MainWindow", "statistique ici", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
