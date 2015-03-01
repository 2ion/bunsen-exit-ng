#-------------------------------------------------
#
# Project created by QtCreator 2015-03-01T00:27:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = bunsen-exit-ng
TEMPLATE = app


SOURCES += main.cpp\
        ExitDialog.cpp \
    SettingsDialog.cpp \
    CISelection.cpp

HEADERS  += ExitDialog.h \
    SettingsDialog.h \
    CISelection.h

FORMS    += ExitDialog.ui \
    SettingsDialog.ui \
    CISelection.ui

RESOURCES += \
    Resources.qrc
