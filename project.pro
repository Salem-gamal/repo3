QT += core gui sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TicTacToe
TEMPLATE = app

SOURCES += main.cpp \
           logindialog.cpp \
           signupdialog.cpp \
           dbmanager.cpp

HEADERS += logindialog.h \
           signupdialog.h \
           dbmanager.h
