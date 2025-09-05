TEMPLATE = lib
CONFIG += plugin c++11
QT += core gui qml quick

TARGET = cutekeyboardplugin
DESTDIR = $$[QT_INSTALL_PLUGINS]/platforminputcontexts

HEADERS += \
    src/cutekeyboardplugin.h \
    src/cutekeyboardinputcontext.h

SOURCES += \
    src/cutekeyboardplugin.cpp \
    src/cutekeyboardinputcontext.cpp

DISTFILES += \
    src/cutekeyboard.json

# Install QML files
qml.files = qml/*
qml.path = $$[QT_INSTALL_QML]/CuteKeyboard
INSTALLS += qml
