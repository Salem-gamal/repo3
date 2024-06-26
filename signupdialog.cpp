#include "signupdialog.h"
#include <QLabel>
#include <QMessageBox>
#include <QPushButton>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QSpacerItem>
#include <QSqlQuery>
#include <QSqlError>
#include <QCryptographicHash>

SignUpDialog::SignUpDialog(QWidget *parent) : QDialog(parent) {
    // Set window title
    setWindowTitle("Sign Up");

    // Set window size
    setFixedSize(600, 600);

    // Set up layout
    QVBoxLayout *layout = new QVBoxLayout(this);

    // Add spacer for top alignment
    layout->addItem(new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding));

    // Add username label and line edit
    QHBoxLayout *usernameLayout = new QHBoxLayout;
    QLabel *usernameLabel = new QLabel("Username:", this);
    usernameLabel->setStyleSheet("color: white;");
    usernameEdit = new QLineEdit(this);
    usernameEdit->setStyleSheet("background-color: #383838; color: white; border: 1px solid #555; font-size: 14px; padding: 4px;");
    usernameEdit->setMaximumWidth(200);
    usernameLayout->addWidget(usernameLabel);
    usernameLayout->addWidget(usernameEdit);
    layout->addLayout(usernameLayout);

    // Add password label and line edit
    QHBoxLayout *passwordLayout = new QHBoxLayout;
    QLabel *passwordLabel = new QLabel("Password:", this);
    passwordLabel->setStyleSheet("color: white;");
    passwordEdit = new QLineEdit(this);
    passwordEdit->setEchoMode(QLineEdit::Password);
    passwordEdit->setStyleSheet("background-color: #383838; color: white; border: 1px solid #555; font-size: 14px; padding: 4px;");
    passwordEdit->setMaximumWidth(200);
    passwordLayout->addWidget(passwordLabel);
    passwordLayout->addWidget(passwordEdit);
    layout->addLayout(passwordLayout);

    // Add sign up button
    QPushButton *signupButton = new QPushButton("Sign Up", this);
    signupButton->setStyleSheet("QPushButton { background-color: #FFA500; color: black; font-size: 14px; padding: 6px; }");
    signupButton->setMaximumWidth(150);
    connect(signupButton, &QPushButton::clicked, this, &SignUpDialog::signup);
    layout->addWidget(signupButton, 0, Qt::AlignHCenter);

    // Add spacer for bottom alignment
    layout->addItem(new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding));

    // Set layout
    setLayout(layout);

    // Set background image
    QPixmap bkgnd("E:\\2nd year 2nd term assignments\\tic_tac_toe_project\\qt_code\\tic-tac-toe-background1.jpg");
    if (!bkgnd.isNull()) {
        bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
        QPalette palette;
        palette.setBrush(QPalette::Window, bkgnd);
        this->setPalette(palette);
    }
}

void SignUpDialog::signup() {
    QString username = usernameEdit->text();
    QString password = passwordEdit->text();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Registration Failed", "Please enter both username and password.");
        return;
    }

    if (registerNewUser(username, password)) {
        emit registered(username);
        accept();
    } else {
        QMessageBox::warning(this, "Registration Failed", "Username already exists or an error occurred.");
    }
}

bool SignUpDialog::registerNewUser(const QString &username, const QString &password) {
    QSqlQuery query;

    // Check if username already exists
    query.prepare("SELECT username FROM Users WHERE username = :username");
    query.bindValue(":username", username);

    if (!query.exec() || query.next()) {
        return false; // Username exists or query failed
    }

    // Hash the password
    QString passwordHash = QString(QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256).toHex());

    // Insert the new user
    query.prepare("INSERT INTO Users (username, password_hash) VALUES (:username, :password_hash)");
    query.bindValue(":username", username);
    query.bindValue(":password_hash", passwordHash);

    if (!query.exec()) {
        qDebug() << "Database insert error: " << query.lastError();
        return false;
    }

    return true;
}
