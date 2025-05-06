#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>
#include <QLabel>
#include <QPixmap>
#include <QWidget>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    ajouterArrierePlan();

    // Style arrondi pour les champs d'entrée
    QString inputStyle = "QLineEdit {"
                         "  border: 2px solid #3498db;"
                         "  border-radius: 10px;"
                         "  padding: 6px;"
                         "}";

    ui->usernameEdit->setStyleSheet(inputStyle);
    ui->passwordEdit->setStyleSheet(inputStyle);
    this->setWindowTitle("Authentification");
    ui->passwordEdit->setEchoMode(QLineEdit::Password);  // Masquer le mot de passe
    connect(ui->buttonBox, &QDialogButtonBox::accepted, this, &LoginDialog::verif_Login_Password);
    connect(ui->buttonBox, &QDialogButtonBox::rejected, this, &LoginDialog::reject);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

QString LoginDialog::getUsername() const {
    return ui->usernameEdit->text();
}

QString LoginDialog::getPassword() const {
    return ui->passwordEdit->text();
}

void LoginDialog::verif_Login_Password()
{
    QString username = getUsername();
    QString password = getPassword();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Champs requis", "Veuillez remplir tous les champs.");
        return; // Ne ferme pas le dialog
    }

    if (username == "admin" && password == "1234") {
        accept(); // Authentifié → ferme avec QDialog::Accepted
    } else {
        QMessageBox::warning(this, "Erreur", "Nom d'utilisateur ou mot de passe incorrect.");
        return;
    }
}
void LoginDialog::ajouterArrierePlan()
{
    QPixmap bg(":/images/background.jpg");
    QPixmap scaledBg = bg.scaled(800, 600, Qt::KeepAspectRatioByExpanding); // Ajuste ici si besoin

    QLabel *backgroundLabel = new QLabel(this);
    backgroundLabel->setPixmap(scaledBg);
    backgroundLabel->setGeometry(0, 0, 800, 600);
    backgroundLabel->lower(); // Le met en arrière-plan
    backgroundLabel->setScaledContents(true);
}
