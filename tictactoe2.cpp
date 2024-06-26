#include "tictactoe2.h"
#include "dbmanager.h" // Include database manager

void TicTacToe2::cellClicked(int row, int col) {
    if (gameOver || board[row][col] != ' ') return;

    board[row][col] = currentPlayer;
    buttons[row][col]->setText(QString(currentPlayer));

    if (checkWin(currentPlayer)) {
        QMessageBox::information(this, "Winner", QString("%1 wins!").arg(currentPlayer));
        gameOver = true;
        emit gameEnded();

        // Store game result in the database
        DBManager::storeGameResult("Player vs Player", QString(currentPlayer));

        resetGame();
        close();
    }
    else if (checkDraw()) {
        QMessageBox::information(this, "Draw", "It's a draw!");
        gameOver = true;
        emit gameEnded();

        // Store game result in the database
        DBManager::storeGameResult("Player vs Player", "Draw");

        resetGame();
        close();
    }
    else {
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
}
