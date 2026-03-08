QT += core gui widgets network
# CONFIG += static
# RESOURCES += images.qrc
# INCLUDEPATH += "D:\Qt\6.9.2\msvc2022_64\include"
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
# CONFIG += static
# QT += core gui network
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
# set(CMAKE_PREFIX_PATH "D:/Qt/6.9.2/msvc2022_64")

SOURCES += \
    funds.cpp \
    logindialog.cpp \
    main.cpp \
    mainwindow.cpp \
    number.cpp \
    recharge.cpp \
    subwindow.cpp \
    tcpclient.cpp

HEADERS += \
    funds.h \
    logindialog.h \
    mainwindow.h \
    number.h \
    recharge.h \
    subwindow.h \
    tcpclient.h

FORMS += \
    logindialog.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc \
    resources.qrc


# qmake "CONFIG+=release" # Release 模式
# QTDIR = D:/Qt/6.9.2/msvc2022_64
QMAKE_PROJECT_DEPTH = 0
