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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *matiere;
    QLabel *label_20;
    QLabel *label_36;
    QPushButton *refresh;
    QLabel *label_12;
    QLineEdit *memail;
    QLabel *label_23;
    QLabel *label_14;
    QLineEdit *mname;
    QPushButton *pushButton_7;
    QLabel *label_29;
    QLineEdit *tel;
    QLabel *label_3;
    QLineEdit *lineEdit_18;
    QLabel *label_35;
    QLabel *label_27;
    QLabel *label_2;
    QLineEdit *lineEdit_32;
    QLabel *label_30;
    QLineEdit *mpre;
    QLineEdit *prenom;
    QLineEdit *mtel;
    QLineEdit *lineEdit_23;
    QLabel *label_21;
    QLineEdit *lineEdit_17;
    QPushButton *modifier;
    QLineEdit *lineEdit_16;
    QLineEdit *email;
    QPushButton *pushButton_9;
    QLabel *label_33;
    QLineEdit *IDsupp;
    QPushButton *pushButton_8;
    QLabel *label_6;
    QLabel *label_34;
    QLabel *label;
    QLabel *label_5;
    QLineEdit *mrole;
    QLineEdit *mid;
    QLabel *label_26;
    QListWidget *listWidget_3;
    QPushButton *supp;
    QLabel *label_7;
    QLabel *label_9;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_29;
    QLabel *label_28;
    QLabel *label_19;
    QPushButton *pushButton_11;
    QPushButton *ajout;
    QLabel *label_4;
    QLineEdit *lineEdit_21;
    QTableView *tableView;
    QListWidget *listWidget_2;
    QLineEdit *role;
    QLabel *label_32;
    QLineEdit *mstatus;
    QLabel *label_11;
    QLabel *label_8;
    QLineEdit *nom;
    QListWidget *listWidget;
    QLabel *label_10;
    QPushButton *rechercher;
    QTableView *tableView_2;
    QLineEdit *ID;
    QTableView *tableView_3;
    QLineEdit *lineEdit_rech;
    QComboBox *combo_tri;
    QPushButton *btn_tri;
    QPushButton *btn_pdf;
    QLabel *label_stats;
    QTextEdit *textEdit_stats;
    QPushButton *btnChatbot;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QLabel *label_13;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1464, 791);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        matiere = new QLineEdit(centralWidget);
        matiere->setObjectName("matiere");
        matiere->setGeometry(QRect(450, 310, 113, 28));
        label_20 = new QLabel(centralWidget);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(610, 320, 63, 20));
        label_36 = new QLabel(centralWidget);
        label_36->setObjectName("label_36");
        label_36->setGeometry(QRect(640, 1050, 141, 20));
        refresh = new QPushButton(centralWidget);
        refresh->setObjectName("refresh");
        refresh->setGeometry(QRect(760, 680, 141, 31));
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
        refresh->setPalette(palette);
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(290, 240, 81, 20));
        memail = new QLineEdit(centralWidget);
        memail->setObjectName("memail");
        memail->setGeometry(QRect(780, 200, 113, 28));
        label_23 = new QLabel(centralWidget);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(610, 80, 161, 20));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(610, 240, 81, 20));
        mname = new QLineEdit(centralWidget);
        mname->setObjectName("mname");
        mname->setGeometry(QRect(780, 120, 113, 28));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(10, 310, 251, 61));
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
        pushButton_7->setPalette(palette1);
        label_29 = new QLabel(centralWidget);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(330, 430, 211, 21));
        tel = new QLineEdit(centralWidget);
        tel->setObjectName("tel");
        tel->setGeometry(QRect(450, 230, 113, 28));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(290, 200, 63, 20));
        lineEdit_18 = new QLineEdit(centralWidget);
        lineEdit_18->setObjectName("lineEdit_18");
        lineEdit_18->setGeometry(QRect(800, 1080, 113, 28));
        label_35 = new QLabel(centralWidget);
        label_35->setObjectName("label_35");
        label_35->setGeometry(QRect(270, 470, 181, 20));
        label_27 = new QLabel(centralWidget);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(640, 1130, 141, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(330, 30, 211, 20));
        lineEdit_32 = new QLineEdit(centralWidget);
        lineEdit_32->setObjectName("lineEdit_32");
        lineEdit_32->setGeometry(QRect(800, 1120, 113, 28));
        label_30 = new QLabel(centralWidget);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(640, 1090, 161, 20));
        mpre = new QLineEdit(centralWidget);
        mpre->setObjectName("mpre");
        mpre->setGeometry(QRect(780, 160, 113, 28));
        prenom = new QLineEdit(centralWidget);
        prenom->setObjectName("prenom");
        prenom->setGeometry(QRect(450, 150, 113, 28));
        mtel = new QLineEdit(centralWidget);
        mtel->setObjectName("mtel");
        mtel->setGeometry(QRect(780, 240, 113, 28));
        lineEdit_23 = new QLineEdit(centralWidget);
        lineEdit_23->setObjectName("lineEdit_23");
        lineEdit_23->setGeometry(QRect(800, 1040, 113, 28));
        label_21 = new QLabel(centralWidget);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(610, 280, 63, 20));
        lineEdit_17 = new QLineEdit(centralWidget);
        lineEdit_17->setObjectName("lineEdit_17");
        lineEdit_17->setGeometry(QRect(800, 1000, 113, 28));
        modifier = new QPushButton(centralWidget);
        modifier->setObjectName("modifier");
        modifier->setGeometry(QRect(660, 360, 171, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette2.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::Accent, brush11);
        modifier->setPalette(palette2);
        lineEdit_16 = new QLineEdit(centralWidget);
        lineEdit_16->setObjectName("lineEdit_16");
        lineEdit_16->setGeometry(QRect(800, 840, 113, 28));
        email = new QLineEdit(centralWidget);
        email->setObjectName("email");
        email->setGeometry(QRect(450, 190, 113, 28));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(10, 430, 251, 61));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette3.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::Accent, brush11);
        pushButton_9->setPalette(palette3);
        label_33 = new QLabel(centralWidget);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(640, 930, 63, 20));
        IDsupp = new QLineEdit(centralWidget);
        IDsupp->setObjectName("IDsupp");
        IDsupp->setGeometry(QRect(370, 470, 113, 28));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(10, 250, 251, 61));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette4.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::Accent, brush11);
        pushButton_8->setPalette(palette4);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(610, 120, 63, 20));
        label_34 = new QLabel(centralWidget);
        label_34->setObjectName("label_34");
        label_34->setGeometry(QRect(640, 1010, 63, 20));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(290, 80, 151, 20));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(290, 120, 63, 20));
        mrole = new QLineEdit(centralWidget);
        mrole->setObjectName("mrole");
        mrole->setGeometry(QRect(780, 280, 113, 28));
        mid = new QLineEdit(centralWidget);
        mid->setObjectName("mid");
        mid->setGeometry(QRect(780, 80, 113, 28));
        label_26 = new QLabel(centralWidget);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(640, 850, 63, 20));
        listWidget_3 = new QListWidget(centralWidget);
        listWidget_3->setObjectName("listWidget_3");
        listWidget_3->setGeometry(QRect(590, 20, 311, 401));
        supp = new QPushButton(centralWidget);
        supp->setObjectName("supp");
        supp->setGeometry(QRect(500, 460, 71, 41));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette5.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::Accent, brush11);
        supp->setPalette(palette5);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(610, 200, 63, 20));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(290, 280, 63, 20));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(10, 130, 251, 61));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette6.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::Accent, brush11);
        pushButton_5->setPalette(palette6);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(10, 190, 251, 61));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette7.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::Accent, brush11);
        pushButton_3->setPalette(palette7);
        lineEdit_29 = new QLineEdit(centralWidget);
        lineEdit_29->setObjectName("lineEdit_29");
        lineEdit_29->setGeometry(QRect(800, 920, 113, 28));
        label_28 = new QLabel(centralWidget);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(640, 890, 81, 20));
        label_19 = new QLabel(centralWidget);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(610, 160, 63, 20));
        pushButton_11 = new QPushButton(centralWidget);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(10, 370, 251, 61));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette8.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::Accent, brush11);
        pushButton_11->setPalette(palette8);
        ajout = new QPushButton(centralWidget);
        ajout->setObjectName("ajout");
        ajout->setGeometry(QRect(330, 360, 171, 41));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette9.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette9.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette9.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush);
        palette9.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette9.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette9.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::Accent, brush11);
        ajout->setPalette(palette9);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(290, 160, 63, 20));
        lineEdit_21 = new QLineEdit(centralWidget);
        lineEdit_21->setObjectName("lineEdit_21");
        lineEdit_21->setGeometry(QRect(800, 960, 113, 28));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(910, 90, 391, 441));
        listWidget_2 = new QListWidget(centralWidget);
        listWidget_2->setObjectName("listWidget_2");
        listWidget_2->setGeometry(QRect(270, 20, 311, 511));
        role = new QLineEdit(centralWidget);
        role->setObjectName("role");
        role->setGeometry(QRect(450, 270, 113, 28));
        label_32 = new QLabel(centralWidget);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(640, 970, 63, 20));
        mstatus = new QLineEdit(centralWidget);
        mstatus->setObjectName("mstatus");
        mstatus->setGeometry(QRect(780, 320, 113, 28));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(290, 320, 63, 20));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(640, 30, 211, 20));
        nom = new QLineEdit(centralWidget);
        nom->setObjectName("nom");
        nom->setGeometry(QRect(450, 110, 113, 28));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 0, 251, 811));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush6);
        QBrush brush12(QColor(0, 0, 0, 128));
        brush12.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        listWidget->setPalette(palette10);
        listWidget->setStyleSheet(QString::fromUtf8("/* \360\237\214\237 QListWidget (Main List) */\n"
"QListWidget {\n"
"    background-color: white;  /* White background */\n"
"    border: 2px solid #ccc;  /* Light grey border */\n"
"    border-radius: 8px;\n"
"    color: black;  /* Black text */\n"
"    font-size: 14px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"/* List Items */\n"
"QListWidget::item {\n"
"    background-color: #f8f9fa;  /* Light grey background */\n"
"    padding: 10px;\n"
"    margin: 4px;\n"
"    border-radius: 5px;\n"
"    transition: all 0.3s ease-in-out; /* Smooth animation */\n"
"}\n"
"\n"
"/* Hover Effect (Animated) */\n"
"QListWidget::item:hover {\n"
"    background-color: #dce7ff;  /* Light blue when hovered */\n"
"    color: black;\n"
"    transform: scale(1.05); /* Slightly enlarge on hover */\n"
"}\n"
"\n"
"/* Selected Item (Animated) */\n"
"QListWidget::item:selected {\n"
"    background-color: #4a90e2;  /* Blue selection */\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    transform: scale(1.1); /* Make it pop */\n"
"}\n"
"\n"
""
                        "/* Scrollbar (Optional) */\n"
"QScrollBar:vertical {\n"
"    border: none;\n"
"    background: #f1f1f1;\n"
"    width: 10px;\n"
"    margin: 0px 0px 0px 0px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background: #c1c1c1;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical:hover {\n"
"    background: #4a90e2;\n"
"}\n"
"\n"
""));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(920, 40, 81, 21));
        rechercher = new QPushButton(centralWidget);
        rechercher->setObjectName("rechercher");
        rechercher->setGeometry(QRect(1200, 40, 83, 29));
        tableView_2 = new QTableView(centralWidget);
        tableView_2->setObjectName("tableView_2");
        tableView_2->setGeometry(QRect(910, 20, 391, 71));
        ID = new QLineEdit(centralWidget);
        ID->setObjectName("ID");
        ID->setGeometry(QRect(450, 70, 113, 28));
        tableView_3 = new QTableView(centralWidget);
        tableView_3->setObjectName("tableView_3");
        tableView_3->setGeometry(QRect(270, 530, 641, 192));
        lineEdit_rech = new QLineEdit(centralWidget);
        lineEdit_rech->setObjectName("lineEdit_rech");
        lineEdit_rech->setGeometry(QRect(1030, 40, 151, 28));
        combo_tri = new QComboBox(centralWidget);
        combo_tri->setObjectName("combo_tri");
        combo_tri->setGeometry(QRect(580, 500, 82, 28));
        btn_tri = new QPushButton(centralWidget);
        btn_tri->setObjectName("btn_tri");
        btn_tri->setGeometry(QRect(670, 500, 51, 29));
        btn_pdf = new QPushButton(centralWidget);
        btn_pdf->setObjectName("btn_pdf");
        btn_pdf->setGeometry(QRect(730, 500, 181, 29));
        label_stats = new QLabel(centralWidget);
        label_stats->setObjectName("label_stats");
        label_stats->setGeometry(QRect(930, 560, 131, 20));
        textEdit_stats = new QTextEdit(centralWidget);
        textEdit_stats->setObjectName("textEdit_stats");
        textEdit_stats->setGeometry(QRect(1120, 540, 104, 61));
        btnChatbot = new QPushButton(centralWidget);
        btnChatbot->setObjectName("btnChatbot");
        btnChatbot->setGeometry(QRect(1160, 630, 83, 29));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(930, 610, 371, 111));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(940, 630, 191, 28));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(1040, 680, 211, 20));
        MainWindow->setCentralWidget(centralWidget);
        tableView_3->raise();
        listWidget->raise();
        tableView_2->raise();
        tableView->raise();
        listWidget_2->raise();
        matiere->raise();
        listWidget_3->raise();
        lineEdit_32->raise();
        label_7->raise();
        prenom->raise();
        lineEdit_17->raise();
        mstatus->raise();
        label_27->raise();
        tel->raise();
        lineEdit_23->raise();
        label_5->raise();
        label_9->raise();
        pushButton_7->raise();
        role->raise();
        pushButton_11->raise();
        label_14->raise();
        label_2->raise();
        label_30->raise();
        label_33->raise();
        pushButton_8->raise();
        lineEdit_18->raise();
        supp->raise();
        mtel->raise();
        refresh->raise();
        mid->raise();
        label_23->raise();
        ajout->raise();
        label_20->raise();
        IDsupp->raise();
        label_34->raise();
        label_35->raise();
        lineEdit_16->raise();
        label_26->raise();
        pushButton_3->raise();
        lineEdit_21->raise();
        label_8->raise();
        mname->raise();
        label_3->raise();
        label_29->raise();
        label_12->raise();
        mpre->raise();
        pushButton_9->raise();
        label_6->raise();
        modifier->raise();
        label_36->raise();
        label->raise();
        label_11->raise();
        email->raise();
        nom->raise();
        memail->raise();
        label_28->raise();
        pushButton_5->raise();
        lineEdit_29->raise();
        label_32->raise();
        label_19->raise();
        label_21->raise();
        label_4->raise();
        mrole->raise();
        label_10->raise();
        rechercher->raise();
        ID->raise();
        lineEdit_rech->raise();
        combo_tri->raise();
        btn_tri->raise();
        btn_pdf->raise();
        label_stats->raise();
        textEdit_stats->raise();
        textEdit->raise();
        btnChatbot->raise();
        lineEdit->raise();
        label_13->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1464, 25));
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
        label_20->setText(QCoreApplication::translate("MainWindow", "matiere", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "Nb_exam_surveill\303\251s", nullptr));
        refresh->setText(QCoreApplication::translate("MainWindow", "refresh", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", " T\303\251l\303\251phone", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "ID_enseignant", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", " T\303\251l\303\251phone", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
#if QT_CONFIG(whatsthis)
        label_29->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Ajouter Un Enseignant</span></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_29->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700;\">Supprimer un Enseignant</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "ID_enseignant", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "ID_Centre_Examen", nullptr));
#if QT_CONFIG(whatsthis)
        label_2->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Ajouter Un Enseignant</span></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Ajouter Un Enseignant</span></p></body></html>", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "ID_\303\211tablissement", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "R\303\264le", nullptr));
        modifier->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "R\303\264le", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "Nb_exam_corrig\303\251s", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "ID_enseignant", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        supp->setText(QCoreApplication::translate("MainWindow", "Suprimmer", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "R\303\264le", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", " T\303\251l\303\251phone", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Pr\303\251nom", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        ajout->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Pr\303\251nom", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "Statut", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "matiere", nullptr));
#if QT_CONFIG(whatsthis)
        label_8->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Ajouter Un Enseignant</span></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Modifier Un Enseignant</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Rechercher", nullptr));
        rechercher->setText(QCoreApplication::translate("MainWindow", "Rechercher", nullptr));
        btn_tri->setText(QCoreApplication::translate("MainWindow", "trier", nullptr));
        btn_pdf->setText(QCoreApplication::translate("MainWindow", "Exporter en PDF", nullptr));
        label_stats->setText(QCoreApplication::translate("MainWindow", "Statistiques ici...", nullptr));
        btnChatbot->setText(QCoreApplication::translate("MainWindow", "btnChatbot", nullptr));
        label_13->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
