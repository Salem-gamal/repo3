#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

class DBManager {
public:
    static bool initialize() {
        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("localhost");
        db.setDatabaseName("tictactoe");
        db.setUserName("root"); // Use your database username
        db.setPassword("password"); // Use your database password

        if (!db.open()) {
            qDebug() << "Database error occurred: " << db.lastError();
            return false;
        }

        return true;
    }
};

#endif // DBMANAGER_H
