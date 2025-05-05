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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTableView *tableView;
    QComboBox *comboBox_sort;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton_6;
    QLabel *pdf_3;
    QWidget *tab_4;
    QPushButton *pushButton_8;
    QLineEdit *lineEdit_2;
    QLabel *pdf_4;
    QPushButton *pushButton_7;
    QPushButton *statshow;
    QPushButton *rechercherButton;
    QPushButton *pushButton_4;
    QListView *listView_3;
    QPushButton *pushButton_5;
    QLineEdit *lineEdit_search;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *lineEdit_nom;
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
    QPushButton *pushButton_3;
    QPushButton *genererButton;
    QListView *listView_2;
    QPushButton *pushButton;
    QListView *listView;
    QLabel *label_4;
    QListView *listView_4;
    QPushButton *supprimerButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1786, 869);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        tableView = new QTableView(centralWidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(410, 90, 751, 192));
        tableView->setStyleSheet(QString::fromUtf8("background-color :#6A9ED1"));
        comboBox_sort = new QComboBox(centralWidget);
        comboBox_sort->setObjectName("comboBox_sort");
        comboBox_sort->setGeometry(QRect(1190, 130, 151, 28));
        tabWidget_2 = new QTabWidget(centralWidget);
        tabWidget_2->setObjectName("tabWidget_2");
        tabWidget_2->setGeometry(QRect(420, 370, 341, 161));
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
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(1230, 170, 83, 29));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        statshow = new QPushButton(centralWidget);
        statshow->setObjectName("statshow");
        statshow->setGeometry(QRect(1220, 220, 101, 29));
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
        rechercherButton = new QPushButton(centralWidget);
        rechercherButton->setObjectName("rechercherButton");
        rechercherButton->setGeometry(QRect(1020, 50, 91, 29));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient(0, 0, 0, 1);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(153, 204, 255, 255));
        gradient.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush1(gradient);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(59, 113, 157, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(49, 94, 131, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(19, 38, 52, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(26, 50, 70, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient1(0, 0, 0, 1);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(153, 204, 255, 255));
        gradient1.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush6(gradient1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        QLinearGradient gradient2(0, 0, 0, 1);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(153, 204, 255, 255));
        gradient2.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush7(gradient2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush7);
        QBrush brush8(QColor(0, 0, 0, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush8);
        QBrush brush9(QColor(19, 37, 52, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        QBrush brush10(QColor(255, 255, 220, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush8);
        QBrush brush11(QColor(255, 255, 255, 127));
        brush11.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette.setBrush(QPalette::Active, QPalette::Accent, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient3(0, 0, 0, 1);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(153, 204, 255, 255));
        gradient3.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush12(gradient3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient4(0, 0, 0, 1);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(153, 204, 255, 255));
        gradient4.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush13(gradient4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush13);
        QLinearGradient gradient5(0, 0, 0, 1);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(153, 204, 255, 255));
        gradient5.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush14(gradient5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush14);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        QLinearGradient gradient6(0, 0, 0, 1);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(153, 204, 255, 255));
        gradient6.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush15(gradient6);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush15);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        QLinearGradient gradient7(0, 0, 0, 1);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(153, 204, 255, 255));
        gradient7.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush16(gradient7);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush16);
        QLinearGradient gradient8(0, 0, 0, 1);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(153, 204, 255, 255));
        gradient8.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush17(gradient8);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush8);
        QBrush brush18(QColor(39, 75, 105, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush18);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush8);
        QBrush brush19(QColor(19, 38, 52, 127));
        brush19.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush19);
#endif
        QBrush brush20(QColor(27, 53, 74, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush20);
        rechercherButton->setPalette(palette);
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
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(0, 360, 151, 61));
        pushButton_4->setStyleSheet(QString::fromUtf8("\n"
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
        listView_3 = new QListView(centralWidget);
        listView_3->setObjectName("listView_3");
        listView_3->setGeometry(QRect(0, -30, 151, 971));
        QPalette palette1;
        QLinearGradient gradient9(0, 0, 1, 1);
        gradient9.setSpread(QGradient::PadSpread);
        gradient9.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient9.setColorAt(0, QColor(230, 242, 255, 255));
        gradient9.setColorAt(0.5, QColor(179, 217, 255, 255));
        gradient9.setColorAt(1, QColor(128, 191, 255, 255));
        QBrush brush21(gradient9);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush21);
        QBrush brush22(QColor(210, 231, 255, 255));
        brush22.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush22);
        QLinearGradient gradient10(0, 0, 1, 1);
        gradient10.setSpread(QGradient::PadSpread);
        gradient10.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient10.setColorAt(0, QColor(230, 242, 255, 255));
        gradient10.setColorAt(0.5, QColor(179, 217, 255, 255));
        gradient10.setColorAt(1, QColor(128, 191, 255, 255));
        QBrush brush23(gradient10);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush23);
        QLinearGradient gradient11(0, 0, 1, 1);
        gradient11.setSpread(QGradient::PadSpread);
        gradient11.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient11.setColorAt(0, QColor(230, 242, 255, 255));
        gradient11.setColorAt(0.5, QColor(179, 217, 255, 255));
        gradient11.setColorAt(1, QColor(128, 191, 255, 255));
        QBrush brush24(gradient11);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush24);
        QLinearGradient gradient12(0, 0, 1, 1);
        gradient12.setSpread(QGradient::PadSpread);
        gradient12.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient12.setColorAt(0, QColor(230, 242, 255, 255));
        gradient12.setColorAt(0.5, QColor(179, 217, 255, 255));
        gradient12.setColorAt(1, QColor(128, 191, 255, 255));
        QBrush brush25(gradient12);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush25);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush22);
        QLinearGradient gradient13(0, 0, 1, 1);
        gradient13.setSpread(QGradient::PadSpread);
        gradient13.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient13.setColorAt(0, QColor(230, 242, 255, 255));
        gradient13.setColorAt(0.5, QColor(179, 217, 255, 255));
        gradient13.setColorAt(1, QColor(128, 191, 255, 255));
        QBrush brush26(gradient13);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush26);
        QLinearGradient gradient14(0, 0, 1, 1);
        gradient14.setSpread(QGradient::PadSpread);
        gradient14.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient14.setColorAt(0, QColor(230, 242, 255, 255));
        gradient14.setColorAt(0.5, QColor(179, 217, 255, 255));
        gradient14.setColorAt(1, QColor(128, 191, 255, 255));
        QBrush brush27(gradient14);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush27);
        QLinearGradient gradient15(0, 0, 1, 1);
        gradient15.setSpread(QGradient::PadSpread);
        gradient15.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient15.setColorAt(0, QColor(230, 242, 255, 255));
        gradient15.setColorAt(0.5, QColor(179, 217, 255, 255));
        gradient15.setColorAt(1, QColor(128, 191, 255, 255));
        QBrush brush28(gradient15);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush28);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush22);
        QLinearGradient gradient16(0, 0, 1, 1);
        gradient16.setSpread(QGradient::PadSpread);
        gradient16.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient16.setColorAt(0, QColor(230, 242, 255, 255));
        gradient16.setColorAt(0.5, QColor(179, 217, 255, 255));
        gradient16.setColorAt(1, QColor(128, 191, 255, 255));
        QBrush brush29(gradient16);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush29);
        QLinearGradient gradient17(0, 0, 1, 1);
        gradient17.setSpread(QGradient::PadSpread);
        gradient17.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient17.setColorAt(0, QColor(230, 242, 255, 255));
        gradient17.setColorAt(0.5, QColor(179, 217, 255, 255));
        gradient17.setColorAt(1, QColor(128, 191, 255, 255));
        QBrush brush30(gradient17);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush30);
        listView_3->setPalette(palette1);
        listView_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(0, 420, 151, 61));
        pushButton_5->setStyleSheet(QString::fromUtf8("\n"
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
        lineEdit_search = new QLineEdit(centralWidget);
        lineEdit_search->setObjectName("lineEdit_search");
        lineEdit_search->setGeometry(QRect(470, 50, 531, 28));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(160, 30, 231, 541));
        tabWidget->setStyleSheet(QString::fromUtf8("background-color :#6A9ED1"));
        tab = new QWidget();
        tab->setObjectName("tab");
        lineEdit_nom = new QLineEdit(tab);
        lineEdit_nom->setObjectName("lineEdit_nom");
        lineEdit_nom->setGeometry(QRect(10, 40, 211, 28));
        lineEdit_nom->setStyleSheet(QString::fromUtf8("ui->lineEdit->setStyleSheet(\"color: black;\");\n"
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
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient18(0, 0, 0, 1);
        gradient18.setSpread(QGradient::PadSpread);
        gradient18.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient18.setColorAt(0, QColor(153, 204, 255, 255));
        gradient18.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush31(gradient18);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush31);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient19(0, 0, 0, 1);
        gradient19.setSpread(QGradient::PadSpread);
        gradient19.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient19.setColorAt(0, QColor(153, 204, 255, 255));
        gradient19.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush32(gradient19);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush32);
        QLinearGradient gradient20(0, 0, 0, 1);
        gradient20.setSpread(QGradient::PadSpread);
        gradient20.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient20.setColorAt(0, QColor(153, 204, 255, 255));
        gradient20.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush33(gradient20);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush33);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush8);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette2.setBrush(QPalette::Active, QPalette::Accent, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient21(0, 0, 0, 1);
        gradient21.setSpread(QGradient::PadSpread);
        gradient21.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient21.setColorAt(0, QColor(153, 204, 255, 255));
        gradient21.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush34(gradient21);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush34);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient22(0, 0, 0, 1);
        gradient22.setSpread(QGradient::PadSpread);
        gradient22.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient22.setColorAt(0, QColor(153, 204, 255, 255));
        gradient22.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush35(gradient22);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush35);
        QLinearGradient gradient23(0, 0, 0, 1);
        gradient23.setSpread(QGradient::PadSpread);
        gradient23.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient23.setColorAt(0, QColor(153, 204, 255, 255));
        gradient23.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush36(gradient23);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush36);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::Accent, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        QLinearGradient gradient24(0, 0, 0, 1);
        gradient24.setSpread(QGradient::PadSpread);
        gradient24.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient24.setColorAt(0, QColor(153, 204, 255, 255));
        gradient24.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush37(gradient24);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush37);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        QLinearGradient gradient25(0, 0, 0, 1);
        gradient25.setSpread(QGradient::PadSpread);
        gradient25.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient25.setColorAt(0, QColor(153, 204, 255, 255));
        gradient25.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush38(gradient25);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush38);
        QLinearGradient gradient26(0, 0, 0, 1);
        gradient26.setSpread(QGradient::PadSpread);
        gradient26.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient26.setColorAt(0, QColor(153, 204, 255, 255));
        gradient26.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush39(gradient26);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush39);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush18);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush19);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::Accent, brush20);
        ajouterButton->setPalette(palette2);
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
        tabWidget->addTab(tab, QString());
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
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient27(0, 0, 0, 1);
        gradient27.setSpread(QGradient::PadSpread);
        gradient27.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient27.setColorAt(0, QColor(153, 204, 255, 255));
        gradient27.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush40(gradient27);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush40);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient28(0, 0, 0, 1);
        gradient28.setSpread(QGradient::PadSpread);
        gradient28.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient28.setColorAt(0, QColor(153, 204, 255, 255));
        gradient28.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush41(gradient28);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush41);
        QLinearGradient gradient29(0, 0, 0, 1);
        gradient29.setSpread(QGradient::PadSpread);
        gradient29.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient29.setColorAt(0, QColor(153, 204, 255, 255));
        gradient29.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush42(gradient29);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush42);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush8);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette3.setBrush(QPalette::Active, QPalette::Accent, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient30(0, 0, 0, 1);
        gradient30.setSpread(QGradient::PadSpread);
        gradient30.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient30.setColorAt(0, QColor(153, 204, 255, 255));
        gradient30.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush43(gradient30);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush43);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient31(0, 0, 0, 1);
        gradient31.setSpread(QGradient::PadSpread);
        gradient31.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient31.setColorAt(0, QColor(153, 204, 255, 255));
        gradient31.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush44(gradient31);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush44);
        QLinearGradient gradient32(0, 0, 0, 1);
        gradient32.setSpread(QGradient::PadSpread);
        gradient32.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient32.setColorAt(0, QColor(153, 204, 255, 255));
        gradient32.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush45(gradient32);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush45);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::Accent, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        QLinearGradient gradient33(0, 0, 0, 1);
        gradient33.setSpread(QGradient::PadSpread);
        gradient33.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient33.setColorAt(0, QColor(153, 204, 255, 255));
        gradient33.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush46(gradient33);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush46);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        QLinearGradient gradient34(0, 0, 0, 1);
        gradient34.setSpread(QGradient::PadSpread);
        gradient34.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient34.setColorAt(0, QColor(153, 204, 255, 255));
        gradient34.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush47(gradient34);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush47);
        QLinearGradient gradient35(0, 0, 0, 1);
        gradient35.setSpread(QGradient::PadSpread);
        gradient35.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient35.setColorAt(0, QColor(153, 204, 255, 255));
        gradient35.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush48(gradient35);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush48);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush18);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush19);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::Accent, brush20);
        ajouterButton1->setPalette(palette3);
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
        tabWidget->addTab(tab_2, QString());
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(0, 290, 151, 71));
        pushButton_3->setStyleSheet(QString::fromUtf8("\n"
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
        genererButton = new QPushButton(centralWidget);
        genererButton->setObjectName("genererButton");
        genererButton->setGeometry(QRect(910, 300, 91, 31));
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
        listView_2 = new QListView(centralWidget);
        listView_2->setObjectName("listView_2");
        listView_2->setGeometry(QRect(1030, 290, 131, 51));
        listView_2->setStyleSheet(QString::fromUtf8("background-color :#6A9ED1\n"
""));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 170, 151, 61));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient36(0, 0, 0, 1);
        gradient36.setSpread(QGradient::PadSpread);
        gradient36.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient36.setColorAt(0, QColor(153, 204, 255, 255));
        gradient36.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush49(gradient36);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush49);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush8);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush8);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush8);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush8);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient37(0, 0, 0, 1);
        gradient37.setSpread(QGradient::PadSpread);
        gradient37.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient37.setColorAt(0, QColor(153, 204, 255, 255));
        gradient37.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush50(gradient37);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush50);
        QLinearGradient gradient38(0, 0, 0, 1);
        gradient38.setSpread(QGradient::PadSpread);
        gradient38.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient38.setColorAt(0, QColor(153, 204, 255, 255));
        gradient38.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush51(gradient38);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush51);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush8);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette4.setBrush(QPalette::Active, QPalette::Accent, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient39(0, 0, 0, 1);
        gradient39.setSpread(QGradient::PadSpread);
        gradient39.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient39.setColorAt(0, QColor(153, 204, 255, 255));
        gradient39.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush52(gradient39);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush52);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient40(0, 0, 0, 1);
        gradient40.setSpread(QGradient::PadSpread);
        gradient40.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient40.setColorAt(0, QColor(153, 204, 255, 255));
        gradient40.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush53(gradient40);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush53);
        QLinearGradient gradient41(0, 0, 0, 1);
        gradient41.setSpread(QGradient::PadSpread);
        gradient41.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient41.setColorAt(0, QColor(153, 204, 255, 255));
        gradient41.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush54(gradient41);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush54);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::Accent, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        QLinearGradient gradient42(0, 0, 0, 1);
        gradient42.setSpread(QGradient::PadSpread);
        gradient42.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient42.setColorAt(0, QColor(153, 204, 255, 255));
        gradient42.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush55(gradient42);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush55);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        QLinearGradient gradient43(0, 0, 0, 1);
        gradient43.setSpread(QGradient::PadSpread);
        gradient43.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient43.setColorAt(0, QColor(153, 204, 255, 255));
        gradient43.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush56(gradient43);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush56);
        QLinearGradient gradient44(0, 0, 0, 1);
        gradient44.setSpread(QGradient::PadSpread);
        gradient44.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient44.setColorAt(0, QColor(153, 204, 255, 255));
        gradient44.setColorAt(1, QColor(102, 178, 255, 255));
        QBrush brush57(gradient44);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush57);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush8);
        QBrush brush58(QColor(0, 0, 0, 127));
        brush58.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush58);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::Accent, brush8);
        pushButton->setPalette(palette4);
        QFont font;
        font.setBold(false);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("\n"
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
        listView = new QListView(centralWidget);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(890, 290, 131, 51));
        listView->setStyleSheet(QString::fromUtf8("background-color :#6A9ED1"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(1180, 100, 111, 21));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #003366;\n"
"    font-weight: bold;\n"
"    text-shadow: 1px 1px 2px rgba(0, 0, 0, 0.2);\n"
"}"));
        listView_4 = new QListView(centralWidget);
        listView_4->setObjectName("listView_4");
        listView_4->setGeometry(QRect(1170, 90, 201, 191));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush8);
        QBrush brush59(QColor(106, 158, 209, 255));
        brush59.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush59);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush);
        QBrush brush60(QColor(233, 244, 255, 255));
        brush60.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush60);
        QBrush brush61(QColor(105, 116, 127, 255));
        brush61.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush61);
        QBrush brush62(QColor(141, 155, 170, 255));
        brush62.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush62);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush8);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush8);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush59);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush59);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush8);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush60);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush58);
#endif
        palette5.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush59);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush60);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush61);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush62);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush59);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush59);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush60);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush58);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush61);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush59);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush60);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush61);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush62);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush61);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush61);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush59);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush59);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush8);
        QBrush brush63(QColor(211, 233, 255, 255));
        brush63.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush63);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush8);
        QBrush brush64(QColor(105, 116, 127, 127));
        brush64.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush64);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        listView_4->setPalette(palette5);
        listView_4->setStyleSheet(QString::fromUtf8("background-color :#6A9ED1"));
        supprimerButton = new QPushButton(centralWidget);
        supprimerButton->setObjectName("supprimerButton");
        supprimerButton->setGeometry(QRect(1050, 300, 91, 29));
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
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, 230, 151, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
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
        MainWindow->setCentralWidget(centralWidget);
        listView_3->raise();
        listView_4->raise();
        listView->raise();
        tableView->raise();
        comboBox_sort->raise();
        tabWidget_2->raise();
        pushButton_7->raise();
        statshow->raise();
        rechercherButton->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        lineEdit_search->raise();
        tabWidget->raise();
        pushButton_3->raise();
        genererButton->raise();
        listView_2->raise();
        pushButton->raise();
        label_4->raise();
        supprimerButton->raise();
        pushButton_2->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1786, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget_2->setCurrentIndex(1);
        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Gestion des Clients", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "generer", nullptr));
        pdf_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>pdf ver QR code</p></body></html>", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QCoreApplication::translate("MainWindow", "QR", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "ajouter", nullptr));
        pdf_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">pdf :</span></p></body></html>", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("MainWindow", " ajout automatique", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "ok", nullptr));
        statshow->setText(QCoreApplication::translate("MainWindow", "statistique", nullptr));
        rechercherButton->setText(QCoreApplication::translate("MainWindow", "recherche", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Examen", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "ressources disponibles", nullptr));
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
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "ajouter", nullptr));
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
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "modifier", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "centre d'examen", nullptr));
        genererButton->setText(QCoreApplication::translate("MainWindow", "imprimer", nullptr));
#if QT_CONFIG(whatsthis)
        pushButton->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Condidat</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton->setText(QCoreApplication::translate("MainWindow", "condidat", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">tri du tableau</span></p></body></html>", nullptr));
        supprimerButton->setText(QCoreApplication::translate("MainWindow", "supprimer", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Etablissement", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
