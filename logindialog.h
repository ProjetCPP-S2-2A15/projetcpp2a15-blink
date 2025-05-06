#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();

    QString getUsername() const;
    QString getPassword() const;

private slots:
    void verif_Login_Password();

private:
    Ui::LoginDialog *ui;
    void ajouterArrierePlan();
};

#endif // LOGINDIALOG_H
