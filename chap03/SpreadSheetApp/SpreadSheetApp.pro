#-------------------------------------------------
#
# Project created by QtCreator 2016-01-18T21:18:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SpreadSheetApp
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    finddialog.cpp \
    gotocelldialog.cpp

HEADERS  += mainwindow.h \
    finddialog.h \
    gotocelldialog.h

FORMS    += mainwindow.ui \
    gotocelldialog.ui

RESOURCES = spreadsheet.qrc
