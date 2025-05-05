#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QRegularExpression>
#include <QSqlRecord>
#include <QFileDialog>
#include <QtPrintSupport/QPrinter>
#include <QPainter>
#include <QTextDocument>
#include <QTextTable>
#include <QTextCursor>
#include <QTextTableFormat>
#include <QTextTableCellFormat>
#include <QTextCharFormat>
#include <QStandardPaths>
#include <QTextStream>
#include <QComboBox>
#include <QTableWidget>
#include <QHeaderView>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QtCharts>
#include <QChartView>
#include <QBarSeries>
#include <QBarSet>
#include <QFileDialog>
#include <QDate>
#include <QTextStream>
#include <QTranslator>
#include <QLocale>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connexion du bouton "Ajouter Candidat"
    connect(ui->AJOUTER1, &QPushButton::clicked, this, &MainWindow::on_addCandidat_clicked);

    // Connecter le bouton d'insertion d'image
    /*connect(ui->INSERER1, &QPushButton::clicked, this, &MainWindow::insertImage);
    connect(ui->ANNULER3, &QPushButton::clicked, this, &MainWindow::cancelImage);*/
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_addCandidat_clicked()
{
    // Récupérer les valeurs des champs du formulaire
    QString cin = ui->L2->text().trimmed();
    QString nom = ui->L3->text().trimmed();
    QString prenom = ui->L4->text().trimmed();
    QString niveau = ui->L5->text().trimmed();
    QString email = ui->L6->text().trimmed();
    QString adresse = ui->L7->text().trimmed();
    QString numTel = ui->L8->text().trimmed();
    QString dateNaissance = ui->D1->text().trimmed();

    // Contrôle de saisie : vérifier si les champs obligatoires sont remplis
    if (cin.isEmpty() || nom.isEmpty() || prenom.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "CIN, Nom et Prénom sont obligatoires !");
        return;
    }

    // Contrôle de l'email (facultatif, mais vérification de base)
    QRegularExpression emailRegex(R"([\w\.]+@[\w]+\.[a-z]{2,3})");
    if (!email.isEmpty() && !emailRegex.match(email).hasMatch()) {
        QMessageBox::warning(this, "Erreur", "L'adresse email est invalide !");
        return;
    }


    // Vérifier que le numéro de téléphone (facultatif) est valide
    QRegularExpression phoneRegex(R"(^\+?[0-9]{10,15}$)");
    if (!numTel.isEmpty() && !phoneRegex.match(numTel).hasMatch()) {
        QMessageBox::warning(this, "Erreur", "Le numéro de téléphone est invalide !");
        return;
    }


    // Préparer la requête pour insérer le candidat dans la base de données
    QSqlQuery query;
    query.prepare("INSERT INTO CANDIDATS (CIN_CANDIDAT, NOM_CANDIDAT, PRENOM_CANDIDAT, NIVEAU_SCOLAIRE, "
                  "DATE_DE_NAISSANCE, ADRESSE, NUMTEL, EMAIL) "
                  "VALUES (:cin, :nom, :prenom, :niveau, TO_DATE(:date_naissance, 'YYYY-MM-DD'), :adresse, :numtel, :email)");

    // Lier les valeurs aux paramètres de la requête
    query.bindValue(":cin", cin);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":niveau", niveau);
    query.bindValue(":date_naissance", dateNaissance);
    query.bindValue(":adresse", adresse);
    query.bindValue(":numtel", numTel);
    query.bindValue(":email", email);

    // Exécuter la requête
    if (query.exec()) {
        QMessageBox::information(this, "Succès", "Candidat ajouté avec succès !");
        //clearForm();  // Optionnel : Effacer les champs après l'ajout
    } else {
        QMessageBox::critical(this, "Erreur", "Erreur lors de l'ajout du candidat : " + query.lastError().text());
    }
}

void MainWindow::on_MODIFIERC_clicked()
{
    QString id = ui->L2->text().trimmed();  // ID_
    QString cin = ui->L3->text().trimmed(); // CIN_C

    // Vérification de base : l'ID ou le CIN doivent être présents
    if (id.isEmpty() && cin.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "L'ID ou le CIN du candidat est requis !");
        return;
    }

    // Récupérer les autres valeurs du formulaire
    QString nom = ui->L4->text().trimmed();
    QString prenom = ui->L5->text().trimmed();
    QString niveau = ui->L6->text().trimmed();
    QString email = ui->L7->text().trimmed();
    QString adresse = ui->L8->text().trimmed();
    QString numTel = ui->L9->text().trimmed();
    QString dateNaissance = ui->D1->text().trimmed();

    // Vérification de l'email (facultatif, mais validation basique)
    QRegularExpression emailRegex(R"([\w\.]+@[\w]+\.[a-z]{2,3})");
    if (!email.isEmpty() && !emailRegex.match(email).hasMatch()) {
        QMessageBox::warning(this, "Erreur", "L'adresse email est invalide !");
        return;
    }

    // Vérification du numéro de téléphone (facultatif, mais validation basique)
    QRegularExpression phoneRegex(R"(^\+?[0-9]{10,15}$)");
    if (!numTel.isEmpty() && !phoneRegex.match(numTel).hasMatch()) {
        QMessageBox::warning(this, "Erreur", "Le numéro de téléphone est invalide !");
        return;
    }

    // Préparation de la requête de mise à jour
    QSqlQuery query;
    query.prepare(R"(
        UPDATE CANDIDATS
        SET NOM_CANDIDAT = :nom,
            PRENOM_CANDIDAT = :prenom,
            NIVEAU_SCOLAIRE = :niveau,
            DATE_DE_NAISSANCE = TO_DATE(:date_naissance, 'YYYY-MM-DD'),
            ADRESSE = :adresse,
            NUMTEL = :numtel,
            EMAIL = :email
        WHERE CIN_CANDIDAT = :cin OR ID_ = :id
    )");

    // Lier les valeurs aux paramètres de la requête
    query.bindValue(":id", id);
    query.bindValue(":cin", cin);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":niveau", niveau);
    query.bindValue(":date_naissance", dateNaissance);
    query.bindValue(":adresse", adresse);
    query.bindValue(":numtel", numTel);
    query.bindValue(":email", email);

    // Exécuter la requête
    if (query.exec()) {
        QMessageBox::information(this, "Succès", "Candidat modifié avec succès !");
        //clearForm();  // Optionnel : Effacer les champs après la modification
    } else {
        QMessageBox::critical(this, "Erreur", "Erreur lors de la modification : " + query.lastError().text());
    }
}

// Fonction pour annuler l'ajout ou la modification d'un candidat
void MainWindow::on_ANNULER1_clicked()
{
    // Réinitialiser les champs du formulaire d'ajout ou de modification
    ui->L2->clear();
    ui->L3->clear();
    ui->L4->clear();
    ui->L5->clear();
    ui->L6->clear();
    ui->L7->clear();
    ui->L8->clear();
    ui->D1->clear();
    ui->IMAGE->clear(); // Effacer l'image affichée

    QMessageBox::information(this, "Action annulée", "Ajout ou modification du candidat annulée !");
}

void MainWindow::on_RECHERCHER_clicked()
{
    QString critere = ui->CHERCHERC->text();

    if (critere.isEmpty()) {
        QMessageBox::warning(this, "Recherche", "Veuillez entrer un critère de recherche.");
        return;
    }

    QSqlQuery query;
    query.prepare(R"(
        SELECT * FROM clients
        WHERE
            ID_C LIKE :critere OR
            CIN_C LIKE :critere OR
            Nom_C LIKE :critere OR
            Prenom_C LIKE :critere OR
            Niveau_C LIKE :critere OR
            Email_C LIKE :critere OR
            Adresse_C LIKE :critere OR
            Tel_C LIKE :critere OR
            ID_Etabliss LIKE :critere
    )");

    query.bindValue(":critere", "%" + critere + "%");

    if (!query.exec()) {
        QMessageBox::critical(this, "Erreur", "Échec de la recherche dans la base de données.");
        return;
    }

    ui->TABLEC->setRowCount(0);  // Clear table

    int row = 0;
    while (query.next()) {
        ui->TABLEC->insertRow(row);
        for (int col = 0; col < query.record().count(); ++col) {
            ui->TABLEC->setItem(row, col, new QTableWidgetItem(query.value(col).toString()));
        }
        row++;
    }

    if (row == 0) {
        QMessageBox::information(this, "Résultat", "Aucun candidat trouvé.");
    }
}

// Fonction pour annuler la recherche d'un candidat
void MainWindow::on_ANNULER2_clicked()
{
    // Réinitialiser le champ de recherche
    ui->CHERCHERC->clear();

    // Vider la table de résultats de recherche
    ui->TABLEC->setRowCount(0);

    QMessageBox::information(this, "Action annulée", "Recherche annulée !");
}

void MainWindow::on_SUPPRIMER_clicked()
{
    QString id = ui->L10->text().trimmed();  // ID_C
    QString cin = ui->L11->text().trimmed(); // CIN_C

    // Vérifier si l'ID ou le CIN sont renseignés
    if (id.isEmpty() && cin.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "L'ID ou le CIN du candidat est requis pour la suppression !");
        return;
    }

    // Confirmation de la suppression
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmation", "Êtes-vous sûr de vouloir supprimer ce candidat ?",
                                  QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::No) {
        return;
    }

    // Préparation de la requête de suppression
    QSqlQuery query;
    query.prepare(R"(
        DELETE FROM CANDIDATS
        WHERE CIN_CANDIDAT = :cin OR ID_CANDIDAT = :id
    )");

    // Lier les valeurs aux paramètres de la requête
    query.bindValue(":id", id);
    query.bindValue(":cin", cin);

    // Exécuter la requête
    if (query.exec()) {
        QMessageBox::information(this, "Succès", "Candidat supprimé avec succès !");
        //clearForm();  // Optionnel : Effacer les champs après suppression
    } else {
        QMessageBox::critical(this, "Erreur", "Erreur lors de la suppression : " + query.lastError().text());
    }
}
// Fonction pour annuler la suppression d'un candidat
void MainWindow::on_ANNULER5_clicked()
{
    // Réinitialiser les champs du formulaire de suppression
    ui->L10->clear(); // ID_C
    ui->L11->clear(); // CIN_C

    QMessageBox::information(this, "Annulation", "Suppression annulée !");
}


void MainWindow::exportToPDF(QTableWidget* TABLEC)
{
    QString fileName = QFileDialog::getSaveFileName(this, "Exporter en PDF", "", "Fichiers PDF (*.pdf)");
    if (fileName.isEmpty()) return;

    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(fileName);

    QTextDocument doc;
    QTextCursor cursor(&doc);

    QTextTableFormat tableFormat;
    tableFormat.setBorder(1);
    tableFormat.setBorderStyle(QTextFrameFormat::BorderStyle_Solid);
    tableFormat.setCellPadding(4);
    tableFormat.setCellSpacing(0);
    tableFormat.setAlignment(Qt::AlignCenter);

    QTextTable *textTABLEC = cursor.insertTable(TABLEC->rowCount() + 1, TABLEC->columnCount(), tableFormat);

    // En-têtes
    for (int col = 0; col < TABLEC->columnCount(); ++col) {
        cursor.insertText(TABLEC->horizontalHeaderItem(col)->text());
        cursor.movePosition(QTextCursor::NextCell);
    }

    // Données
    for (int row = 0; row < TABLEC->rowCount(); ++row) {
        for (int col = 0; col < TABLEC->columnCount(); ++col) {
            QTableWidgetItem* item = TABLEC->item(row, col);
            cursor.insertText(item ? item->text() : "");
            cursor.movePosition(QTextCursor::NextCell);
        }
    }

    doc.print(&printer);
}

void MainWindow::exportToExcel(QTableWidget* TABLEC)
{
    QString fileName = QFileDialog::getSaveFileName(this, "Exporter en Excel", "", "Fichiers CSV (*.csv)");
    if (fileName.isEmpty()) return;

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) return;

    QTextStream stream(&file);

    // En-têtes
    for (int col = 0; col < TABLEC->columnCount(); ++col) {
        stream << TABLEC->horizontalHeaderItem(col)->text();
        if (col < TABLEC->columnCount() - 1) stream << ",";
    }
    stream << "\n";

    // Données
    for (int row = 0; row < TABLEC->rowCount(); ++row) {
        for (int col = 0; col < TABLEC->columnCount(); ++col) {
            QTableWidgetItem* item = TABLEC->item(row, col);
            stream << (item ? item->text() : "");
            if (col < TABLEC->columnCount() - 1) stream << ",";
        }
        stream << "\n";
    }

    file.close();
}

// Ajouter cette fonction pour trier les données
void MainWindow::sortTableData()
{
    // Récupérer la valeur sélectionnée dans le QComboBox
    QString sortBy = ui->TRIERC->currentText();

    int column = -1;

    // Déterminer la colonne selon le critère de tri
    if (sortBy == "ID") {
        column = 0;  // Par exemple, la colonne "ID" est à l'indice 0
    } else if (sortBy == "CIN") {
        column = 1;  // La colonne "CIN" est à l'indice 1
    } else if (sortBy == "NOM") {
        column = 2;  // La colonne "NOM" est à l'indice 2
    } else if (sortBy == "PRENOM") {
        column = 3;  // La colonne "PRENOM" est à l'indice 3
    } else if (sortBy == "DATE DE NAISSANCE") {
        column = 4;  // La colonne "DATE DE NAISSANCE" est à l'indice 4
    }

    // Vérifier que la colonne est valide
    if (column != -1) {
        ui->TABLEC->sortItems(column); // Trie les données par la colonne sélectionnéeui->tableMedecins->sortItems(column);

    }
}

// Fonction pour annuler l'action de tri
void MainWindow::on_ANNULER6_clicked()
{
    // Réinitialiser le QComboBox pour le critère de tri
    ui->TRIERC->setCurrentIndex(0);  // Par exemple, remettre le premier critère (ou aucune sélection)

    // Afficher tous les candidats sans tri
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("SELECT * FROM candidats");  // Remplacer par la table exacte si besoin
    query.exec();
    model->setQuery(query);
    //ui->TABLEC->setModel(model);  // Réinitialiser le tableau à son état initial sans tri
}

/*void MainWindow::afficherStatistiques() {
    afficherTotalCandidats();
    afficherParNiveau();
    afficherParAge();
    afficherParVille();
    afficherNaissanceParAnnee();
}

void MainWindow::afficherTotalCandidats() {
    QSqlQuery query("SELECT COUNT(*) FROM CANDIDAT");
    if (query.next()) {
        int total = query.value(0).toInt();
        QMessageBox::information(this, "Statistique", "Nombre total de candidats : " + QString::number(total));
    }
}

void MainWindow::afficherParNiveau() {
    QSqlQuery query("SELECT Niveau_C, COUNT(*) FROM CANDIDAT GROUP BY Niveau_C");
    QMap<QString, int> stats;
    while (query.next()) {
        stats[query.value(0).toString()] = query.value(1).toInt();
    }
    QChartView* chartView = creerPieChart("Répartition par niveau", stats);
    chartView->setParent(ui->widgetNiveau); // Crée un QWidget dans l'UI nommé widgetNiveau
}

void MainWindow::afficherParAge() {
    QSqlQuery query("SELECT Date_Naiss_C FROM CANDIDAT");
    QDate currentDate = QDate::currentDate();
    QMap<QString, int> groupes;

    while (query.next()) {
        QDate naissance = query.value(0).toDate();
        int age = naissance.daysTo(currentDate) / 365;

        QString groupe;
        if (age < 18) groupe = "<18";
        else if (age <= 25) groupe = "18-25";
        else if (age <= 35) groupe = "26-35";
        else if (age <= 45) groupe = "36-45";
        else groupe = "46+";

        groupes[groupe]++;
    }

    QChartView* chartView = creerBarChart("Répartition par âge", groupes);
    chartView->setParent(ui->widgetAge); // Crée un QWidget dans l'UI nommé widgetAge
}

void MainWindow::afficherParVille() {
    QSqlQuery query("SELECT Adresse_C FROM CANDIDAT");
    QMap<QString, int> villes;

    while (query.next()) {
        QString adresse = query.value(0).toString();
        QString ville = adresse.section(',', -1).trimmed(); // supposer ville = dernier mot
        villes[ville]++;
    }

    QChartView* chartView = creerPieChart("Répartition par ville", villes);
    chartView->setParent(ui->widgetVille); // Crée un QWidget dans l'UI nommé widgetVille
}

void MainWindow::afficherNaissanceParAnnee() {
    QSqlQuery query("SELECT Date_Naiss_C FROM CANDIDAT");
    QMap<QString, int> annees;

    while (query.next()) {
        QDate date = query.value(0).toDate();
        QString annee = QString::number(date.year());
        annees[annee]++;
    }

    QChartView* chartView = creerBarChart("Naissances par année", annees);
    chartView->setParent(ui->widgetNaissance); // Crée un QWidget dans l'UI nommé widgetNaissance
}

QChartView* MainWindow::creerBarChart(const QString& titre, const QMap<QString, int>& donnees) {
    QBarSeries *series = new QBarSeries();
    QBarSet *set = new QBarSet(titre);

    QStringList categories;
    for (auto it = donnees.begin(); it != donnees.end(); ++it) {
        *set << it.value();
        categories << it.key();
    }

    series->append(set);
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle(titre);
    chart->createDefaultAxes();

    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chart->setAxisX(axisX, series);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    return chartView;
}

QChartView* MainWindow::creerPieChart(const QString& titre, const QMap<QString, int>& donnees) {
    QPieSeries *series = new QPieSeries();
    for (auto it = donnees.begin(); it != donnees.end(); ++it) {
        series->append(it.key(), it.value());
    }

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle(titre);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    return chartView;
}*/


// Fonction pour sélectionner et afficher l'image
void MainWindow::on_IMAGE_clicked()
{
    QString imagePath = QFileDialog::getOpenFileName(this, "Sélectionner une image", "", "Images (*.png *.jpg *.bmp)");

    if (!imagePath.isEmpty()) {
        QPixmap pixmap(imagePath);
        ui->IMAGE->setPixmap(pixmap.scaled(ui->IMAGE->size(), Qt::KeepAspectRatio));  // Afficher l'image dans le QLabel
    }
}

// Fonction pour insérer l'image dans la base de données


// Fonction pour annuler l'action


/*void MainWindow::on_INSERER2_clicked() {
    QString fileName = QFileDialog::getOpenFileName(this, "Choisir une image de carte d'identité", "", "Images (*.png *.jpg *.jpeg)");

    if (fileName.isEmpty()) return;

    // OCR
    QString texteOCR = ocrCarteIdentite(fileName);
    if (texteOCR.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Impossible de lire la carte.");
        return;
    }

    // Traduction
    QString texteTraduit = traduireTexte(texteOCR);

    // Remplissage
    remplirChamps(texteTraduit);
}

void MainWindow::on_ANNULER4_clicked() {
    ui->ID_C->clear();
    ui->CIN_C->clear();
    ui->Nom_C->clear();
    ui->Prenom_C->clear();
    ui->Niveau_C->clear();
    ui->Email_C->clear();
    ui->Adresse_C->clear();
    ui->Tel_C->clear();
    ui->ID_Etabliss->clear();
    ui->Date_Naiss_C->setDate(QDate(2000, 1, 1));
}

QString MainWindow::ocrCarteIdentite(const QString &imagePath) {
    tesseract::TessBaseAPI tess;
    if (tess.Init(NULL, "eng+fra")) {
        return "";
    }

    tess.SetImage(imagePath.toStdString().c_str());
    QString result = QString::fromUtf8(tess.GetUTF8Text());
    tess.End();
    return result;
}

QString MainWindow::traduireTexte(const QString &texte) {
    // À remplacer par une vraie API ou dictionnaire multilingue si besoin
    QString traduit = texte;
    traduit.replace("Name", "Nom");
    traduit.replace("First Name", "Prenom");
    traduit.replace("Date of Birth", "Date de Naissance");
    traduit.replace("Address", "Adresse");
    traduit.replace("Level", "Niveau");
    // etc...
    return traduit;
}

void MainWindow::remplirChamps(const QString &texteOCR) {
    QStringList lignes = texteOCR.split('\n', Qt::SkipEmptyParts);
    for (const QString &ligne : lignes) {
        if (ligne.contains("ID")) ui->ID_C->setText(ligne.section(':', 1).trimmed());
        if (ligne.contains("CIN")) ui->CIN_C->setText(ligne.section(':', 1).trimmed());
        if (ligne.contains("Nom")) ui->Nom_C->setText(ligne.section(':', 1).trimmed());
        if (ligne.contains("Prenom")) ui->Prenom_C->setText(ligne.section(':', 1).trimmed());
        if (ligne.contains("Niveau")) ui->Niveau_C->setText(ligne.section(':', 1).trimmed());
        if (ligne.contains("Email")) ui->Email_C->setText(ligne.section(':', 1).trimmed());
        if (ligne.contains("Adresse")) ui->Adresse_C->setText(ligne.section(':', 1).trimmed());
        if (ligne.contains("Telephone") || ligne.contains("Tel")) ui->Tel_C->setText(ligne.section(':', 1).trimmed());
        if (ligne.contains("Etablissement")) ui->ID_Etabliss->setText(ligne.section(':', 1).trimmed());
        if (ligne.contains("Naissance")) {
            QString dateStr = ligne.section(':', 1).trimmed();
            QDate date = QDate::fromString(dateStr, "dd/MM/yyyy");
            if (date.isValid()) ui->Date_Naiss_C->setDate(date);
        }
    }
}*/

void MainWindow::on_ANNULER3_clicked()
{
    ui->L12->clear();  // Effacer l'ID
    ui->IMAGE->clear(); // Effacer l'image affichée
}


void MainWindow::on_INSERER1_clicked()
{
    // Vérifier si l'image est sélectionnée
    QString id = ui->L12->text().trimmed();
    if (id.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez saisir un ID valide pour le candidat !");
        return;
    }

    // Récupérer l'image depuis le QLabel
    QPixmap pixmap = ui->IMAGE->pixmap();
    if (pixmap.isNull()) {
        QMessageBox::warning(this, "Erreur", "Veuillez sélectionner une image !");
        return;
    }

    // Convertir l'image en format binaire (pour l'insérer dans la base)
    QByteArray byteArray;
    QBuffer buffer(&byteArray);
    buffer.open(QIODevice::WriteOnly);
    pixmap.save(&buffer, "PNG");

    // Préparer la requête pour insérer l'image dans la base de données
    QSqlQuery query;
    query.prepare("UPDATE CANDIDATS SET IMAGE = :image WHERE ID_CANDIDAT = :id");
    query.bindValue(":id", id);
    query.bindValue(":image", byteArray);

    // Exécuter la requête
    if (query.exec()) {
        QMessageBox::information(this, "Succès", "L'image a été insérée avec succès !");
        ui->L12->clear();  // Effacer l'ID
        ui->IMAGE->clear(); // Effacer l'image affichée
    } else {
        QMessageBox::critical(this, "Erreur", "Erreur lors de l'insertion de l'image : " + query.lastError().text());
    }
}

