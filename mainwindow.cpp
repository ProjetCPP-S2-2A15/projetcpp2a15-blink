#include "mainwindow.h"
#include "etablissement.h"
#include "exam.h"
#include "arduino.h"
#include "ui_mainwindow.h"

#include "smtpclient.h"
#include <QQuickItem>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QRegularExpression>
#include <QSqlTableModel>

#include <QPrinter>
#include <QPainter>
#include <QTextDocument>
#include <QFileDialog>

#include <QPdfWriter>
#include <QTableView>
#include <QDialog>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QThread>
#include <QTreeWidgetItem>
#include "centre.h"

#include <QtCharts/QChartView>
#include <QtCharts/QChart>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    {
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

    ui->tableView->setModel(Etmp.afficher());

    // Load QML map
    ui->quickWidget->setSource(QUrl(QStringLiteral("qrc:/map.qml")));
    ui->quickWidget->show();

    // Activer le tri des colonnes
    ui->tableView->setSortingEnabled(true);

    // Vous pouvez également ajouter un tri initial, par exemple par "ID"
    ui->tableView->sortByColumn(0, Qt::AscendingOrder);

    // Connect to QML map object
    auto obj = ui->quickWidget->rootObject();
    connect(this, SIGNAL(setCenter(QVariant,QVariant)), obj, SLOT(setCenter(QVariant, QVariant)));

    ui->lineEdit_Recherche->setStyleSheet(
        "QLineEdit {"
        "    padding-left: 20px;"  // Ajoute du padding à gauche
        "    border: 2px solid gray;"  // Bordure
        "    border-radius: 5px;"  // Coins arrondis (optionnel)
        "    font-size: 14px;"  // Taille du texte (optionnel)
        "}"
        );

    // Set default map center
    //emit setCenter(36.81171298292549, 10.16309292111914);

    afficherStatistiques();

    // Charger initialement les données triées par ID
    QSqlTableModel* model = new QSqlTableModel();
    model->setTable("etablissement");
    model->setSort(0, Qt::AscendingOrder);
    model->select();
    ui->tableView->setModel(model);
    ui->tableView->setSortingEnabled(true);

    // Remplir la combo des critères
    ui->combo_tri->addItems({"ID", "Nom"});

    connect(ui->btn_tri, &QPushButton::clicked, this, &MainWindow::on_btn_tri_clicked);
    }
    updateTable();

    ui->tableView_2->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView_2->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView_2->setSortingEnabled(true);
    ui->tableView_2->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->niveauComboBox->addItems({"4eme", "6eme", "9eme"});
    ui->niveauComboBox1->addItems({"4eme", "6eme", "9eme"});
    ui->sessionComboBox->addItems({"Principale", "Rattrapage"});
    ui->sessionComboBox1->addItems({"Principale", "Rattrapage"});
    ui->comboBox_sort->addItems({"ID Asc", "ID Desc", "Nom Asc", "Nom Desc", "Date Asc", "Date Desc"});

    connect(ui->tableView_2, &QTableView::clicked, this, &MainWindow::on_tableView_2_clicked);
    connect(ui->ajouterButton, &QPushButton::clicked, this, &MainWindow::on_ajouterButton_clicked);
    connect(ui->ajouterButton1, &QPushButton::clicked, this, &MainWindow::on_ajouterButton1_clicked);
    connect(ui->supprimerButton, &QPushButton::clicked, this, &MainWindow::on_supprimerButton_clicked);
    connect(ui->chargerButton, &QPushButton::clicked, this, &MainWindow::on_chargerButton_clicked);
    connect(ui->rechercherButton, &QPushButton::clicked, this, &MainWindow::on_rechercherButton_clicked);
    connect(ui->comboBox_sort, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &MainWindow::on_comboBoxTri_currentIndexChanged);
    connect(ui->genererButton, &QPushButton::clicked, this, &MainWindow::on_genererButton_clicked);
    connect(ui->statshow, &QPushButton::clicked, this, &MainWindow::on_statshow_clicked);

    afficherCentres();
    afficherStatistiques();

    // Connexion du bouton "Ajouter" au slot
    connect(ui->btnAjouter, &QPushButton::clicked, this, &MainWindow::ajouterCentre);
    // Connexion de l'evenement clicked de QTreeWidget au slot
    connect(ui->treeWidget_Centre, &QTreeWidget::itemClicked, this, &MainWindow::on_treeWidget_Centre_itemClicked);

    connect(ui->btnModifier, &QPushButton::clicked, this, &MainWindow::modifierCentre);
    connect(ui->btnSupprimer, &QPushButton::clicked, this, &MainWindow::supprimerCentre);

    connect(ui->btnExporterPDF, &QPushButton::clicked, this, &MainWindow::exporterPDF);
    connect(ui->lineEdit_Recherche, &QLineEdit::textChanged, this, &MainWindow::filtrerCentres);

    connect(ui->btnContratDeVerification, &QPushButton::clicked, this, &MainWindow::ContratDeVerification);
    //button ENvoi Mail
    connect(ui->btnEnvoiMail, &QPushButton::clicked, this, &MainWindow::envoyerEmail);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loginButton_clicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    if (username == "admin" && password == "admin") {
        ui->stackedWidget->setCurrentIndex(1);  // Go to Page 1
    } else {
        QMessageBox::warning(this, "Login Failed", "Invalid username or password");
    }
    ui->usernameLineEdit->clear();
    ui->passwordLineEdit->clear();
}



//menubutton
void MainWindow::on_menubutton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_menubutton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_menubutton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_menubutton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_menubutton_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_menubutton_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_menubutton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

//etablissementbutton

void MainWindow::on_etablissement_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_etablissement2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_etablissementEXAM_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_etablissement2_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_etablissement2_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_etablissement2_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_etablissement2_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

//exambutton
void MainWindow::on_exam2_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_exam_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_examenEXAM_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_exam2_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_exam2_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_exam2_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_exam2_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

//ressourcebutton
void MainWindow::on_ressource_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_ressource2_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_ressource2_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_ressourceEXAM_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_ressource2_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_ressource2_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_ressource2_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


//centre d'exam button
void MainWindow::on_centreExam2_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_centreExam_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_centredEXAM_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_centreExam2_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_centreExam2_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_centreExam2_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_centreExam2_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


//candidat button
void MainWindow::on_candidat_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::on_candidat2_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::on_candidatEXAM_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::on_candidat2_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::on_candidat2_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::on_candidat2_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::on_candidat2_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

//enseignantbutton
void MainWindow::on_enseignant2_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_enseignant_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_enseignantEXAM_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_enseignant2_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_enseignant2_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_enseignant2_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_enseignant2_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

//logoutbutton
void MainWindow::on_logoutbutton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_logoutbutton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_logoutbutton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_logoutbutton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_logoutbutton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_logoutbutton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_logoutbutton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}



void MainWindow::on_b_valider_clicked()
{
    int id_etab = ui->lineEdit_ID->text().toInt();
    QString nom = ui->lineEdit_nom->text();
    QString adresse = ui->lineEdit_add->text();
    int telephone = ui->lineEdit_tel->text().toInt();
    QString email = ui->lineEdit_e->text();
    QString type = ui->lineEdit_T->text();

    // Validate inputs
    static const QRegularExpression nameRegex("^[A-Za-zÀ-ÿ ]+$");
    static const QRegularExpression addressRegex("^[A-Za-z0-9À-ÿ ,.-]+$");
    static const QRegularExpression emailRegex("^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}$");


    if (!nameRegex.match(nom).hasMatch()) {
        QMessageBox::warning(this, "Nom invalide", "Le nom ne doit contenir que des lettres et des espaces !");
        return;
    }

    if (!addressRegex.match(adresse).hasMatch()) {
        QMessageBox::warning(this, "Adresse invalide", "L'adresse contient des caractères non autorisés !");
        return;
    }

    if (!QRegularExpression("^\\d{8}$").match(ui->lineEdit_tel->text()).hasMatch()) {
        QMessageBox::warning(this, "Téléphone invalide", "Le numéro de téléphone doit comporter exactement 8 chiffres !");
        return;
    }

    if (!emailRegex.match(email).hasMatch()) {
        QMessageBox::warning(this, "Email invalide", "Veuillez entrer une adresse email valide !");
        return;
    }

    etablissement E(id_etab, nom, adresse, telephone, email, type);
    bool test = E.ajouter();

    if (test) {
        QMessageBox::information(this, "Succès", "Établissement ajouté avec succès !");
        //emit setCenter(36.81171298292549, 10.16309292111914);
        ui->tableView->setModel(Etmp.afficher());

        // Réinitialisation des champs
        ui->lineEdit_ID->clear();
        ui->lineEdit_nom->clear();
        ui->lineEdit_add->clear();
        ui->lineEdit_tel->clear();
        ui->lineEdit_e->clear();
        ui->lineEdit_T->clear();
    } else {
        QMessageBox::critical(this, "Erreur", "L'ajout de l'établissement a échoué !");
        qDebug() << "Erreur SQL à l'ajout.";
    }
}


void MainWindow::on_b_supprimer_clicked()
{
    int id_etab = ui->lineEdit_IDS->text().toInt();

    if (id_etab <= 0) {
        QMessageBox::warning(this, "ID invalide", "Veuillez entrer un ID valide !");
        return;
    }

    QMessageBox::StandardButton reply = QMessageBox::question(this, "Confirmation",
                                                              "Voulez-vous vraiment supprimer ce centre ?",
                                                              QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        bool test = Etmp.supprimer(id_etab);

        if (test) {
            ui->tableView->setModel(Etmp.afficher());
            QMessageBox::information(this, "Succès", "Suppression effectuée avec succès !");
            ui->lineEdit_IDS->clear();
        } else {
            QMessageBox::critical(this, "Erreur", "La suppression a échoué !");
            qDebug() << "Erreur SQL à la suppression.";
        }
    }
}


void MainWindow::on_b_modifier_clicked()
{
    int id_etab = ui->lineEdit_ID_2->text().toInt();
    QString nom = ui->lineEdit_nom_2->text();
    QString adresse = ui->lineEdit_add_2->text();
    int telephone = ui->lineEdit_tel_2->text().toInt();
    QString email = ui->lineEdit_e_2->text();
    QString type = ui->lineEdit_T_2->text();

    // Validation
    static const QRegularExpression nameRegex("^[A-Za-zÀ-ÿ ]+$");
    static const QRegularExpression addressRegex("^[A-Za-z0-9À-ÿ ,.-]+$");
    static const QRegularExpression emailRegex("^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}$");

    if (id_etab <= 0) {
        QMessageBox::warning(this, "ID invalide", "L'ID doit être un entier positif !");
        return;
    }

    if (!nameRegex.match(nom).hasMatch()) {
        QMessageBox::warning(this, "Nom invalide", "Le nom ne doit contenir que des lettres et des espaces !");
        return;
    }

    if (!addressRegex.match(adresse).hasMatch()) {
        QMessageBox::warning(this, "Adresse invalide", "L'adresse contient des caractères non autorisés !");
        return;
    }

    if (!QRegularExpression("^\\d{8}$").match(ui->lineEdit_tel_2->text()).hasMatch()) {
        QMessageBox::warning(this, "Téléphone invalide", "Le numéro de téléphone doit comporter exactement 8 chiffres !");
        return;
    }

    if (!emailRegex.match(email).hasMatch()) {
        QMessageBox::warning(this, "Email invalide", "Veuillez entrer une adresse email valide !");
        return;
    }

    etablissement E(id_etab, nom, adresse, telephone, email, type);
    bool test = E.modifier();

    if (test) {
        ui->tableView->setModel(Etmp.afficher());
        QMessageBox::information(this, "Succès", "Établissement modifié avec succès !");

        // Réinitialisation des champs
        ui->lineEdit_ID_2->clear();
        ui->lineEdit_nom_2->clear();
        ui->lineEdit_add_2->clear();
        ui->lineEdit_tel_2->clear();
        ui->lineEdit_e_2->clear();
        ui->lineEdit_T_2->clear();

    } else {
        QMessageBox::critical(this, "Erreur", "La modification a échoué !");
        qDebug() << "Erreur SQL à la modification.";
    }
}


void MainWindow::on_b_rechercher_clicked()
{
    // Récupère la valeur saisie dans le QLineEdit
    QString searchTerm = ui->lineEdit_recherche->text();

    if (searchTerm.isEmpty()) {
        QMessageBox::warning(this, "Recherche vide", "Veuillez saisir un terme de recherche !");
        return;
    }

    // Crée une requête SQL avec le terme de recherche
    QSqlQueryModel *model = new QSqlQueryModel();
    QString queryStr = QString("SELECT * FROM etablissement WHERE nom LIKE '%%1%' OR adresse LIKE '%%1%' OR email LIKE '%%1%' OR type LIKE '%%1%'").arg(searchTerm);

    model->setQuery(queryStr);

    // Si une erreur se produit lors de l'exécution de la requête
    if (model->lastError().isValid()) {
        QMessageBox::critical(this, "Erreur", "Une erreur est survenue lors de la recherche.");
        return;
    }

    // Mise à jour du modèle de la table avec les résultats
    ui->tableView_rech->setModel(model);
    ui->tableView_rech->resizeColumnsToContents();
}


void MainWindow::on_b_refresh_clicked()
{
    // Refresh the model data
    ui->tableView->setModel(Etmp.afficher());  // Assuming `Etmp` is the object holding your model
}


void MainWindow::on_btn_tri_clicked()
{
    QString critere = ui->combo_tri->currentText();
    QSqlTableModel* model = new QSqlTableModel();
    model->setTable("etablissement");

    // Tri selon le critère
    if (critere == "ID") {
        model->setSort(0, Qt::AscendingOrder);
    } else if (critere == "Nom") {
        model->setSort(1, Qt::AscendingOrder);
    }

    model->select(); // Exécute la requête avec tri
    ui->tableView->setModel(model);
    ui->tableView->setSortingEnabled(true);
}


void MainWindow::on_btn_pdf_clicked()
{
    QSqlQuery query("SELECT * FROM etablissement");

    QString html = "<html><head><meta charset='utf-8'></head><body>";
    html += "<h2 align='center'>Liste des Enseignants</h2><table border='1' cellspacing='0' cellpadding='4'>";
    html += "<tr>"
            "<th>ID</th><th>Nom</th><th>Adresse</th><th>Téléphone</th>"
            "<th>Email</th><th>Type</th></tr>";

    while (query.next()) {
        html += "<tr>";
        html += "<td>" + query.value(0).toString() + "</td>";
        html += "<td>" + query.value(1).toString() + "</td>";
        html += "<td>" + query.value(2).toString() + "</td>";
        html += "<td>" + query.value(3).toString() + "</td>";
        html += "<td>" + query.value(4).toString() + "</td>";
        html += "<td>" + query.value(5).toString() + "</td>";
        html += "</tr>";
    }

    html += "</table><br><br>";

    // Ajouter les statistiques à la fin du PDF
    QSqlQuery roleStats("SELECT id_etab, COUNT(*) FROM enseignant GROUP BY id_etab");
    html += "<h3>Statistiques par ID</h3>";
    while (roleStats.next()) {
        html += "ID : " + roleStats.value(0).toString() + " → " + roleStats.value(1).toString() + "<br>";
    }

    html += "</body></html>";

    // Choisir où enregistrer le fichier PDF
    QString filePath = QFileDialog::getSaveFileName(this, "Enregistrer le PDF", "", "*.pdf");
    if (filePath.isEmpty())
        return;

    if (!filePath.endsWith(".pdf", Qt::CaseInsensitive))
        filePath += ".pdf";

    // Créer le document et l'imprimer en PDF
    QTextDocument document;
    document.setHtml(html);

    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(filePath);

    document.print(&printer);

    QMessageBox::information(this, "Succès", "PDF généré avec succès !");
}


void MainWindow::afficherStatistiques()
{
    // Total des enseignants
    QSqlQuery query("SELECT COUNT(*) FROM etablissement");
    if (query.next()) {
        int total = query.value(0).toInt();
        ui->label_stats->setText("Total etablissements : " + QString::number(total));
    } else {
        ui->label_stats->setText("Erreur lors du chargement des statistiques.");
    }

    // Statistiques par rôle
    QSqlQuery roleStats("SELECT id_etab, COUNT(*) FROM entablissement GROUP BY id_etab");
    QString texte;
    while (roleStats.next()) {
        texte += "ID : " + roleStats.value(0).toString() + " → " + roleStats.value(1).toString() + "\n";
    }
    ui->textEdit_stats->setPlainText(texte);  // Si tu as un QTextEdit dans l'UI
}






//exam

void MainWindow::updateTable()
{
    QSqlQueryModel* model = Exam().afficher();
    qDebug() << "Rows in model:" << model->rowCount() << "Columns:" << model->columnCount();
    ui->tableView_2->setModel(model);
    ui->tableView_2->resizeColumnsToContents();
}

void MainWindow::on_tableView_2_clicked(const QModelIndex &index)
{
    if (!index.isValid()) return;

    QString id = ui->tableView_2->model()->data(ui->tableView_2->model()->index(index.row(), 0)).toString();
    Exam examInstance;
    Exam exam = examInstance.getExamById(id);

    ui->lineEdit_nom1->setText(exam.getNomExam());
    ui->niveauComboBox1->setCurrentText(exam.getNiveau());
    ui->sessionComboBox1->setCurrentText(exam.getExamSession());
    ui->dateEdit_date1->setDate(exam.getDateExam());
    ui->copiesSpinBox1->setValue(exam.getNombreDeCopie());
    ui->pdf_lineedit1->setText(exam.getPdf());

    ui->tabWidget->setCurrentWidget(ui->tab_2);
}

void MainWindow::on_ajouterButton_clicked() //ajouter
{
    QString nom = ui->lineEdit_nom_3->text().trimmed();
    QString niveau = ui->niveauComboBox->currentText();
    QString session = ui->sessionComboBox->currentText();
    QDate date = ui->dateEdit_date->date();
    int copies = ui->copiesSpinBox->value();
    QString pdf = ui->pdf_lineedit->text().trimmed();

    // Basic validation
    if (nom.isEmpty()) {
        QMessageBox::critical(this, "Erreur de validation", "Le nom de l'examen ne peut pas être vide.");
        return;
    }

    QRegularExpression regexName("^[a-zA-Z0-9\\s]+$");
    if (!regexName.match(nom).hasMatch()) {
        QMessageBox::critical(this, "Erreur de validation", "Le nom de l'examen doit contenir uniquement des lettres, des chiffres et des espaces.");
        return;
    }

    if (copies <= 0) {
        QMessageBox::critical(this, "Erreur de validation", "Le nombre de copies doit être supérieur à zéro.");
        return;
    }

    if (pdf.isEmpty()) {
        QMessageBox::critical(this, "Erreur de validation", "Veuillez charger un fichier PDF.");
        return;
    }

    // Create new exam with empty ID (will be auto-generated)
    Exam newExam;
    newExam.setNomExam(nom);
    newExam.setNiveau(niveau);
    newExam.setExamSession(session);
    newExam.setDateExam(date);
    newExam.setNombreDeCopie(copies);
    newExam.setPdf(pdf);

    // Try to add the exam
    bool success = newExam.ajouter();

    if (success) {
        QMessageBox::information(this, "Succès", "Examen ajouté avec succès !");
        // Clear the form
        ui->lineEdit_nom_3->clear();
        ui->niveauComboBox->setCurrentIndex(0);
        ui->sessionComboBox->setCurrentIndex(0);
        ui->dateEdit_date->setDate(QDate::currentDate());
        ui->copiesSpinBox->setValue(0);
        ui->pdf_lineedit->clear();
        // Refresh the table
        updateTable();
        // Update Arduino
        A.sendExamsToArduino();
    } else {
        QString errorMsg = QSqlDatabase::database().lastError().text();
        QMessageBox::critical(this, "Erreur", "Échec de l'ajout de l'examen : " + errorMsg);
        qDebug() << "Database error:" << errorMsg;
    }
}

void MainWindow::on_ajouterButton1_clicked() //modifier
{
    qDebug() << "on_ajouterButton1_clicked triggered";

    if (!ui->tableView_2->currentIndex().isValid()) {
        qDebug() << "No exam selected for modification";
        QMessageBox::critical(this, "Erreur", "Veuillez sélectionner un examen à modifier.");
        return;
    }

    QString id = ui->tableView_2->model()->data(ui->tableView_2->model()->index(ui->tableView_2->currentIndex().row(), 0)).toString();
    qDebug() << "Selected exam ID:" << id;

    QString nom = ui->lineEdit_nom1->text();
    QString niveau = ui->niveauComboBox1->currentText();
    QString session = ui->sessionComboBox1->currentText();
    QDate date = ui->dateEdit_date1->date();
    int copies = ui->copiesSpinBox1->value();
    QString pdf = ui->pdf_lineedit1->text();

    qDebug() << "Input values - Nom:" << nom << "Niveau:" << niveau << "Session:" << session
             << "Date:" << date.toString("yyyy-MM-dd") << "Copies:" << copies << "PDF:" << pdf;

    QRegularExpression regexName("^[a-zA-Z\\s]+$");
    if (!regexName.match(nom).hasMatch() || nom.isEmpty()) {
        qDebug() << "Validation failed: Invalid exam name";
        QMessageBox::critical(this, "Erreur de validation", "Le nom de l'examen doit contenir uniquement des lettres et des espaces, et ne peut pas être vide.");
        return;
    }

    if (niveau.isEmpty()) {
        qDebug() << "Validation failed: Niveau is empty";
        QMessageBox::critical(this, "Erreur de validation", "Veuillez sélectionner un niveau.");
        return;
    }

    if (session.isEmpty()) {
        qDebug() << "Validation failed: Session is empty";
        QMessageBox::critical(this, "Erreur de validation", "Veuillez sélectionner une session.");
        return;
    }

    if (copies <= 0) {
        qDebug() << "Validation failed: Copies <= 0";
        QMessageBox::critical(this, "Erreur de validation", "Le nombre de copies doit être supérieur à zéro.");
        return;
    }

    if (pdf.isEmpty()) {
        qDebug() << "PDF field is empty, retrieving existing PDF";
        Exam existingExam = Exam().getExamById(id);
        pdf = existingExam.getPdf();
        qDebug() << "Using existing PDF:" << pdf;
    }

    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM exam WHERE nom_exam = :nom_exam AND id_exam != :id");
    checkQuery.bindValue(":nom_exam", nom);
    checkQuery.bindValue(":id", id);
    if (checkQuery.exec() && checkQuery.next()) {
        int count = checkQuery.value(0).toInt();
        if (count > 0) {
            qDebug() << "Validation failed: Duplicate exam name found";
            QMessageBox::critical(this, "Erreur", "Un autre examen avec ce nom existe déjà.");
            return;
        }
    } else {
        qDebug() << "Error checking for duplicates:" << checkQuery.lastError().text();
        QMessageBox::critical(this, "Erreur", "Erreur lors de la vérification des doublons.");
        return;
    }

    Exam updatedExam(id, nom, niveau, session, date, copies, pdf);
    bool success = updatedExam.modifierParId(id);

    if (success) {
        qDebug() << "Exam modified successfully";
        QMessageBox::information(this, "Succès", "Examen modifié avec succès !");
        updateTable();
        ui->lineEdit_nom1->clear();
        ui->niveauComboBox1->setCurrentIndex(0);
        ui->sessionComboBox1->setCurrentIndex(0);
        ui->dateEdit_date1->setDate(QDate::currentDate());
        ui->copiesSpinBox1->setValue(0);
        ui->pdf_lineedit1->clear();
        ui->tabWidget->setCurrentWidget(ui->tab);
        qDebug() << "Switched back to main tab";
    } else {
        qDebug() << "Failed to modify exam";
        QMessageBox::critical(this, "Erreur", "Échec de la modification de l'examen.");
    }
}

void MainWindow::on_supprimerButton_clicked()
{
    if (!ui->tableView_2->currentIndex().isValid()) {
        QMessageBox::critical(this, "Erreur", "Veuillez sélectionner un examen à supprimer.");
        return;
    }

    QString id = ui->tableView_2->model()->data(ui->tableView_2->model()->index(ui->tableView_2->currentIndex().row(), 0)).toString();

    QMessageBox::StandardButton confirmation = QMessageBox::question(this, "Confirmation de suppression",
                                                                     "Êtes-vous sûr de vouloir supprimer cet examen ?",
                                                                     QMessageBox::Yes | QMessageBox::No);

    if (confirmation == QMessageBox::Yes) {
        Exam examInstance;
        bool success = examInstance.supprimer(id);

        if (success) {
            QMessageBox::information(this, "Succès", "Suppression effectuée avec succès.");
            updateTable();
        } else {
            QMessageBox::critical(this, "Erreur", "Échec de la suppression de l'examen.");
        }
    }
}

void MainWindow::on_chargerButton_clicked() //ajouter pdf (ajouter, modifier)
{
    QString fileName = QFileDialog::getOpenFileName(this, "Charger un fichier PDF", "", "Fichiers PDF (*.pdf)");
    if (!fileName.isEmpty()) {
        if (ui->tabWidget->currentWidget() == ui->tab_2) {
            ui->pdf_lineedit1->setText(fileName);
        } else {
            ui->pdf_lineedit->setText(fileName);
        }
    }
}

void MainWindow::on_rechercherButton_clicked()
{
    QString searchText = ui->lineEdit_search->text();

    if (searchText.isEmpty()) {
        updateTable();
        return;
    }

    QSqlQueryModel* model = Exam().rechercher(searchText);
    if (model->rowCount() == 0) {
        QMessageBox::information(this, "Recherche", "Aucun examen trouvé pour : " + searchText);
    }
    ui->tableView_2->setModel(model);
    ui->tableView_2->resizeColumnsToContents();
}

void MainWindow::on_comboBoxTri_currentIndexChanged(int index) //tri tableau
{
    QString critere;
    QString ordre;

    switch (index) {
    case 0:
        critere = "id_exam";
        ordre = "ASC";
        break;
    case 1:
        critere = "id_exam";
        ordre = "DESC";
        break;
    case 2:
        critere = "nom_exam";
        ordre = "ASC";
        break;
    case 3:
        critere = "nom_exam";
        ordre = "DESC";
        break;
    case 4:
        critere = "date_exam";
        ordre = "ASC";
        break;
    case 5:
        critere = "date_exam";
        ordre = "DESC";
        break;
    default:
        updateTable();
        return;
    }

    qDebug() << "Sorting by" << critere << ordre;
    QSqlQueryModel* model = Exam().trier(critere, ordre);
    ui->tableView_2->setModel(model);
    ui->tableView_2->resizeColumnsToContents();
}

void MainWindow::on_genererButton_clicked()  //PDF
{
    QString fileName = QFileDialog::getSaveFileName(this, "Enregistrer le PDF", "", "Fichiers PDF (*.pdf)");
    if (fileName.isEmpty()) {
        return;
    }

    QPdfWriter pdfWriter(fileName);
    pdfWriter.setPageSize(QPageSize::A4);
    pdfWriter.setResolution(300);

    QPainter painter(&pdfWriter);
    painter.setFont(QFont("Arial", 10));

    // Margins and spacing
    const int leftMargin = 50;
    const int topMargin = 50;
    const int bottomMargin = 50;
    const int rowHeight = 40;
    const int colSpacing = 40;

    // Column width percentages (total = 100)
    QVector<int> colWidthPercentages = {10, 20, 15, 15, 20, 10, 10};

    // Calculate available width
    int availableWidth = pdfWriter.width() - (2 * leftMargin);
    QVector<int> colWidths(7);

    // Calculate actual column widths based on percentages
    for (int i = 0; i < colWidths.size(); ++i) {
        colWidths[i] = (availableWidth * colWidthPercentages[i]) / 100;
    }

    // Draw title
    painter.setFont(QFont("Arial", 16, QFont::Bold));
    QRect titleRect(leftMargin, topMargin, availableWidth, rowHeight);
    painter.drawText(titleRect, Qt::AlignCenter, "Liste des Examens");
    painter.setFont(QFont("Arial", 10));

    // Headers
    QStringList headers = {"ID Examen", "Nom d'examen", "Niveau", "Session", "Date", "Copies", "PDF"};

    int y = topMargin + rowHeight + 20;

    // Draw header background
    painter.setPen(Qt::NoPen);
    painter.setBrush(QColor(240, 240, 240));
    painter.drawRect(leftMargin, y, availableWidth, rowHeight);

    // Draw header text
    painter.setPen(Qt::black);
    int x = leftMargin;
    for (int col = 0; col < headers.size(); ++col) {
        QRect headerRect(x, y, colWidths[col], rowHeight);
        painter.drawText(headerRect, Qt::AlignCenter | Qt::TextWordWrap, headers[col]);
        x += colWidths[col];
    }
    y += rowHeight;

    // Draw horizontal line
    painter.drawLine(leftMargin, y, leftMargin + availableWidth, y);

    // Draw data rows
    QAbstractItemModel* model = ui->tableView_2->model();
    painter.setFont(QFont("Arial", 9));

    for (int row = 0; row < model->rowCount(); ++row) {
        x = leftMargin;

        // Draw row background (alternate colors)
        painter.setPen(Qt::NoPen);
        painter.setBrush(row % 2 == 0 ? Qt::white : QColor(250, 250, 250));
        painter.drawRect(x, y, availableWidth, rowHeight);

        painter.setPen(Qt::black);
        for (int col = 0; col < model->columnCount(); ++col) {
            QString data = model->data(model->index(row, col)).toString();

            // Format date if this is the date column (col == 4)
            if (col == 4) {
                QDateTime dateTime = QDateTime::fromString(data, "yyyy-MM-dd hh:mm:ss.zzz");
                if (dateTime.isValid()) {
                    data = dateTime.date().toString("dd/MM/yyyy");
                }
            }

            // Truncate PDF path if too long (col == 6)
            if (col == 6 && data.length() > 20) {
                data = "..." + data.right(17);
            }

            QRect cellRect(x, y, colWidths[col], rowHeight);
            painter.drawText(cellRect, Qt::AlignCenter | Qt::TextWordWrap, data);
            x += colWidths[col];
        }
        y += rowHeight;

        // Draw horizontal line between rows
        painter.drawLine(leftMargin, y, leftMargin + availableWidth, y);

        // Check if we need a new page
        if (y > pdfWriter.height() - bottomMargin - rowHeight) {
            pdfWriter.newPage();
            y = topMargin;

            // Redraw headers on new page
            painter.setFont(QFont("Arial", 10));
            x = leftMargin;
            painter.setPen(Qt::NoPen);
            painter.setBrush(QColor(240, 240, 240));
            painter.drawRect(leftMargin, y, availableWidth, rowHeight);

            painter.setPen(Qt::black);
            for (int col = 0; col < headers.size(); ++col) {
                QRect headerRect(x, y, colWidths[col], rowHeight);
                painter.drawText(headerRect, Qt::AlignCenter | Qt::TextWordWrap, headers[col]);
                x += colWidths[col];
            }
            y += rowHeight;
            painter.drawLine(leftMargin, y, leftMargin + availableWidth, y);
            painter.setFont(QFont("Arial", 9));
        }
    }

    painter.end();
    QMessageBox::information(this, "Succès", "PDF généré avec succès !");
}

void MainWindow::on_statshow_clicked()
{
    QString summary;

    // Total exams
    QSqlQuery totalQuery;
    totalQuery.prepare("SELECT COUNT(*) FROM exam");
    if (totalQuery.exec() && totalQuery.next()) {
        int totalExams = totalQuery.value(0).toInt();
        if (totalExams == 0) {
            summary = "No exams found in the database.";
        } else {
            summary += QString("Total Exams: %1\n\n").arg(totalExams);
        }
    } else {
        summary = "Error retrieving total exams: " + totalQuery.lastError().text();
    }

    // Exams per niveau
    summary += "Exams per Niveau:\n";
    QSqlQuery niveauQuery;
    niveauQuery.prepare("SELECT niveau, COUNT(*) AS count FROM exam GROUP BY niveau");
    if (niveauQuery.exec()) {
        bool hasData = false;
        while (niveauQuery.next()) {
            QString niveau = niveauQuery.value("niveau").toString();
            int count = niveauQuery.value("count").toInt();
            summary += QString("  %1: %2\n").arg(niveau).arg(count);
            hasData = true;
        }
        if (!hasData) {
            summary += "  No data available.\n";
        }
    } else {
        summary += "  Error retrieving exams per niveau: " + niveauQuery.lastError().text() + "\n";
    }
    summary += "\n";

    // Average copies
    QSqlQuery avgQuery;
    avgQuery.prepare("SELECT AVG(nombre_de_copie) FROM exam");
    if (avgQuery.exec() && avgQuery.next()) {
        double avgCopies = avgQuery.value(0).toDouble();
        summary += QString("Average Number of Copies per Exam: %1\n\n").arg(QString::number(avgCopies, 'f', 2));
    } else {
        summary += "Error retrieving average copies: " + avgQuery.lastError().text() + "\n\n";
    }

    // Exams per session
    summary += "Exams per Session:\n";
    QSqlQuery sessionQuery;
    sessionQuery.prepare("SELECT exam_session, COUNT(*) AS count FROM exam GROUP BY exam_session");
    if (sessionQuery.exec()) {
        bool hasData = false;
        while (sessionQuery.next()) {
            QString session = sessionQuery.value("exam_session").toString();
            int count = sessionQuery.value("count").toInt();
            summary += QString("  %1: %2\n").arg(session).arg(count);
            hasData = true;
        }
        if (!hasData) {
            summary += "  No data available.\n";
        }
    } else {
        summary += "  Error retrieving exams per session: " + sessionQuery.lastError().text() + "\n";
    }
    summary += "\n";

    // Exams per year
    summary += "Exams per Year:\n";
    QSqlQuery yearQuery;
    yearQuery.prepare("SELECT EXTRACT(YEAR FROM date_exam) AS year, COUNT(*) AS count FROM exam GROUP BY EXTRACT(YEAR FROM date_exam)");
    if (yearQuery.exec()) {
        bool hasData = false;
        while (yearQuery.next()) {
            int year = yearQuery.value("year").toInt();
            int count = yearQuery.value("count").toInt();
            summary += QString("  %1: %2\n").arg(year).arg(count);
            hasData = true;
        }
        if (!hasData) {
            summary += "  No data available.\n";
        }
    } else {
        summary += "  Error retrieving exams per year: " + yearQuery.lastError().text() + "\n";
    }

    QDialog *statsDialog = new QDialog(this);
    statsDialog->setWindowTitle("Statistics");
    statsDialog->setMinimumSize(400, 300);

    QVBoxLayout *layout = new QVBoxLayout(statsDialog);
    QTextEdit *textEdit = new QTextEdit(statsDialog);
    textEdit->setReadOnly(true);
    textEdit->setText(summary);

    layout->addWidget(textEdit);
    statsDialog->setLayout(layout);
    statsDialog->exec();
}

// In your Qt code, add this before uploading to Arduino:
void MainWindow::prepareForUpload() {
    if(arduino && arduino->getserial()->isOpen()) {
        qDebug() << "Closing serial port for upload...";
        arduino->getserial()->close();
        //QThread::msleep(500);  // Wait for port to release

        // Verify closure
        if(!arduino->getserial()->isOpen()) {
            qDebug() << "Port successfully closed";
        } else {
            qDebug() << "Warning: Port still appears open";
        }
    }
}


void MainWindow::releaseSerialPort()
{
    if (arduino && arduino->getserial()->isOpen()) {
        qDebug() << "Closing serial port for Arduino upload...";
        arduino->getserial()->close();

        // Wait for port to fully release
        for (int i = 0; i < 10; i++) {
            if (!arduino->getserial()->isOpen()) {
                qDebug() << "Port successfully closed";
                break;
            }
            QThread::msleep(100);
            QCoreApplication::processEvents();
        }

        if (arduino->getserial()->isOpen()) {
            qDebug() << "Error: Port still open after attempts";
        } else {
            qDebug() << "Port state: Closed";
        }
    } else {
        qDebug() << "Port already closed or Arduino not initialized";
    }
}
void MainWindow::on_releasePortButton_clicked() {
    releaseSerialPort();
}
// In mainwindow.cpp or wherever addExam() is defined
void MainWindow::addExam(QString nomExam, QDate dateExam) // Example signature
{
    QSqlQuery query;
    query.prepare("INSERT INTO EXAM (NOM_EXAM, DATE_EXAM, etat) VALUES (:nom, :date, NULL)");
    query.bindValue(":nom", nomExam);
    query.bindValue(":date", dateExam);

    if (!query.exec()) {
        qDebug() << "Insert Error:" << query.lastError();
        return;
    }

    qDebug() << "Added exam:" << nomExam;
    // Refresh Arduino with updated list
    A.sendExamsToArduino();
}








//centre d'examen
void MainWindow::envoyerEmail()
{
    SmtpClient client("smtp.gmail.com", 465, "adamnsiri05@gmail.com", "iujf avic kzmk dygf");
    bool ok = client.sendMail("adamnsiri05@gmail.com", "adamnsiri05@gmail.com", "Sujet test", "Bonjour madame");

    if (ok)
        QMessageBox::information(this, "Email", "Email envoyé avec succès");
    else
        QMessageBox::warning(this, "Email", "Erreur lors de l'envoi de l'email");
}

/*void MainWindow::afficherStatistiques2()
{
    QSqlQuery query("SELECT Region, COUNT(*) as Total FROM Centre_Examen GROUP BY Region");

    QBarSet *set = new QBarSet("Centres");
    QStringList categories;

    while (query.next()) {
        QString region = query.value("Region").toString();
        int total = query.value("Total").toInt();

        *set << total;
        categories << region;
    }

    QBarSeries *series = new QBarSeries();
    series->append(set);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Nombre de centres par région");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    axisX->setTitleText("Région");

    QValueAxis *axisY = new QValueAxis();
    axisY->setTitleText("Nombre de centres");

    chart->addAxis(axisX, Qt::AlignBottom);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisX);
    series->attachAxis(axisY);

    chart->legend()->setVisible(false);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Vider le contenu existant de conteneurGraphique
    QLayout *oldLayout = ui->statistiqueWidget->layout();
    if (oldLayout) {
        QLayoutItem *item;
        while ((item = oldLayout->takeAt(0)) != nullptr) {
            delete item->widget();
            delete item;
        }
        delete oldLayout;
    }

    // Ajouter le graphique dans le QWidget
    QVBoxLayout *newLayout = new QVBoxLayout(ui->statistiqueWidget);
    newLayout->addWidget(chartView);
}
*/
// Fonction pour afficher les centres dans le TreeView
void MainWindow::afficherCentres()
{
    ui->treeWidget_Centre->clear();  // Vider le QTreeWidget avant de le recharger

    QSqlQueryModel *model = centre.afficher();  // Appel de la méthode afficher()

    if (!model) {
        QMessageBox::critical(this, "Erreur", "Impossible de récupérer les centres !");
        return;
    }

    // Définir les en-têtes (au cas où ce ne serait pas défini dans Qt Designer)
    ui->treeWidget_Centre->setColumnCount(6);
    ui->treeWidget_Centre->setHeaderLabels(QStringList() << "ID Centre" << "Nom" << "Adresse" << "Région" << "Responsable" << "Mail Responsable");

    // Parcourir le modèle et ajouter les éléments au QTreeWidget
    for (int i = 0; i < model->rowCount(); i++) {
        QTreeWidgetItem *item = new QTreeWidgetItem();
        item->setText(0, model->data(model->index(i, 0)).toString());  // ID Centre
        item->setText(1, model->data(model->index(i, 1)).toString());  // Nom
        item->setText(2, model->data(model->index(i, 2)).toString());  // Adresse
        item->setText(3, model->data(model->index(i, 3)).toString());  // Région
        item->setText(4, model->data(model->index(i, 4)).toString());  // Responsable
        item->setText(5, model->data(model->index(i, 5)).toString());  // Mail Responsable

        ui->treeWidget_Centre->addTopLevelItem(item);  // Ajouter l'élément à l'arbre
    }
}


void MainWindow::on_treeWidget_Centre_itemClicked(QTreeWidgetItem *item, int column)
{
    Q_UNUSED(column); // Évite le warning si la variable n'est pas utilisée

    // Remplissage des champs à modifier avec les données sélectionnées
    ui->lineEdit_Id_Centre2->setText(item->text(0));  // ID
    ui->lineEdit_Nom_Centre2->setText(item->text(1));  // Nom
    ui->lineEdit_Adresse2->setText(item->text(2));  // Adresse
    ui->lineEdit_Region2->setText(item->text(3));  // Région
    ui->lineEdit_Responsable2->setText(item->text(4));  // Responsable
    ui->lineEdit_Mail_Responsable2->setText(item->text(5));  // Mail Responsable

    // Remplissage de ID à supprimer avec les données sélectionnées
    ui->lineEdit_Id_Centre3->setText(item->text(0));  // ID
}

void MainWindow::modifierCentre()
{
    int id = ui->lineEdit_Id_Centre2->text().toInt();
    QString nom = ui->lineEdit_Nom_Centre2->text();
    QString adresse = ui->lineEdit_Adresse2->text();
    QString region = ui->lineEdit_Region2->text();
    QString responsable = ui->lineEdit_Responsable2->text();
    QString mail = ui->lineEdit_Mail_Responsable2->text();

    // Vérification des champs vides
    if (nom.isEmpty() || adresse.isEmpty() || region.isEmpty() || responsable.isEmpty() || mail.isEmpty()) {
        QMessageBox::warning(this, "Champs vides", "Tous les champs doivent être remplis !");
        return;
    }

    // Vérification de l'ID
    if (id <= 0) {
        QMessageBox::warning(this, "ID invalide", "L'ID du centre doit être un nombre positif !");
        return;
    }

    // Définition des regex en statique pour éviter la recréation
    static const QRegularExpression nameRegex("^[A-Za-zÀ-ÿ ]+$");  // Lettres et espaces
    static const QRegularExpression addressRegex("^[A-Za-z0-9À-ÿ ,.-]+$");  // Adresse
    static const QRegularExpression emailRegex("^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}$");  // Email

    // Vérification du nom
    if (!nameRegex.match(nom).hasMatch()) {
        QMessageBox::warning(this, "Nom invalide", "Le nom du centre ne doit contenir que des lettres et espaces !");
        return;
    }

    // Vérification de l'adresse
    if (!addressRegex.match(adresse).hasMatch()) {
        QMessageBox::warning(this, "Adresse invalide", "L'adresse contient des caractères non autorisés !");
        return;
    }

    // Vérification de la région
    if (!nameRegex.match(region).hasMatch()) {
        QMessageBox::warning(this, "Région invalide", "Le nom de la région ne doit contenir que des lettres et espaces !");
        return;
    }

    // Vérification du responsable
    if (!nameRegex.match(responsable).hasMatch()) {
        QMessageBox::warning(this, "Responsable invalide", "Le nom du responsable ne doit contenir que des lettres et espaces !");
        return;
    }

    // Vérification de l'email
    if (!emailRegex.match(mail).hasMatch()) {
        QMessageBox::warning(this, "Email invalide", "L'email doit contenir un '@' et un '.' !");
        return;
    }

    // Création de l'objet Centre
    Centre c(id, nom, adresse, region, responsable, mail);

    // Vérification et mise à jour en base de données
    if (c.modifier()) {
        QMessageBox::information(this, "Succès", "Le centre a été modifié avec succès !");
        ui->lineEdit_Id_Centre3->clear();
        clearFieldsAdd();
        clearFieldsUpdate();
        afficherCentres();
        afficherStatistiques();
    } else {
        QMessageBox::critical(this, "Erreur", "Échec de la modification du centre.");
    }
}

void MainWindow::clearFieldsAdd()
{
    ui->lineEdit_Id_Centre->clear();
    ui->lineEdit_Nom_Centre->clear();
    ui->lineEdit_Adresse->clear();
    ui->lineEdit_Region->clear();
    ui->lineEdit_Responsable->clear();
    ui->lineEdit_Mail_Responsable->clear();
}

void MainWindow::clearFieldsUpdate()
{
    ui->lineEdit_Id_Centre2->clear();
    ui->lineEdit_Nom_Centre2->clear();
    ui->lineEdit_Adresse2->clear();
    ui->lineEdit_Region2->clear();
    ui->lineEdit_Responsable2->clear();
    ui->lineEdit_Mail_Responsable2->clear();
}




void MainWindow::ajouterCentre()
{
    int id = ui->lineEdit_Id_Centre->text().toInt();
    QString nom = ui->lineEdit_Nom_Centre->text();
    QString adresse = ui->lineEdit_Adresse->text();
    QString region = ui->lineEdit_Region->text();
    QString responsable = ui->lineEdit_Responsable->text();
    QString mail = ui->lineEdit_Mail_Responsable->text();


    // Vérification des champs vides
    if (nom.isEmpty() || adresse.isEmpty() || region.isEmpty() || responsable.isEmpty() || mail.isEmpty()) {
        QMessageBox::warning(this, "Champs vides", "Tous les champs doivent être remplis !");
        return;
    }

    // Vérification de l'ID
    if (id <= 0) {
        QMessageBox::warning(this, "ID invalide", "L'ID du centre doit être un nombre positif !");
        return;
    }

    // Regex pour la validation
    static const QRegularExpression nameRegex("^[A-Za-zÀ-ÿ ]+$");  // Lettres et espaces
    static const QRegularExpression addressRegex("^[A-Za-z0-9À-ÿ ,.-]+$");  // Adresse
    static const QRegularExpression emailRegex("^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}$");  // Email


    // Vérification du nom
    if (!nameRegex.match(nom).hasMatch()) {
        QMessageBox::warning(this, "Nom invalide", "Le nom du centre ne doit contenir que des lettres et espaces !");
        return;
    }

    // Vérification de l'adresse
    if (!addressRegex.match(adresse).hasMatch()) {
        QMessageBox::warning(this, "Adresse invalide", "L'adresse contient des caractères non autorisés !");
        return;
    }

    // Vérification de la région
    if (!nameRegex.match(region).hasMatch()) {
        QMessageBox::warning(this, "Région invalide", "Le nom de la région ne doit contenir que des lettres et espaces !");
        return;
    }

    // Vérification du responsable
    if (!nameRegex.match(responsable).hasMatch()) {
        QMessageBox::warning(this, "Responsable invalide", "Le nom du responsable ne doit contenir que des lettres et espaces !");
        return;
    }

    // Vérification de l'email
    if (!emailRegex.match(mail).hasMatch()) {
        QMessageBox::warning(this, "Email invalide", "L'email doit contenir un '@' et un '.' !");
        return;
    }

    // Vérification de l'unicité de l'email
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM CENTRE_EXAMEN WHERE Mail_Responsable = :mail");
    query.bindValue(":mail", mail);
    if (query.exec() && query.next() && query.value(0).toInt() > 0) {
        QMessageBox::warning(this, "Email déjà utilisé", "Cet email est déjà associé à un autre centre !");
        return;
    }

    // Vérification de l'unicité de l'ID
    query.prepare("SELECT COUNT(*) FROM CENTRE_EXAMEN WHERE Id_Centre = :id");
    query.bindValue(":id", id);
    if (query.exec() && query.next() && query.value(0).toInt() > 0) {
        QMessageBox::warning(this, "ID déjà utilisé", "Cet ID est déjà utilisé par un autre centre !");
        return;
    }

    // Création de l'objet Centre avec les valeurs entrées par l'utilisateur
    Centre c(id, nom, adresse, region, responsable, mail);

    // Vérification et ajout dans la base de données
    if (c.ajouter()) {
        QMessageBox::information(this, "Succès", "Le centre a été ajouté avec succès !");
        ui->lineEdit_Id_Centre3->clear();
        clearFieldsAdd();
        clearFieldsUpdate();
        afficherCentres();
        afficherStatistiques();
    } else {
        QMessageBox::critical(this, "Erreur", "Échec de l'ajout du centre.");
    }
}

void MainWindow::supprimerCentre()
{
    int id = ui->lineEdit_Id_Centre3->text().toInt();

    if (id <= 0) {
        QMessageBox::warning(this, "ID invalide", "Veuillez entrer un ID valide !");
        return;
    }

    // Vérifier si l'ID existe avant de tenter la suppression
    if (!centre.existe(id)) {
        QMessageBox::warning(this, "ID introuvable", "Aucun centre avec cet ID n'existe !");
        return;
    }

    // Demande de confirmation avant suppression
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Confirmation",
                                                              "Voulez-vous vraiment supprimer ce centre ?",
                                                              QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        if (centre.supprimer(id)) {
            QMessageBox::information(this, "Succès", "Le centre a été supprimé !");

            // Vider le champ ID et les autres champs de saisie après suppression
            ui->lineEdit_Id_Centre3->clear();
            clearFieldsAdd();
            clearFieldsUpdate();

            // Rafraîchir la liste des centres
            afficherCentres();
            afficherStatistiques();
        } else {
            QMessageBox::critical(this, "Erreur", "Échec de la suppression !");
        }
    }
}

void MainWindow::exporterPDF()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Enregistrer le PDF", "", "PDF Files (*.pdf)");
    if (fileName.isEmpty()) return;

    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(fileName);
    printer.setPageSize(QPageSize(QPageSize::A4));
    printer.setPageOrientation(QPageLayout::Landscape);

    QPainter painter(&printer);
    int rowCount = ui->treeWidget_Centre->topLevelItemCount();
    int columnCount = ui->treeWidget_Centre->columnCount();

    if (rowCount == 0 || columnCount == 0) {
        QMessageBox::warning(this, "Avertissement", "Aucune donnée à exporter !");
        return;
    }

    int startX = 50, startY = 50;
    int cellWidth = 120, cellHeight = 40;
    int padding = 5;
    int pageHeight = printer.pageLayout().paintRectPixels(printer.resolution()).height() - 100;
    int yOffset = startY;

    auto drawHeaders = [&]() {
        painter.setFont(QFont("Arial", 10, QFont::Bold));
        for (int col = 0; col < columnCount; col++) {
            QRect cellRect(startX + col * cellWidth, yOffset, cellWidth, cellHeight);
            painter.drawRect(cellRect);
            QRect textRect = cellRect.adjusted(padding, padding, -padding, -padding);
            painter.drawText(textRect, Qt::AlignLeft | Qt::AlignVCenter | Qt::TextWordWrap,
                             ui->treeWidget_Centre->headerItem()->text(col));
        }
        yOffset += cellHeight;
    };

    drawHeaders();

    painter.setFont(QFont("Arial", 9));

    for (int row = 0; row < rowCount; row++) {
        QTreeWidgetItem* item = ui->treeWidget_Centre->topLevelItem(row);

        // Vérifier si l'élément est masqué
        if (item->isHidden()) continue;

        if (yOffset + cellHeight > pageHeight) {
            printer.newPage();
            yOffset = startY;
            drawHeaders();  // Redessiner les en-têtes après un saut de page
        }

        int maxHeight = cellHeight;

        for (int col = 0; col < columnCount; col++) {
            QRect cellRect(startX + col * cellWidth, yOffset, cellWidth, cellHeight);
            QString text = item->text(col);

            QRect textRect = cellRect.adjusted(padding, padding, -padding, -padding);
            QRect boundingBox = painter.boundingRect(textRect, Qt::AlignLeft | Qt::TextWordWrap, text);
            int textHeight = boundingBox.height() + 10;
            maxHeight = qMax(maxHeight, textHeight);

            painter.drawRect(cellRect.adjusted(0, 0, 0, maxHeight - cellHeight));
            painter.drawText(textRect, Qt::AlignLeft | Qt::AlignVCenter | Qt::TextWordWrap, text);
        }
        yOffset += maxHeight;
    }

    painter.end();
    QMessageBox::information(this, "Succès", "Le fichier PDF a été enregistré avec succès !");
}


void MainWindow::filtrerCentres()
{
    QString recherche = ui->lineEdit_Recherche->text().trimmed().toLower();

    for (int i = 0; i < ui->treeWidget_Centre->topLevelItemCount(); ++i) {
        QTreeWidgetItem *item = ui->treeWidget_Centre->topLevelItem(i);
        QString nomCentre = item->text(1).trimmed().toLower();  // Colonne du Nom
        QString regionCentre = item->text(3).trimmed().toLower();  // Colonne de la Région

        bool match = recherche.isEmpty() || nomCentre.contains(recherche) || regionCentre.contains(recherche);
        item->setHidden(!match);
    }
}

void MainWindow::ContratDeVerification()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Enregistrer le PDF", "", "PDF Files (*.pdf)");
    if (fileName.isEmpty()) return;

    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(fileName);
    printer.setPageSize(QPageSize(QPageSize::A4));
    printer.setPageOrientation(QPageLayout::Portrait);

    QPainter painter(&printer);
    if (!painter.isActive()) {
        QMessageBox::warning(this, "Erreur", "Impossible d'initialiser le PDF.");
        return;
    }

    QRect printableArea = printer.pageLayout().paintRectPixels(printer.resolution());
    int x = 50;
    int y = 50;
    int lineHeight = 30;
    int pageWidth = printableArea.width();
    int textWidth = pageWidth - 2 * x;

    painter.setFont(QFont("Arial", 14, QFont::Bold));
    painter.drawText(QRect(x, y, textWidth, lineHeight), Qt::AlignCenter, "Contrat de vérification");
    y += 2 * lineHeight;

    // Texte : Objet du contrat
    painter.setFont(QFont("Arial", 10));
    QString objet = "Objet du contrat\n"
                    "Le présent contrat a pour objet de formaliser la vérification de la conformité du Centre d’Examen avec "
                    "les normes et exigences en vigueur, dans le cadre de l’organisation des examens officiels.";
    painter.drawText(QRect(x, y, textWidth, 200), Qt::AlignLeft | Qt::TextWordWrap, objet);
    y += 100;

    // Phrases cochées
    QStringList phrases;
    if (ui->checkBox1->isChecked()) phrases << ui->checkBox1->text();
    if (ui->checkBox2->isChecked()) phrases << ui->checkBox2->text();
    if (ui->checkBox3->isChecked()) phrases << ui->checkBox3->text();

    if (phrases.isEmpty()) {
        QMessageBox::warning(this, "Avertissement", "Aucune case n'est cochée !");
        painter.end();
        return;
    }

    painter.drawText(QRect(x, y, textWidth, 30), Qt::AlignLeft, "Vérifications réalisées :");
    y += lineHeight;

    for (const QString &phrase : phrases) {
        painter.drawText(QRect(x, y, textWidth, lineHeight), Qt::AlignLeft, "- " + phrase);
        y += lineHeight;
    }

    y += 20;

    // Renouvellement & Conformité
    QString conformite = "Renouvellement & Conformité\n"
                         "Le présent contrat est valable pour une durée de un mois, renouvelable sous réserve d’une nouvelle vérification.\n"
                         "En cas de non-respect des engagements, le présent contrat pourra être résilié sans préavis après constatation officielle.";
    painter.drawText(QRect(x, y, textWidth, 200), Qt::AlignLeft | Qt::TextWordWrap, conformite);
    y += 100;

    // Signatures
    QString signatureTxt = "Signatures\n"
                           "Fait à Tunis,\n"
                           "Par le ministère de l’éducation nationale                                       et BLINK société de distribution\n"
                           "Mr Adam Nsiri, adjoint consul";
    painter.drawText(QRect(x, y, textWidth, 100), Qt::AlignLeft | Qt::TextWordWrap, signatureTxt);

    // Image signature à droite
    QPixmap signature(":/images/images/signature.png");
    int imgWidth = 120;
    int imgHeight = 80;
    painter.drawPixmap(x + textWidth - imgWidth, y + 60, imgWidth, imgHeight, signature);

    painter.end();
    QMessageBox::information(this, "Succès", "Le contrat de vérification a été généré avec succès !");
}
