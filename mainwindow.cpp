#include "mainwindow.h"
#include "etablissement.h"
#include "ui_mainwindow.h"

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

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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

    // Set default map center
    emit setCenter(36.81171298292549, 10.16309292111914);

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

MainWindow::~MainWindow()
{
    delete ui;
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
        emit setCenter(36.81171298292549, 10.16309292111914);
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
    int id_etab = ui->lineEdit_ID->text().toInt();
    QString nom = ui->lineEdit_nom->text();
    QString adresse = ui->lineEdit_add->text();
    int telephone = ui->lineEdit_tel->text().toInt();
    QString email = ui->lineEdit_e->text();
    QString type = ui->lineEdit_T->text();

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

    if (!QRegularExpression("^\\d{8}$").match(ui->lineEdit_tel->text()).hasMatch()) {
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

