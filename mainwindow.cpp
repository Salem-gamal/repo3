#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "confirmationdialog.h"
#include "menu.h"
#include "dbmanager.h"
#include "tictactoe1.h"
#include "tictactoe2.h"
#include "PlayAgainDialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , dbManager(new DBManager(this))
    , tictactoe1(nullptr)
    , tictactoe2(nullptr)
    , confirmationDialog(new ConfirmationDialog(this))
    , menuDialog(new Menu(this))
    , playAgainDialog(new PlayAgainDialog(this))
{
    ui->setupUi(this);

    // Connect the signal from the menu dialog to the slot in the main window
    connect(menuDialog, &Menu::menuOptionSelected, this, &MainWindow::onMenuOptionSelected);
    connect(confirmationDialog, &ConfirmationDialog::gameModeSelected, this, &MainWindow::onGameModeSelected);

    // Connect play again dialog signals
    connect(playAgainDialog, &PlayAgainDialog::Yes, this, &MainWindow::onPlayAgainSelected);
    connect(playAgainDialog, &PlayAgainDialog::No, this, &MainWindow::close);

    // Show the menu dialog
    menuDialog->exec();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete dbManager;
    delete tictactoe1;
    delete tictactoe2;
    delete confirmationDialog;
    delete menuDialog;
    delete playAgainDialog;
}

void MainWindow::onMenuOptionSelected(int option)
{
    if (option == 0) {
        // Show the confirmation dialog to select the game mode
        confirmationDialog->exec();
    } else if (option == 1) {
        // Show game history
        QVector<QVector<QString>> history = dbManager->getAllGameResults();
        QString historyString;
        for (const auto &row : history) {
            historyString += row[0] + " vs " + row[1] + ": " + row[2] + "\n";
        }
        QMessageBox::information(this, "Game History", historyString);
    }
}

void MainWindow::onGameModeSelected(int mode)
{
    if (mode == 0) {
        // Start 1 vs 1 game
        tictactoe2 = new TicTacToe2(this);
        tictactoe2->show();
        connect(tictactoe2, &TicTacToe2::gameEnded, this, &MainWindow::onGameEnded);
    } else if (mode == 1) {
        // Start 1 vs AI game
        tictactoe1 = new TicTacToe1(this);
        tictactoe1->show();
        connect(tictactoe1, &TicTacToe1::gameEnded, this, &MainWindow::onGameEnded);
    }
}

void MainWindow::onGameEnded()
{
    // Store the game result
    if (tictactoe2) {
        dbManager->storeGameResult("Player 1", "Player 2", "Draw");
        tictactoe2->close();
        delete tictactoe2;
        tictactoe2 = nullptr;
    }
    if (tictactoe1) {
        dbManager->storeGameResult("Player", "AI", "Draw");
        tictactoe1->close();
        delete tictactoe1;
        tictactoe1 = nullptr;
    }

    // Show play again dialog
    playAgainDialog->setMessage("Would you like to play again?");
    playAgainDialog->exec();
}

void MainWindow::onPlayAgainSelected()
{
    // Show the confirmation dialog to select the game mode again
    confirmationDialog->exec();
}
