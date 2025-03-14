#include "mainwindow.h"
#include <QMessageBox>
#include <QIntValidator> // Use QIntValidator instead of QRegExpValidator

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) {
    // Set window title
    setWindowTitle("mainwindow.ui");

    // Create the central widget and main layout
    QWidget *centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);
    QHBoxLayout *mainLayout = new QHBoxLayout(centralWidget);

    // Left side: Menu and form
    QVBoxLayout *leftLayout = new QVBoxLayout();

    // Menu placeholder
    QLabel *menuLabel = new QLabel("Menu", this);
    leftLayout->addWidget(menuLabel);

    // Form for adding an exam
    QVBoxLayout *formLayout = new QVBoxLayout();
    formLayout->addWidget(new QLabel("ajouter un examen"));

    // ID with numeric validator
    formLayout->addWidget(new QLabel("id :"));
    id_examen = new QLineEdit(this);
    id_examen->setValidator(new QIntValidator(0, 9999, this)); // Restrict to 0-9999
    formLayout->addWidget(id_examen);

    // Nom d'examen
    formLayout->addWidget(new QLabel("nom d'examen :"));
    nom_ex = new QLineEdit(this);
    formLayout->addWidget(nom_ex);

    // Niveau
    formLayout->addWidget(new QLabel("niveau :"));
    niveau_ex = new QLineEdit(this);
    formLayout->addWidget(niveau_ex);

    // Session
    formLayout->addWidget(new QLabel("session :"));
    session = new QLineEdit(this);
    formLayout->addWidget(session);

    // Date
    formLayout->addWidget(new QLabel("date :"));
    date_examen = new QDateEdit(this);
    date_examen->setDate(QDate(2000, 1, 1)); // Default date
    formLayout->addWidget(date_examen);

    // Nombre de copie with numeric validator
    formLayout->addWidget(new QLabel("nombre de copie :"));
    nombre = new QLineEdit(this);
    nombre->setValidator(new QIntValidator(0, 9999, this)); // Restrict to 0-9999
    formLayout->addWidget(nombre);

    // Ajouter button
    pushButton = new QPushButton("ajouter", this);
    formLayout->addWidget(pushButton);
    connect(pushButton, &QPushButton::clicked, this, &MainWindow::onAjouterClicked);

    leftLayout->addLayout(formLayout);

    // Form for deleting an exam
    QVBoxLayout *deleteLayout = new QVBoxLayout();
    deleteLayout->addWidget(new QLabel("supprimer un examen"));
    deleteLayout->addWidget(new QLabel("ID examen :"));
    id_2 = new QLineEdit(this);
    deleteLayout->addWidget(id_2);

    // Supprimer button
    pushButton_2 = new QPushButton("supprimer", this);
    deleteLayout->addWidget(pushButton_2);
    connect(pushButton_2, &QPushButton::clicked, this, &MainWindow::onSupprimerClicked);

    leftLayout->addLayout(deleteLayout);
    mainLayout->addLayout(leftLayout);

    // Right side: Table
    QVBoxLayout *rightLayout = new QVBoxLayout();
    table = new QTableWidget(this);
    table->setColumnCount(6);
    table->setHorizontalHeaderLabels({"id_examen", "nom d'examen", "niveau", "session", "date", "nombre de copie"});
    rightLayout->addWidget(table);
    mainLayout->addLayout(rightLayout);

    // Set initial size
    resize(800, 600);

    // Add some sample data
    table->setRowCount(3);
    table->setItem(0, 0, new QTableWidgetItem("1236"));
    table->setItem(0, 1, new QTableWidgetItem("math"));
    table->setItem(0, 2, new QTableWidgetItem("6eme"));
    table->setItem(0, 3, new QTableWidgetItem("principale"));
    table->setItem(0, 4, new QTableWidgetItem("12/06/2025"));
    table->setItem(0, 5, new QTableWidgetItem("700"));

    table->setItem(1, 0, new QTableWidgetItem("1237"));
    table->setItem(1, 1, new QTableWidgetItem("science"));
    table->setItem(1, 2, new QTableWidgetItem("6eme"));
    table->setItem(1, 3, new QTableWidgetItem("principale"));
    table->setItem(1, 4, new QTableWidgetItem("13/06/2025"));
    table->setItem(1, 5, new QTableWidgetItem("700"));

    table->setItem(2, 0, new QTableWidgetItem("1238"));
    table->setItem(2, 1, new QTableWidgetItem("info"));
    table->setItem(2, 2, new QTableWidgetItem("6eme"));
    table->setItem(2, 3, new QTableWidgetItem("principale"));
    table->setItem(2, 4, new QTableWidgetItem("14/06/2025"));
    table->setItem(2, 5, new QTableWidgetItem("700"));
}

MainWindow::~MainWindow() {}

void MainWindow::onAjouterClicked() {
    // Get data from input fields
    QString id = id_examen->text();
    QString nom = nom_ex->text();
    QString niveau = niveau_ex->text();
    QString sess = session->text();
    QString date = date_examen->date().toString("dd/MM/yyyy");
    QString nb = nombre->text();

    // Validate input
    if (id.isEmpty() || nom.isEmpty() || niveau.isEmpty() || sess.isEmpty() || nb.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez remplir tous les champs.");
        return;
    }

    // Validate that id_examen and nombre_de_copie are numeric (already enforced by QIntValidator)
    bool idOk, nbOk;
    id.toInt(&idOk);  // Double-check conversion
    nb.toInt(&nbOk);  // Double-check conversion

    if (!idOk) {
        QMessageBox::warning(this, "Erreur", "L'ID doit contenir uniquement des chiffres.");
        return;
    }
    if (!nbOk) {
        QMessageBox::warning(this, "Erreur", "Le nombre de copies doit contenir uniquement des chiffres.");
        return;
    }

    // Check if ID already exists
    for (int row = 0; row < table->rowCount(); ++row) {
        if (table->item(row, 0)->text() == id) {
            QMessageBox::warning(this, "Erreur", "Cet ID existe déjà.");
            return;
        }
    }

    // Add new row to the table
    int row = table->rowCount();
    table->insertRow(row);
    table->setItem(row, 0, new QTableWidgetItem(id));
    table->setItem(row, 1, new QTableWidgetItem(nom));
    table->setItem(row, 2, new QTableWidgetItem(niveau));
    table->setItem(row, 3, new QTableWidgetItem(sess));
    table->setItem(row, 4, new QTableWidgetItem(date));
    table->setItem(row, 5, new QTableWidgetItem(nb));

    // Clear input fields
    id_examen->clear();
    nom_ex->clear();
    niveau_ex->clear();
    session->clear();
    date_examen->setDate(QDate(2000, 1, 1));
    nombre->clear();
}

void MainWindow::onSupprimerClicked() {
    QString id = id_2->text();

    if (id.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez entrer un ID à supprimer.");
        return;
    }

    // Find and remove the row with the matching ID
    for (int row = 0; row < table->rowCount(); ++row) {
        if (table->item(row, 0)->text() == id) {
            table->removeRow(row);
            id_2->clear();
            return;
        }
    }

    QMessageBox::warning(this, "Erreur", "ID non trouvé.");
}
