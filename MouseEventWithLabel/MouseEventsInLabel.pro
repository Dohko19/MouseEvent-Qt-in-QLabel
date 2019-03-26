#-------------------------------------------------
#
# Project created by QtCreator 2019-03-22T12:34:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MouseEventsInLabel
TEMPLATE = app


DEFINES += QT_DEPRECATED_WARNINGS



SOURCES += \
        main.cpp \
        mainwindow.cpp \
    my_qlabel.cpp

HEADERS += \
        mainwindow.h \
    my_qlabel.h

FORMS += \
        mainwindow.ui

QMAKE_CFLAGS_ISYSTEM = -I
QMAKE_CXXFLAGS += -std=gnu++14
