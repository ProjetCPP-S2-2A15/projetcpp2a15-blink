#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlQuery>     // For executing SQL queries
#include <QSqlError>     // For handling database errors
#include <QDebug>        // For debugging output
#include <QMessageBox>
#include <QRegularExpression>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->ajout, &QPushButton::clicked, this, &::MainWindow::on_addbutton_clicked);
    connect(ui->supp, &QPushButton::clicked, this, &::MainWindow::on_pushButtonsupprimer_clicked);
    connect(ui->modifier, &QPushButton::clicked, this, &::MainWindow::on_updateButton_clicked);
    connect(ui->pushButton_12, &QPushButton::clicked, this, &::MainWindow::on_refresh_clicked);



    // Optionally, refresh the table view to show the new data
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_addbutton_clicked() {
    // Retrieve values from input fields
    QString nom = ui->nom->text(); // Assuming "nom" is the QLineEdit for the name
    QString prenom = ui->prenom->text(); // Assuming "prenom" is the QLineEdit for the first name
    QString matiere = ui->status->text(); // Assuming "matiere" is the QLineEdit for the subject
    QString email = ui->email->text(); // Assuming "email" is the QLineEdit for the email
    QString telephone = ui->tel->text(); // Assuming "telephone" is the QLineEdit for the phone
    QString role = ui->role->text(); // Assuming "role" is a QComboBox for selecting the role

    // Check if any required field is empty
    if (nom.isEmpty() || prenom.isEmpty() || matiere.isEmpty() || email.isEmpty() || telephone.isEmpty() || role.isEmpty()) {
        QMessageBox::warning(nullptr, QObject::tr("Input Error"),
                             QObject::tr("Please fill in all the fields.\nClick Cancel to exit."),
                             QMessageBox::Cancel);
        return;  // Exit the function if any field is empty
    }

    // Validate phone number (only digits allowed, 10 digits required)
    QRegularExpression phoneRegex("^[0-9]{10}$");
    if (!phoneRegex.match(telephone).hasMatch()) {
        QMessageBox::warning(nullptr, QObject::tr("Invalid Input"),
                             QObject::tr("Please enter a valid phone number with 10 digits.\nClick Cancel to exit."),
                             QMessageBox::Cancel);
        return;  // Exit if phone number is invalid
    }

    // Validate email format
    QRegularExpression emailRegex("^[a-zA-Z0-9.%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$");
    if (!emailRegex.match(email).hasMatch()) {
        QMessageBox::warning(nullptr, QObject::tr("Invalid Input"),
                             QObject::tr("Please enter a valid email address.\nClick Cancel to exit."),
                             QMessageBox::Cancel);
        return;  // Exit if email is invalid
    }

    // Create an Enseignant instance with the updated values
    Enseignant e(NULL,nom, prenom, matiere, email, telephone, role);

    // Call addEnseignant() to insert the teacher into the database
    bool success = e.addEnseignant();

    // If insertion is successful
    if (success) {
        // Refresh the table view to show the updated list of teachers
        ui->tableView->setModel(e.displayEnseignants());
        QMessageBox::information(nullptr, QObject::tr("Success"),
                                 QObject::tr("Teacher added successfully.\nClick OK to continue."),
                                 QMessageBox::Ok);
    } else {
        // If insertion fails
        QMessageBox::critical(nullptr, QObject::tr("Error"),
                              QObject::tr("Failed to add teacher.\nClick OK to continue."),
                              QMessageBox::Ok);
    }
}

void MainWindow::on_pushButtonsupprimer_clicked() {
    // Retrieve the Enseignant ID from the input field
    QString enseignantIdText = ui->lineEdit_15->text();

    // Check if the input is empty
    if (enseignantIdText.isEmpty()) {
        QMessageBox::warning(nullptr, QObject::tr("Input Error"),
                             QObject::tr("Please enter a valid Enseignant ID.\nClick Cancel to exit."),
                             QMessageBox::Cancel);
        return;  // Exit the function if input is empty
    }

    int enseignantId = enseignantIdText.toInt();

    // Create an Enseignant instance (only the ID is needed for deletion)
    Enseignant e;

    // Call deleteEnseignant() to remove the Enseignant
    bool test = e.deleteEnseignant(enseignantId);

    if (test) {
        // Refresh the table view to reflect changes
        ui->tableView->setModel(e.displayEnseignants());
        QMessageBox::information(nullptr, QObject::tr("Ok"),
                                 QObject::tr("Suppression effectuée\n"
                                             "Click Cancel to exit."),
                                 QMessageBox::Cancel);
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Not Ok"),
                              QObject::tr("Suppression non effectuée.\n"
                                          "Click Cancel to exit."),
                              QMessageBox::Cancel);
    }
}

#include <QRegularExpression>

void MainWindow::on_updateButton_clicked() {
    // Retrieve values from input fields
    QString enseignantIdText = ui->mid->text(); // Assuming "id" is the QLineEdit for the teacher's ID
    QString nom = ui->mname->text(); // Assuming "nom" is the QLineEdit for the last name
    QString prenom = ui->mpre->text(); // Assuming "prenom" is the QLineEdit for the first name
    QString matiere = ui->mstatus->text(); // Assuming "matiere" is the QLineEdit for the subject
    QString email = ui->memail->text(); // Assuming "email" is the QLineEdit for the email
    QString telephone = ui->mtel->text(); // Assuming "telephone" is the QLineEdit for the phone number
    QString role = ui->mrole->text(); // Assuming "role" is a QComboBox for selecting the role

    // Check if the Enseignant ID field is empty
    if (enseignantIdText.isEmpty()) {
        QMessageBox::warning(nullptr, QObject::tr("Input Error"),
                             QObject::tr("Please enter a valid Enseignant ID.\nClick Cancel to exit."),
                             QMessageBox::Cancel);
        return;  // Exit the function if input is empty
    }

    int enseignantId = enseignantIdText.toInt();

    // Check if the other fields are empty
    if (nom.isEmpty() || prenom.isEmpty() || matiere.isEmpty() || email.isEmpty() || telephone.isEmpty() || role.isEmpty()) {
        QMessageBox::warning(nullptr, QObject::tr("Input Error"),
                             QObject::tr("Please fill in all the fields.\nClick Cancel to exit."),
                             QMessageBox::Cancel);
        return;  // Exit the function if any field is empty
    }

    // Validate phone number (only digits allowed, 10 digits required)
    QRegularExpression phoneRegex("^[0-9]{10}$");
    if (!phoneRegex.match(telephone).hasMatch()) {
        QMessageBox::warning(nullptr, QObject::tr("Invalid Input"),
                             QObject::tr("Please enter a valid phone number with 10 digits.\nClick Cancel to exit."),
                             QMessageBox::Cancel);
        return;  // Exit if phone number is invalid
    }

    // Validate email format
    QRegularExpression emailRegex("^[a-zA-Z0-9.%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$");
    if (!emailRegex.match(email).hasMatch()) {
        QMessageBox::warning(nullptr, QObject::tr("Invalid Input"),
                             QObject::tr("Please enter a valid email address.\nClick Cancel to exit."),
                             QMessageBox::Cancel);
        return;  // Exit if email is invalid
    }

    // Create an Enseignant instance with the updated values
    Enseignant e(enseignantId, nom, prenom, matiere, email, telephone, role);

    // Call updateEnseignant() to modify the Enseignant record in the database
    bool success = e.updateEnseignant();

    // If update is successful
    if (success) {
        // Refresh the table view to show the updated teacher list
        ui->tableView->setModel(e.displayEnseignants());
        QMessageBox::information(nullptr, QObject::tr("Success"),
                                 QObject::tr("Enseignant updated successfully.\nClick OK to continue."),
                                 QMessageBox::Ok);
    } else {
        // If update fails
        QMessageBox::critical(nullptr, QObject::tr("Error"),
                              QObject::tr("Failed to update Enseignant.\nClick OK to continue."),
                              QMessageBox::Ok);
    }
}


void MainWindow::on_refresh_clicked(){
    ui->tableView->setModel(e.displayEnseignants());
}
