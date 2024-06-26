#include <QApplication>
#include "tictactoe1.h"
#include "tictactoe2.h"
#include "dbmanager.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Initialize database
    if (!DBManager::initialize()) {
        qWarning() << "Failed to initialize database!";
        return -1;
    }

    // Create instances of the game modes
    TicTacToe1 aiGame;
    TicTacToe2 pvpGame;

    // Connect game end signals to store results in database
    QObject::connect(&aiGame, &TicTacToe1::gameEnded, [&](const QString &winner) {
        DBManager::storeGameResult("AI vs AI", winner);
    });

    QObject::connect(&pvpGame, &TicTacToe2::gameEnded, [&](const QString &winner) {
        DBManager::storeGameResult("Player vs Player", winner);
    });

    // Example usage: Start AI game
    aiGame.startGame(); // This will eventually call askDifficulty() and startRealGame()

    return app.exec();
}
