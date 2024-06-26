#include "history.h"
#include <QLabel>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

History::History(QWidget *parent) : QWidget(parent) {
    // Create the text edit widget to display history
    setWindowTitle("History");
    setFixedSize(600, 600);

    // Layout setup
    layout = new QVBoxLayout(this);

    QLabel *titleLabel = new QLabel("User History", this);
    QFont titleFont("Arial", 30, QFont::Bold);
    titleLabel->setFont(titleFont);
    titleLabel->setStyleSheet("color: orange;");
    layout->addWidget(titleLabel);

    historyTextEdit = new QTextEdit(this);
    historyTextEdit->setReadOnly(true);
    layout->addWidget(historyTextEdit);

    buttonback = new QPushButton("Back", this);
    buttonback->setStyleSheet("QPushButton { background-color: #FFA500; color: black; font-size: 14px; padding: 6px; }");
    buttonback->setMaximumWidth(200);
    connect(buttonback, &QPushButton::clicked, this, &History::back_clicked);
    layout->addWidget(buttonback);

    // Set the layout for the history window
    setLayout(layout);
}

void History::displayUserHistory(const QString &username) {
    QSqlQuery query;
    query.prepare("SELECT game_result, opponent_type, symbol, game_timestamp, game_state FROM History WHERE username = :username ORDER BY game_timestamp DESC");
    query.bindValue(":username", username);

    if (!query.exec()) {
        qDebug() << "Database query error: " << query.lastError();
        return;
    }

    QString history;
    while (query.next()) {
        QString gameResult = query.value(0).toString();
        QString opponentType = query.value(1).toString();
        QString symbol = query.value(2).toString();
        QString timestamp = query.value(3).toString();
        QString gameState = query.value(4).toString();

        history += QString("Result: %1, Opponent: %2, Symbol: %3, Date: %4\nFinal State: %5\n\n")
                           .arg(gameResult, opponentType, symbol, timestamp, gameState);
    }

    historyTextEdit->setPlainText(history);
}

void History::back_clicked() {
    emit back();
    close();
}
