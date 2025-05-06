#include "chatbotwindow.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QDebug>

ChatbotWindow::ChatbotWindow(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Chatbot Enseignant");
    aiManager = new AIManager();


    // Chat history
    chatDisplay = new QTextEdit(this);
    chatDisplay->setReadOnly(true);

    // Input + Button
    lineEdit = new QLineEdit(this);
    btnChatbot = new QPushButton("Envoyer", this);

    // Bot response label
    label_13 = new QLabel("Réponse du bot ici.", this);
    label_13->setWordWrap(true);
    label_13->setStyleSheet("color: blue; font-weight: bold; padding: 6px;");

    // Connect events
    connect(btnChatbot, &QPushButton::clicked, this, &ChatbotWindow::sendMessage);
    connect(lineEdit, &QLineEdit::returnPressed, this, &ChatbotWindow::sendMessage);

    // Layouts
    QHBoxLayout *inputLayout = new QHBoxLayout;
    inputLayout->addWidget(lineEdit);
    inputLayout->addWidget(btnChatbot);

    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->addWidget(chatDisplay);
    mainLayout->addLayout(inputLayout);
    mainLayout->addWidget(label_13);

    setLayout(mainLayout);
}

void ChatbotWindow::sendMessage()
{
    QString userText = lineEdit->text().trimmed();
    if (userText.isEmpty()) return;

    // Show user message
    chatDisplay->append("👤: " + userText);

    // Get bot response
    QString response = getBotResponse(userText);

    // Show bot message in chat and label
    chatDisplay->append("🤖: " + response);
    label_13->setText("🤖: " + response);

    // Clear input
    lineEdit->clear();
}

QString ChatbotWindow::getBotResponse(const QString &userInput)
{
    QString input = userInput.toLower();

    if (input.contains("ajouter") && input.contains("enseignant"))
        return "Va dans 'Gestion des Enseignants' puis clique sur 'Ajouter'.";
    if (input.contains("emploi du temps"))
        return "Consulte ton tableau de bord pour voir l'emploi du temps.";
    if (input.contains("admin") || input.contains("administrateur"))
        return "Tu peux contacter l'admin à admin@example.com.";

    return "Désolé, je n'ai pas compris. Peux-tu reformuler ?";
}
