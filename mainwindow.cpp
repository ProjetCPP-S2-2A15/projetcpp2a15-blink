#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "exam.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QPdfWriter>
#include <QPainter>
#include <QFileDialog>
#include <QTableView>
#include <QDialog>
#include <QVBoxLayout>
#include <QTextEdit>
#include <arduino.h>
#include <QThread>  // Add this line


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    {
        ui->setupUi(this);
        int ret=A.connect_arduino(); // lancer la connexion à arduino
        switch(ret){
        case(0):qDebug()<< "arduino is available and connected to : "<< A.getarduino_port_name();
            break;
        case(1):qDebug() << "arduino is available but not connected to :" <<A.getarduino_port_name();
            break;
        case(-1):qDebug() << "arduino is not available";
        }
        QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label())); // permet de lancer
        //le slot update_label suite à la reception du signal readyRead (reception des données).
        A.sendExamsToArduino();
    }

    updateTable();

    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setSortingEnabled(true);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->niveauComboBox->addItems({"4eme", "6eme", "9eme"});
    ui->niveauComboBox1->addItems({"4eme", "6eme", "9eme"});
    ui->sessionComboBox->addItems({"Principale", "Rattrapage"});
    ui->sessionComboBox1->addItems({"Principale", "Rattrapage"});
    ui->comboBox_sort->addItems({"ID Asc", "ID Desc", "Nom Asc", "Nom Desc", "Date Asc", "Date Desc"});

    connect(ui->tableView, &QTableView::clicked, this, &MainWindow::on_tableView_clicked);
    connect(ui->ajouterButton, &QPushButton::clicked, this, &MainWindow::on_ajouterButton_clicked);
    connect(ui->ajouterButton1, &QPushButton::clicked, this, &MainWindow::on_ajouterButton1_clicked);
    connect(ui->supprimerButton, &QPushButton::clicked, this, &MainWindow::on_supprimerButton_clicked);
    connect(ui->chargerButton, &QPushButton::clicked, this, &MainWindow::on_chargerButton_clicked);
    connect(ui->rechercherButton, &QPushButton::clicked, this, &MainWindow::on_rechercherButton_clicked);
    connect(ui->comboBox_sort, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &MainWindow::on_comboBoxTri_currentIndexChanged);
    connect(ui->genererButton, &QPushButton::clicked, this, &MainWindow::on_genererButton_clicked);
    connect(ui->statshow, &QPushButton::clicked, this, &MainWindow::on_statshow_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateTable()
{
    QSqlQueryModel* model = Exam().afficher();
    qDebug() << "Rows in model:" << model->rowCount() << "Columns:" << model->columnCount();
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
}

void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    if (!index.isValid()) return;

    QString id = ui->tableView->model()->data(ui->tableView->model()->index(index.row(), 0)).toString();
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

void MainWindow::on_ajouterButton_clicked()
{
    QString nom = ui->lineEdit_nom->text().trimmed();
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
        ui->lineEdit_nom->clear();
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

void MainWindow::on_ajouterButton1_clicked()
{
    qDebug() << "on_ajouterButton1_clicked triggered";

    if (!ui->tableView->currentIndex().isValid()) {
        qDebug() << "No exam selected for modification";
        QMessageBox::critical(this, "Erreur", "Veuillez sélectionner un examen à modifier.");
        return;
    }

    QString id = ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->currentIndex().row(), 0)).toString();
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
    if (!ui->tableView->currentIndex().isValid()) {
        QMessageBox::critical(this, "Erreur", "Veuillez sélectionner un examen à supprimer.");
        return;
    }

    QString id = ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->currentIndex().row(), 0)).toString();

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

void MainWindow::on_chargerButton_clicked()
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
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
}

void MainWindow::on_comboBoxTri_currentIndexChanged(int index)
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
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
}

void MainWindow::on_genererButton_clicked()
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
    QAbstractItemModel* model = ui->tableView->model();
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
