#-------------------------------------------------
#
# Project created by QtCreator 2016-08-26T13:52:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GBASpriteConverter
TEMPLATE = app
INCLUDEPATH += include include/GSC/Forms


SOURCES += \ 
        src/Forms/MainWindow.cpp \
        src/main.cpp

HEADERS  += \ 
        include/GSC/Forms/MainWindow.hpp

FORMS    += \ 
        resources/ui/MainWindow.ui

RESOURCES += \
    resources/images/images.qrc
