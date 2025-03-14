#ifndef ENSEIGNANT_H
#define ENSEIGNANT_H

#include <QString>
#include <QSqlQueryModel>

class Enseignant {
private:
    int id;
    QString nom;
    QString prenom;
    QString matiere;
    QString email;
    QString telephone;
    QString role;

public:
    // Constructeurs
    Enseignant();
    Enseignant(int id);
    Enseignant(int id, const QString& nom, const QString& prenom, const QString& matiere, const QString& email, const QString& telephone, const QString& role);

    // Getters
    int getId() const;
    QString getNom() const;
    QString getPrenom() const;
    QString getMatiere() const;
    QString getEmail() const;
    QString getTelephone() const;
    QString getRole() const;

    // Setters
    void setId(int id);
    void setNom(const QString& nom);
    void setPrenom(const QString& prenom);
    void setMatiere(const QString& matiere);
    void setEmail(const QString& email);
    void setTelephone(const QString& telephone);
    void setRole(const QString& role);

    // Validation des données
    bool validateData() const;

    // Opérations sur la base de données
    bool addEnseignant();
    bool updateEnseignant();
    QSqlQueryModel* displayEnseignants();
    bool deleteEnseignant(int id);
};

#endif // ENSEIGNANT_H
