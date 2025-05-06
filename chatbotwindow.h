#ifndef CHATBOTWINDOW_H
#define CHATBOTWINDOW_H

#include <QWidget>
#include <QTextEdit>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include "aimanager.h"

class ChatbotWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ChatbotWindow(QWidget *parent = nullptr);

private slots:
    void sendMessage();

private:
    QTextEdit *chatDisplay;
    QLineEdit *lineEdit;        // Input field
    QPushButton *btnChatbot;    // Send button
    QLabel *label_13;           // Response display

    QString getBotResponse(const QString &userInput);
    AIManager *aiManager;
};

#endif // CHATBOTWINDOW_H
