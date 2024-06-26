#ifndef PLAYAGAINDIALOG_H
#define PLAYAGAINDIALOG_H

#include <QDialog>
#include <QLabel>
class QPushButton;
class QVBoxLayout;

class PlayAgainDialog : public QDialog {
    Q_OBJECT

public:
    PlayAgainDialog(QWidget *parent = nullptr);

    void setMessage(const QString &message);

signals:
    void Yes();
    void No();

private slots:
    void yesClicked();
    void noClicked();

private:
    QLabel *messageLabel;
    QPushButton *yesButton;
    QPushButton *noButton;
    QVBoxLayout *layout;
};

#endif // PLAYAGAINDIALOG_H
