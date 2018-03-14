#-------------------------------------------------
#
# Project created by QtCreator 2018-02-05T22:01:38
#
#-------------------------------------------------

QT       += core gui \
            multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Project_maybe

TEMPLATE = app
CONFIG += c++11
CONFIG += resources_big
# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS
TRANSLATIONS += Project_ru.ts\
# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        secondwindow.cpp \
    dialog_for_upgrade.cpp \
    sqlite3.c \
    win_or_lose.cpp \
    name.cpp \
    start.cpp \
    language.cpp

HEADERS += \
       # mainwindow.h \
    secondwindow.h \
    dialog_for_upgrade.h \
    sqlite3.h \
    win_or_lose.h \
    name.h \
    start.h \
    language.h

FORMS += \
   #     mainwindow.ui \
    secondwindow.ui \
    dialog_for_upgrade.ui \
    win_or_lose.ui \
    name.ui \
    start.ui \
    language.ui

DISTFILES += \
    Enemys.db \
    Project_ru.ts \
    Enemys1.db \
    Project_ru.qm

RESOURCES += \
    resource.qrc\
