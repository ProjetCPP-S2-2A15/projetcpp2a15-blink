#include "mainwindow.h"
#include "ressource.h"
#include "ui_mainwindow.h"

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



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),

    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView->setModel(Etmp.afficher());

    afficherStatistiques();



    // Charger initialement les données triées par ID
    QSqlTableModel* model = new QSqlTableModel();
    model->setTable("ressource");
    model->setSort(0, Qt::AscendingOrder);
    model->select();
    ui->tableView->setModel(model);
    ui->tableView->setSortingEnabled(true);

    // Remplir la combo des critères
    ui->combo_tri->addItems({"ID", "Nom", "Status", "Type"});

    connect(ui->btn_tri, &QPushButton::clicked, this, &MainWindow::on_btn_tri_clicked);

}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ajout_clicked()
{
    int ID = ui->ID->text().toInt();
    QString nom = ui->nom->text();
    QString status = ui->status->text();
    QString type = ui->type->text();
    int quantite = ui->quantite->text().toInt();

    // Validate inputs
    static const QRegularExpression nameRegex("^[A-Za-zÀ-ÿ ]+$");
    static const QRegularExpression emailRegex("^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}$");

    if (ID <= 0) {
        QMessageBox::warning(this, "ID invalide", "L'ID doit être un entier positif !");
        return;
    }

    if (!nameRegex.match(nom).hasMatch()) {
        QMessageBox::warning(this, "Nom invalide", "Le nom ne doit contenir que des lettres et des espaces !");
        return;
    }

    if (!nameRegex.match(status).hasMatch()) { // Corrected: use nameRegex for 'prenom'
        QMessageBox::warning(this, "status invalide", "Le status ne doit contenir que des lettres et des espaces !");
        return;
    }


    if (!nameRegex.match(type).hasMatch()) {
        QMessageBox::warning(this, "type invalide", "Veuillez entrer un type valide !");
        return;
    }

    ressource R(ID, nom, status, type, quantite);
    bool test = R.ajouter();

    if (test) {
        QMessageBox::information(this, "Succès", "Ressource ajouté avec succès !");
        ui->tableView->setModel(Etmp.afficher());

        // Réinitialisation des champs
        ui->ID->clear();
        ui->nom->clear();
        ui->status->clear();
        ui->type->clear();
        ui->quantite->clear();
    } else {
        QMessageBox::critical(this, "Erreur", "L'ajout du ressource a échoué !");
        qDebug() << "Erreur SQL à l'ajout.";
    }
}

void MainWindow::on_supp_clicked()
{
    int ID = ui->lineEdit_IDS->text().toInt();

    if (ID <= 0) {
        QMessageBox::warning(this, "ID invalide", "Veuillez entrer un ID valide !");
        return;
    }

    QMessageBox::StandardButton reply = QMessageBox::question(this, "Confirmation",
                                                              "Voulez-vous vraiment supprimer ce centre ?",
                                                              QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        bool test = Etmp.supprimer(ID);

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

void MainWindow::on_modifier_clicked()
{
    int ID = ui->ID->text().toInt();
    QString nom = ui->nom->text();
    QString status = ui->status->text();
    QString type = ui->type->text();
    int quantite = ui->quantite->text().toInt();

    // Validation
    static const QRegularExpression nameRegex("^[A-Za-zÀ-ÿ ]+$");
    static const QRegularExpression emailRegex("^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}$");

    if (ID <= 0) {
        QMessageBox::warning(this, "ID invalide", "Le nom ne doit contenir que des lettres et des espaces !");
        return;
    }

    if (!nameRegex.match(nom).hasMatch()) {
        QMessageBox::warning(this, "Nom invalide", "Le nom ne doit contenir que des lettres et des espaces !");
        return;
    }

    if (!nameRegex.match(status).hasMatch()) { // Corrected: use nameRegex for 'prenom'
        QMessageBox::warning(this, "status invalide", "Le status ne doit contenir que des lettres et des espaces !");
        return;
    }


    if (!nameRegex.match(type).hasMatch()) {
        QMessageBox::warning(this, "type invalide", "Veuillez entrer un type valide !");
        return;
    }

    ressource R(ID, nom, status, type, quantite);
    bool test = R.modifier();

    if (test) {
        ui->tableView->setModel(Etmp.afficher());
        QMessageBox::information(this, "Succès", "ressource modifié avec succès !");
    } else {
        QMessageBox::critical(this, "Erreur", "La modification a échoué !");
        qDebug() << "Erreur SQL à la modification.";
    }
}

void MainWindow::on_rechercher_clicked()
{
    // Récupère la valeur saisie dans le QLineEdit
    QString searchTerm = ui->lineEdit_recherche->text();

    if (searchTerm.isEmpty()) {
        QMessageBox::warning(this, "Recherche vide", "Veuillez saisir un terme de recherche !");
        return;
    }

    // Crée une requête SQL avec le terme de recherche
    QSqlQueryModel *model = new QSqlQueryModel();
    QString queryStr = QString("SELECT * FROM ressource WHERE nom LIKE '%%1%' OR status LIKE '%%1%' OR type LIKE '%%1%' ").arg(searchTerm); // Fixed the missing closing %

    model->setQuery(queryStr);

    // Si une erreur se produit lors de l'exécution de la requête
    if (model->lastError().isValid()) {
        QMessageBox::critical(this, "Erreur", "Une erreur est survenue lors de la recherche.");
        return;
    }

    // Mise à jour du modèle de la table avec les résultats
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
}

void MainWindow::on_refresh_clicked()
{
    ui->tableView->setModel(Etmp.afficher());
}


void MainWindow::on_btn_tri_clicked()
{
    QString critere = ui->combo_tri->currentText();
    QSqlTableModel* model = new QSqlTableModel();
    model->setTable("ressource");

    // Tri selon le critère
    if (critere == "ID") {
        model->setSort(0, Qt::AscendingOrder);
    } else if (critere == "Nom") {
        model->setSort(1, Qt::AscendingOrder);
    } else if (critere == "Status") {
        model->setSort(2, Qt::AscendingOrder);
    } else if (critere == "Type") {
        model->setSort(3, Qt::AscendingOrder);
    }


    model->select(); // Exécute la requête avec tri
    ui->tableView->setModel(model);
    ui->tableView->setSortingEnabled(true);
}


void MainWindow::on_btn_pdf_clicked()
{
    QSqlQuery query("SELECT * FROM ressouce");

    QString html = "<html><head><meta charset='utf-8'></head><body>";
    html += "<h2 align='center'>Liste des Enseignants</h2><table border='1' cellspacing='0' cellpadding='4'>";
    html += "<tr>"
            "<th>ID</th><th>Nom</th><th>Prénom</th><th>Téléphone</th>"
            "<th>Email</th><th>Rôle</th><th>Matière</th></tr>";

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
    QSqlQuery roleStats("SELECT status, COUNT(*) FROM ressource GROUP BY status");
    html += "<h3>Statistiques par status</h3>";
    while (roleStats.next()) {
        html += "status : " + roleStats.value(0).toString() + " → " + roleStats.value(1).toString() + "<br>";
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
    QSqlQuery query("SELECT COUNT(*) FROM ressource");
    if (query.next()) {
        int total = query.value(0).toInt();
        ui->label_stats->setText("Total enseignants : " + QString::number(total));
    } else {
        ui->label_stats->setText("Erreur lors du chargement des statistiques.");
    }

    // Statistiques par rôle
    QSqlQuery roleStats("SELECT status, COUNT(*) FROM ressource GROUP BY status");
    QString texte;
    while (roleStats.next()) {
        texte += "status : " + roleStats.value(0).toString() + " → " + roleStats.value(1).toString() + "\n";
    }
    ui->textEdit_stats->setPlainText(texte);  // Si tu as un QTextEdit dans l'UI
}



