#ifndef TICTACTOE1_H
#define TICTACTOE1_H

#include "tictactoe.h"
#include <QMessageBox>
#include <QLabel>
#include <QDebug>
#include <QDialog>
#include <QVBoxLayout>
#include <QRadioButton>
#include <QPushButton>

class DifficultyDialog : public QDialog {
    Q_OBJECT

public:
    explicit DifficultyDialog(QWidget *parent = nullptr);


signals:
    void difficultySelected(int difficulty);
    void easySelected();
    void mediumSelected();
    void hardSelected();

private slots:
    void selectEasy();
    void selectMedium();
    void selectHard();
    void back_clicked();


private:
    QVBoxLayout *layout;
    QRadioButton *easyButton;
    QRadioButton *mediumButton;
    QRadioButton *hardButton;
    QPushButton *buttonback;

};

class TicTacToe1 : public TicTacToe {
    Q_OBJECT

public:
    enum Difficulty { Easy, Medium, Hard };
    explicit TicTacToe1(QWidget *parent = nullptr);
    void setDifficulty(int difficulty);
    void startGame();  // تعريف الدالة هنا


protected:
    void cellClicked(int row, int col) override;
    bool checkWin(char player) override;
    bool checkDraw() override;

private slots:
    void askDifficulty();
    void startRealGame();
    void makeAIMove();
    int minimax(int depth, int maxDepth, bool maximizingPlayer);

signals:
    void gameEnded();

private:
    DifficultyDialog *difficultyDialog;
    int selectedDifficulty;
};

#endif // TICTACTOE1_H
