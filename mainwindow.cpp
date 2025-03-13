#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    afficherCentres();

    // Connexion du bouton "Ajouter" au slot
    connect(ui->btnAjouter, &QPushButton::clicked, this, &MainWindow::ajouterCentre);
    // Connexion de l'evenement clicked de QTreeWidget au slot
    connect(ui->treeWidget_Centre, &QTreeWidget::itemClicked, this, &MainWindow::on_treeWidget_Centre_itemClicked);

    connect(ui->btnModifier, &QPushButton::clicked, this, &MainWindow::modifierCentre);
    connect(ui->btnSupprimer, &QPushButton::clicked, this, &MainWindow::supprimerCentre);

}

MainWindow::~MainWindow()
{
    delete ui;
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
        } else {
            QMessageBox::critical(this, "Erreur", "Échec de la suppression !");
        }
    }
}
