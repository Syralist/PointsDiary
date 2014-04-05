#-------------------------------------------------
#
# Project created by QtCreator 2014-04-05T14:17:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PointsDiary
TEMPLATE = app


SOURCES += main.cpp\
        pointsdiary.cpp

HEADERS  += pointsdiary.h

FORMS    += pointsdiary.ui

CONFIG += mobility
MOBILITY = 

ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android

OTHER_FILES += \
    android/AndroidManifest.xml \
    stylesheet.qss

RESOURCES += \
    Ressources.qrc

