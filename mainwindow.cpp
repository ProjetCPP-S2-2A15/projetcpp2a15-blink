#include "mainwindow.h"
#include "enseignant.h"
#include "ui_mainwindow.h"
#include "chatbotwindow.h"
#include "aimanager.h"  // Include our new class



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
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QMessageBox>




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),

    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView_3->setModel(Etmp.afficher());

    afficherStatistiques();



    // Charger initialement les données triées par ID
    QSqlTableModel* model = new QSqlTableModel();
    model->setTable("enseignant");
    model->setSort(0, Qt::AscendingOrder);
    model->select();
    ui->tableView_3->setModel(model);
    ui->tableView_3->setSortingEnabled(true);

    // Remplir la combo des critères
    ui->combo_tri->addItems({"ID", "Nom", "Prénom"});

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
    QString prenom = ui->prenom->text();
    QString email = ui->email->text();
    int telephone = ui->tel->text().toInt();
    QString role = ui->role->text();
    QString matiere = ui->matiere->text();

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

    if (!nameRegex.match(prenom).hasMatch()) { // Corrected: use nameRegex for 'prenom'
        QMessageBox::warning(this, "Prenom invalide", "Le prénom ne doit contenir que des lettres et des espaces !");
        return;
    }

    if (!QRegularExpression("^\\d{8}$").match(ui->tel->text()).hasMatch()) {
        QMessageBox::warning(this, "Téléphone invalide", "Le numéro de téléphone doit comporter exactement 8 chiffres !");
        return;
    }

    if (!emailRegex.match(email).hasMatch()) {
        QMessageBox::warning(this, "Email invalide", "Veuillez entrer une adresse email valide !");
        return;
    }

    enseignant EN(ID, nom, prenom, telephone, email, role, matiere);
    bool test = EN.ajouter();

    if (test) {
        QMessageBox::information(this, "Succès", "Enseignant ajouté avec succès !");
        ui->tableView_3->setModel(Etmp.afficher());

        // Réinitialisation des champs
        ui->ID->clear();
        ui->nom->clear();
        ui->prenom->clear();
        ui->tel->clear();
        ui->email->clear();
        ui->role->clear();
        ui->matiere->clear();
    } else {
        QMessageBox::critical(this, "Erreur", "L'ajout de l'enseignant a échoué !");
        qDebug() << "Erreur SQL à l'ajout.";
    }
}

void MainWindow::on_supp_clicked()
{
    int ID = ui->IDsupp->text().toInt();

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
            ui->tableView_3->setModel(Etmp.afficher());
            QMessageBox::information(this, "Succès", "Suppression effectuée avec succès !");
            ui->IDsupp->clear();
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
    QString prenom = ui->prenom->text();
    QString email = ui->email->text();
    int telephone = ui->tel->text().toInt();
    QString role = ui->role->text();
    QString matiere = ui->matiere->text();

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

    if (!nameRegex.match(prenom).hasMatch()) { // Corrected: use nameRegex for 'prenom'
        QMessageBox::warning(this, "Prenom invalide", "Le prénom ne doit contenir que des lettres et des espaces !");
        return;
    }

    if (!QRegularExpression("^\\d{8}$").match(ui->tel->text()).hasMatch()) {
        QMessageBox::warning(this, "Téléphone invalide", "Le numéro de téléphone doit comporter exactement 8 chiffres !");
        return;
    }

    if (!emailRegex.match(email).hasMatch()) {
        QMessageBox::warning(this, "Email invalide", "Veuillez entrer une adresse email valide !");
        return;
    }

    enseignant EN(ID, nom, prenom, telephone, email, role, matiere);
    bool test = EN.modifier();

    if (test) {
        ui->tableView_3->setModel(Etmp.afficher());
        QMessageBox::information(this, "Succès", "Établissement modifié avec succès !");
    } else {
        QMessageBox::critical(this, "Erreur", "La modification a échoué !");
        qDebug() << "Erreur SQL à la modification.";
    }
}

void MainWindow::on_rechercher_clicked()
{
    // Récupère la valeur saisie dans le QLineEdit
    QString searchTerm = ui->lineEdit_rech->text();

    if (searchTerm.isEmpty()) {
        QMessageBox::warning(this, "Recherche vide", "Veuillez saisir un terme de recherche !");
        return;
    }

    // Crée une requête SQL avec le terme de recherche
    QSqlQueryModel *model = new QSqlQueryModel();
    QString queryStr = QString("SELECT * FROM enseignant WHERE nom LIKE '%%1%' OR prenom LIKE '%%1%' OR email LIKE '%%1%' OR role LIKE '%%1%' OR matiere LIKE '%%1%'").arg(searchTerm); // Fixed the missing closing %

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
    ui->tableView_3->setModel(Etmp.afficher());
}


void MainWindow::on_btn_tri_clicked()
{
    QString critere = ui->combo_tri->currentText();
    QSqlTableModel* model = new QSqlTableModel();
    model->setTable("enseignant");

    // Tri selon le critère
    if (critere == "ID") {
        model->setSort(0, Qt::AscendingOrder);
    } else if (critere == "Nom") {
        model->setSort(1, Qt::AscendingOrder);
    } else if (critere == "Prénom") {
        model->setSort(2, Qt::AscendingOrder);
    }

    model->select(); // Exécute la requête avec tri
    ui->tableView_3->setModel(model);
    ui->tableView_3->setSortingEnabled(true);
}


void MainWindow::on_btn_pdf_clicked()
{
    QSqlQuery query("SELECT * FROM enseignant");

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
        html += "<td>" + query.value(6).toString() + "</td>";
        html += "</tr>";
    }

    html += "</table><br><br>";

    // Ajouter les statistiques à la fin du PDF
    QSqlQuery roleStats("SELECT role, COUNT(*) FROM enseignant GROUP BY role");
    html += "<h3>Statistiques par rôle</h3>";
    while (roleStats.next()) {
        html += "Rôle : " + roleStats.value(0).toString() + " → " + roleStats.value(1).toString() + "<br>";
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
    QSqlQuery query("SELECT COUNT(*) FROM enseignant");
    if (query.next()) {
        int total = query.value(0).toInt();
        ui->label_stats->setText("Total enseignants : " + QString::number(total));
    } else {
        ui->label_stats->setText("Erreur lors du chargement des statistiques.");
    }

    // Statistiques par rôle
    QSqlQuery roleStats("SELECT role, COUNT(*) FROM enseignant GROUP BY role");
    QString texte;
    while (roleStats.next()) {
        texte += "Rôle : " + roleStats.value(0).toString() + " → " + roleStats.value(1).toString() + "\n";
    }
    ui->textEdit_stats->setPlainText(texte);  // Si tu as un QTextEdit dans l'UI
}




void MainWindow::on_btnChatbot_clicked()
{
    AIManager ai;

    QList<Teacher> teachers = {
        {1, "Mme Ali", "Mathématiques", "", 2},
        {2, "Mr. Youssef", "Français", "", 5},
        {3, "Mme Lilia", "Physique", "", 1}
    };

    Teacher suggestion = ai.suggestTeacherForSubject("Mathématiques", teachers);
    QString suggestedRole = ai.suggestRole(suggestion);

    QMessageBox::information(this, "AI Suggestion",
                             "Best teacher for Math: " + suggestion.name + "\nSuggested role: " + suggestedRole);
}



