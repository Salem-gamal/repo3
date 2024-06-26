#ifndef HISTORY_H
#define HISTORY_H

#include <QWidget>
#include <QTextEdit>
#include <QPushButton>
#include <QVBoxLayout>

class History : public QWidget {
    Q_OBJECT
public:
    explicit History(QWidget *parent = nullptr);
    void displayUserHistory(const QString &username);

signals:
    void back();

private slots:
    void back_clicked();

private:
    QTextEdit *historyTextEdit;
    QPushButton *buttonback;
    QVBoxLayout *layout;
};

#endif // HISTORY_H
