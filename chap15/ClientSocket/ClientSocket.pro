QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ClientSocket
TEMPLATE = app

TEMPLATE = app

SOURCES += main.cpp \
    clientsocket.cpp \
    tripserver.cpp

HEADERS += \
    clientsocket.h \
    tripserver.h

