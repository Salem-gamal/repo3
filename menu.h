#ifndef MENU_H
#define MENU_H

#include <QDialog>

class QPushButton;
class QVBoxLayout;
class QLabel;

class Menu : public QDialog {
    Q_OBJECT

public:
    Menu(QWidget *parent = nullptr);

signals:
    void menuOptionSelected(int option); // Signal to indicate the selected menu option: 0 for Play, 1 for History

private slots:
    void on_buttonplay_clicked();
    void on_buttonhistory_clicked();

private:
    QPushButton *buttonplay;
    QPushButton *buttonhistory;
    QVBoxLayout *layout;
};

#endif // MENU_H
