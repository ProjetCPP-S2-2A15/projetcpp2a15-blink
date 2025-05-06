QT       += core gui sql charts network
QT       += printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    centre.cpp \
    connection.cpp \
    logindialog.cpp \
    main.cpp \
    mainwindow.cpp \
    smtpclient.cpp

HEADERS += \
    centre.h \
    connection.h \
    logindialog.h \
    mainwindow.h \
    smtpclient.h

FORMS += \
    logindialog.ui \
    mainwindow.ui

TRANSLATIONS += \
    Rimberio2_fr_FR.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ressources.qrc
