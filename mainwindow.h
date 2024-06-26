#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class DBManager;
class TicTacToe1;
class TicTacToe2;
class ConfirmationDialog;
class Menu;
class PlayAgainDialog;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onMenuOptionSelected(int option);
    void onGameModeSelected(int mode);
    void onGameEnded();
    void onPlayAgainSelected();

private:
    Ui::MainWindow *ui;
    DBManager *dbManager;
    TicTacToe1 *tictactoe1;
    TicTacToe2 *tictactoe2;
    ConfirmationDialog *confirmationDialog;
    Menu *menuDialog;
    PlayAgainDialog *playAgainDialog;
};

#endif // MAINWINDOW_H
