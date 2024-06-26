#include "PlayAgainDialog.h"
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QFont>

PlayAgainDialog::PlayAgainDialog(QWidget *parent) : QDialog(parent) {
    setWindowTitle("Game Over");
    setFixedSize(600, 600); // Set a fixed size for the window

    layout = new QVBoxLayout(this);

    QLabel *titleLabel = new QLabel("Play Again?", this);
    QFont titleFont("Arial", 30, QFont::Bold); // Set font and size for the title
    titleLabel->setFont(titleFont);
    titleLabel->setStyleSheet("color: orange;"); // Set text color to white
    layout->addWidget(titleLabel);

    yesButton = new QPushButton("Yes", this);
    yesButton->setStyleSheet("QPushButton { background-color: #FFA500; color: black; font-size: 14px; padding: 6px; }"); // Set button color to orange, text color to black, and adjust font size and padding
    yesButton->setMaximumWidth(200); // Set maximum width
    connect(yesButton, &QPushButton::clicked, this, &PlayAgainDialog::yesClicked);
    layout->addWidget(yesButton);

    noButton = new QPushButton("No", this);
    noButton->setStyleSheet("QPushButton { background-color: #FFA500; color: black; font-size: 14px; padding: 6px; }"); // Set button color to orange, text color to black, and adjust font size and padding
    noButton->setMaximumWidth(200); // Set maximum width
    connect(noButton, &QPushButton::clicked, this, &PlayAgainDialog::noClicked);
    layout->addWidget(noButton);

    messageLabel = new QLabel(this); // Initialize the message label
    layout->addWidget(messageLabel);

    setLayout(layout);
}

void PlayAgainDialog::setMessage(const QString &message) {
    messageLabel->setText(message);
}

void PlayAgainDialog::yesClicked() {
    emit Yes();
    close();
}

void PlayAgainDialog::noClicked() {
    emit No();
    close();
}
