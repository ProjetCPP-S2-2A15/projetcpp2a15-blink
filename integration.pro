QT       += core gui

TARGET = integration
TEMPLATE = app

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets quickwidgets

QT       += core gui sql
QT += location positioning
QT += printsupport
QT += serialport
QT += core serialport sql
QT       += core gui sql charts network

CONFIG += c++11
DEFINES += QT_DEPRECATED_WARNINGS
CONFIG += lrelease
CONFIG += embed_translations
CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    aimanager.cpp \
    arduino.cpp \
    centre.cpp \
    chatbotwindow.cpp \
    connection.cpp \
    enseignant.cpp \
    etablissement.cpp \
    exam.cpp \
    main.cpp \
    mainwindow.cpp \
    smtpclient.cpp

HEADERS += \
    aimanager.h \
    arduino.h \
    centre.h \
    chatbotwindow.h \
    connection.h \
    enseignant.h \
    etablissement.h \
    exam.h \
    mainwindow.h \
    smtpclient.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    qml.qrc

