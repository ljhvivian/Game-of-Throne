#-------------------------------------------------
#
# Project created by QtCreator 2018-04-17T13:10:05
#
#-------------------------------------------------

QT       += core gui
QT       += multimedia
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Bomber
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
    icon.cpp \
    rpgobj.cpp \
    character.cpp \
    world.cpp \
    weapon.cpp \
    bodyarmor.cpp \
    monster.cpp \
    player.cpp \
    fire.cpp \
    ice.cpp \
    bullet.cpp \
    bomb.cpp \
    notetable.cpp \
    gameworld1.cpp \
    fruit.cpp \
    poison.cpp \
    gameworld2.cpp \
    gameworld3.cpp \
    hello.cpp  \
    option.cpp  \
    ranking.cpp

HEADERS  += \
    icon.h \
    rpgobj.h \
    character.h \
    world.h \
    weapon.h \
    bodyarmor.h \
    monster.h \
    player.h \
    fire.h \
    ice.h \
    bullet.h \
    bomb.h \
    notetable.h \
    gameworld1.h \
    fruit.h \
    poison.h \
    gameworld2.h \
    gameworld3.h \
    hello.h  \
    option.h  \
    ranking.h

FORMS    += \
    gameworld1.ui \
    gameworld2.ui \
    gameworld3.ui \
    hello.ui  \
    option.ui  \
    ranking.ui

