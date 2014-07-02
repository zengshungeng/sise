#-------------------------------------------------
#
# Project created by QtCreator 2014-06-28T15:22:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SISE
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    logindialog.cpp \
    aboutdialog.cpp \
    
HEADERS  += mainwindow.h \
    logindialog.h \
    aboutdialog.h \

FORMS    += mainwindow.ui \
    logindialog.ui \
    aboutdialog.ui

RESOURCES += \
    images/mainwindow.qrc \
    images/twg_retina_icon/icon.qrc
