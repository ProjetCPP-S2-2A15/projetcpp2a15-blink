#-------------------------------------------------
#
# Project created by QtCreator 2018-10-26T21:45:23
#
#-------------------------------------------------

QT       += core gui sql
QT += location positioning

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets quickwidgets

TARGET = Atelier_Connexion
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS
CONFIG += c++11

QT += printsupport

SOURCES += \
    etablissement.cpp \
    main.cpp \
    mainwindow.cpp \
    connection.cpp

HEADERS += \
    etablissement.h \
    mainwindow.h \
    connection.h

FORMS += \
    mainwindow.ui

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    qml.qrc
