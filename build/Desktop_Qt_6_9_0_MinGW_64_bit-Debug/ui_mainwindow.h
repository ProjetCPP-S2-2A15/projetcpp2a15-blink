/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame_4;
    QWidget *widget;
    QLabel *label_8;
    QPushButton *INSERER2;
    QPushButton *ANNULER4;
    QPushButton *CANDIDATS;
    QPushButton *EXCEL;
    QTableWidget *TABLEC;
    QPushButton *EXAMEN;
    QPushButton *TRIER;
    QComboBox *TRIERC;
    QPushButton *RESSOURCES;
    QTextBrowser *textBrowser;
    QFrame *frame_2;
    QLineEdit *lineEdit1_ID;
    QLabel *label_3;
    QLabel *label_5;
    QPushButton *AJOUTER1;
    QLabel *label_12;
    QLineEdit *L2;
    QLabel *label_13;
    QLabel *label_17;
    QLineEdit *L6;
    QLineEdit *L8;
    QLineEdit *L9;
    QLineEdit *L3;
    QDateEdit *D1;
    QPushButton *ANNULER1;
    QLineEdit *L5;
    QLineEdit *L4;
    QLabel *label_11;
    QLabel *label_16;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_6;
    QLineEdit *L7;
    QScrollBar *verticalScrollBar_2;
    QFrame *frame_3;
    QPushButton *INSERER1;
    QPushButton *ANNULER3;
    QWidget *I;
    QLabel *label_7;
    QPushButton *PDF;
    QPushButton *ETABLISSEMENT;
    QPushButton *CENTRE_EXAMEN;
    QPushButton *CHERCHER1;
    QPushButton *ANNULER2;
    QLineEdit *CHERCHERC;
    QPushButton *ENSEIGNANTS;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1524, 645);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        frame_4 = new QFrame(centralWidget);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(810, 0, 281, 231));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        widget = new QWidget(frame_4);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 40, 201, 131));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(136, 136, 136);"));
        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 60, 191, 20));
        INSERER2 = new QPushButton(frame_4);
        INSERER2->setObjectName("INSERER2");
        INSERER2->setGeometry(QRect(30, 190, 75, 24));
        INSERER2->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));"));
        ANNULER4 = new QPushButton(frame_4);
        ANNULER4->setObjectName("ANNULER4");
        ANNULER4->setGeometry(QRect(150, 190, 75, 24));
        ANNULER4->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));"));
        CANDIDATS = new QPushButton(centralWidget);
        CANDIDATS->setObjectName("CANDIDATS");
        CANDIDATS->setGeometry(QRect(0, 30, 161, 61));
        EXCEL = new QPushButton(centralWidget);
        EXCEL->setObjectName("EXCEL");
        EXCEL->setGeometry(QRect(580, 540, 75, 24));
        EXCEL->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));"));
        TABLEC = new QTableWidget(centralWidget);
        if (TABLEC->columnCount() < 10)
            TABLEC->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        TABLEC->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        TABLEC->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        TABLEC->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        TABLEC->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        TABLEC->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        TABLEC->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        TABLEC->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        TABLEC->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        TABLEC->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        TABLEC->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        TABLEC->setObjectName("TABLEC");
        TABLEC->setGeometry(QRect(490, 310, 1001, 221));
        TABLEC->setStyleSheet(QString::fromUtf8(""));
        EXAMEN = new QPushButton(centralWidget);
        EXAMEN->setObjectName("EXAMEN");
        EXAMEN->setGeometry(QRect(0, 120, 161, 61));
        TRIER = new QPushButton(centralWidget);
        TRIER->setObjectName("TRIER");
        TRIER->setGeometry(QRect(1130, 260, 75, 24));
        TRIER->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));"));
        TRIERC = new QComboBox(centralWidget);
        TRIERC->addItem(QString());
        TRIERC->addItem(QString());
        TRIERC->addItem(QString());
        TRIERC->addItem(QString());
        TRIERC->addItem(QString());
        TRIERC->addItem(QString());
        TRIERC->setObjectName("TRIERC");
        TRIERC->setGeometry(QRect(1000, 260, 121, 22));
        RESSOURCES = new QPushButton(centralWidget);
        RESSOURCES->setObjectName("RESSOURCES");
        RESSOURCES->setGeometry(QRect(0, 450, 161, 61));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(-20, 0, 211, 571));
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(200, 0, 281, 571));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        lineEdit1_ID = new QLineEdit(frame_2);
        lineEdit1_ID->setObjectName("lineEdit1_ID");
        lineEdit1_ID->setGeometry(QRect(110, 50, 113, 28));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 50, 63, 20));
        label_5 = new QLabel(frame_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 170, 71, 20));
        AJOUTER1 = new QPushButton(frame_2);
        AJOUTER1->setObjectName("AJOUTER1");
        AJOUTER1->setGeometry(QRect(40, 510, 83, 29));
        AJOUTER1->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));"));
        label_12 = new QLabel(frame_2);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(10, 370, 71, 20));
        L2 = new QLineEdit(frame_2);
        L2->setObjectName("L2");
        L2->setGeometry(QRect(110, 90, 113, 28));
        label_13 = new QLabel(frame_2);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(20, 220, 63, 20));
        label_17 = new QLabel(frame_2);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(20, 420, 63, 20));
        L6 = new QLineEdit(frame_2);
        L6->setObjectName("L6");
        L6->setGeometry(QRect(110, 270, 113, 28));
        L8 = new QLineEdit(frame_2);
        L8->setObjectName("L8");
        L8->setGeometry(QRect(110, 410, 113, 28));
        L9 = new QLineEdit(frame_2);
        L9->setObjectName("L9");
        L9->setGeometry(QRect(110, 460, 113, 28));
        L3 = new QLineEdit(frame_2);
        L3->setObjectName("L3");
        L3->setGeometry(QRect(110, 130, 113, 28));
        D1 = new QDateEdit(frame_2);
        D1->setObjectName("D1");
        D1->setGeometry(QRect(110, 320, 111, 29));
        ANNULER1 = new QPushButton(frame_2);
        ANNULER1->setObjectName("ANNULER1");
        ANNULER1->setGeometry(QRect(170, 510, 83, 29));
        ANNULER1->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));"));
        L5 = new QLineEdit(frame_2);
        L5->setObjectName("L5");
        L5->setGeometry(QRect(110, 220, 113, 28));
        L4 = new QLineEdit(frame_2);
        L4->setObjectName("L4");
        L4->setGeometry(QRect(110, 170, 113, 28));
        label_11 = new QLabel(frame_2);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 460, 81, 20));
        label_16 = new QLabel(frame_2);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(20, 270, 63, 20));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 130, 81, 20));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 90, 63, 20));
        label_6 = new QLabel(frame_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 320, 91, 20));
        L7 = new QLineEdit(frame_2);
        L7->setObjectName("L7");
        L7->setGeometry(QRect(110, 360, 113, 28));
        verticalScrollBar_2 = new QScrollBar(centralWidget);
        verticalScrollBar_2->setObjectName("verticalScrollBar_2");
        verticalScrollBar_2->setGeometry(QRect(1810, 60, 16, 791));
        verticalScrollBar_2->setOrientation(Qt::Orientation::Vertical);
        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(490, 0, 311, 231));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        INSERER1 = new QPushButton(frame_3);
        INSERER1->setObjectName("INSERER1");
        INSERER1->setGeometry(QRect(40, 190, 91, 31));
        INSERER1->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));"));
        ANNULER3 = new QPushButton(frame_3);
        ANNULER3->setObjectName("ANNULER3");
        ANNULER3->setGeometry(QRect(170, 190, 91, 31));
        ANNULER3->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));"));
        I = new QWidget(frame_3);
        I->setObjectName("I");
        I->setGeometry(QRect(60, 39, 191, 131));
        I->setStyleSheet(QString::fromUtf8("background-color: rgb(136, 136, 136);"));
        label_7 = new QLabel(I);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 50, 131, 16));
        PDF = new QPushButton(centralWidget);
        PDF->setObjectName("PDF");
        PDF->setGeometry(QRect(490, 540, 75, 24));
        PDF->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));"));
        ETABLISSEMENT = new QPushButton(centralWidget);
        ETABLISSEMENT->setObjectName("ETABLISSEMENT");
        ETABLISSEMENT->setGeometry(QRect(0, 290, 161, 61));
        CENTRE_EXAMEN = new QPushButton(centralWidget);
        CENTRE_EXAMEN->setObjectName("CENTRE_EXAMEN");
        CENTRE_EXAMEN->setGeometry(QRect(0, 370, 161, 61));
        CHERCHER1 = new QPushButton(centralWidget);
        CHERCHER1->setObjectName("CHERCHER1");
        CHERCHER1->setGeometry(QRect(820, 260, 71, 29));
        CHERCHER1->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));\n"
""));
        ANNULER2 = new QPushButton(centralWidget);
        ANNULER2->setObjectName("ANNULER2");
        ANNULER2->setGeometry(QRect(900, 260, 71, 29));
        ANNULER2->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));"));
        CHERCHERC = new QLineEdit(centralWidget);
        CHERCHERC->setObjectName("CHERCHERC");
        CHERCHERC->setGeometry(QRect(500, 260, 311, 22));
        ENSEIGNANTS = new QPushButton(centralWidget);
        ENSEIGNANTS->setObjectName("ENSEIGNANTS");
        ENSEIGNANTS->setGeometry(QRect(0, 200, 161, 71));
        MainWindow->setCentralWidget(centralWidget);
        frame_4->raise();
        TABLEC->raise();
        frame_3->raise();
        frame_2->raise();
        textBrowser->raise();
        CANDIDATS->raise();
        EXCEL->raise();
        EXAMEN->raise();
        TRIER->raise();
        TRIERC->raise();
        RESSOURCES->raise();
        verticalScrollBar_2->raise();
        PDF->raise();
        ETABLISSEMENT->raise();
        CENTRE_EXAMEN->raise();
        CHERCHER1->raise();
        ANNULER2->raise();
        CHERCHERC->raise();
        ENSEIGNANTS->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1524, 22));
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
        label_8->setText(QCoreApplication::translate("MainWindow", "INSERER VOTRE CARTE D'IDENTITER", nullptr));
        INSERER2->setText(QCoreApplication::translate("MainWindow", "INSERER", nullptr));
        ANNULER4->setText(QCoreApplication::translate("MainWindow", "ANNULER", nullptr));
        CANDIDATS->setText(QCoreApplication::translate("MainWindow", "CANDIDATS", nullptr));
        EXCEL->setText(QCoreApplication::translate("MainWindow", "EXCEL", nullptr));
        QTableWidgetItem *___qtablewidgetitem = TABLEC->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "ID_C", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = TABLEC->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "CIN_C", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = TABLEC->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Nom_C", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = TABLEC->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Prenom_C", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = TABLEC->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Nouvelle colonne", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = TABLEC->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Email_C", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = TABLEC->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Date_Naiss_C", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = TABLEC->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "Nouvelle colonne", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = TABLEC->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "Adresse_C", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = TABLEC->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "ID_Etabliss", nullptr));
        EXAMEN->setText(QCoreApplication::translate("MainWindow", "EXAMENS", nullptr));
        TRIER->setText(QCoreApplication::translate("MainWindow", "TRIER", nullptr));
        TRIERC->setItemText(0, QCoreApplication::translate("MainWindow", "ID", nullptr));
        TRIERC->setItemText(1, QCoreApplication::translate("MainWindow", "CIN", nullptr));
        TRIERC->setItemText(2, QCoreApplication::translate("MainWindow", "NOM", nullptr));
        TRIERC->setItemText(3, QCoreApplication::translate("MainWindow", "PRENOM", nullptr));
        TRIERC->setItemText(4, QCoreApplication::translate("MainWindow", "DATE_DE_NAISSANCE", nullptr));
        TRIERC->setItemText(5, QString());

        RESSOURCES->setText(QCoreApplication::translate("MainWindow", "RESSOURCES", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "ID_C", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Prenom_C", nullptr));
        AJOUTER1->setText(QCoreApplication::translate("MainWindow", "AJOUTER", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Adresse_C", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Niveau_C", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Tel_C", nullptr));
        ANNULER1->setText(QCoreApplication::translate("MainWindow", "ANNULER", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "ID_Etabliss", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Email_C", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Nom_C", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "CIN_C", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Date_Naiss_C", nullptr));
        INSERER1->setText(QCoreApplication::translate("MainWindow", "INSERER", nullptr));
        ANNULER3->setText(QCoreApplication::translate("MainWindow", "ANNULER", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "INSERER VOTRE IMAGE", nullptr));
        PDF->setText(QCoreApplication::translate("MainWindow", "PDF", nullptr));
        ETABLISSEMENT->setText(QCoreApplication::translate("MainWindow", "ETABLISSEMENTS", nullptr));
        CENTRE_EXAMEN->setText(QCoreApplication::translate("MainWindow", "CENTRE D'EXAMENS", nullptr));
        CHERCHER1->setText(QCoreApplication::translate("MainWindow", "CHERCHER", nullptr));
        ANNULER2->setText(QCoreApplication::translate("MainWindow", "ANNULER", nullptr));
        ENSEIGNANTS->setText(QCoreApplication::translate("MainWindow", "ENSEIGNANTS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
