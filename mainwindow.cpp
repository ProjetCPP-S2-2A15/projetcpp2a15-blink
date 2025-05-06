#include "smtpclient.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPrinter>
#include <QPainter>
#include <QFileDialog>
#include <QTextDocument>
#include <QSqlQuery>
#include <QSqlError>
#include <QVBoxLayout>
#include <QDebug>
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
    ui->setupUi(this);
    // Appliquer le style au QLineEdit
    ui->lineEdit_Recherche->setStyleSheet(
        "QLineEdit {"
        "    padding-left: 20px;"  // Ajoute du padding à gauche
        "    border: 2px solid gray;"  // Bordure
        "    border-radius: 5px;"  // Coins arrondis (optionnel)
        "    font-size: 14px;"  // Taille du texte (optionnel)
        "}"
        );

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
void MainWindow::envoyerEmail()
{
    SmtpClient client("smtp.gmail.com", 465, "adamnsiri05@gmail.com", "iujf avic kzmk dygf");
       bool ok = client.sendMail("adamnsiri05@gmail.com", "adamnsiri05@gmail.com", "Sujet test", "Bonjour madame");

    if (ok)
        QMessageBox::information(this, "Email", "Email envoyé avec succès");
    else
        QMessageBox::warning(this, "Email", "Erreur lors de l'envoi de l'email");
}

void MainWindow::afficherStatistiques()
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
