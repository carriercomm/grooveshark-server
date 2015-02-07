#-------------------------------------------------
#
# Project created by QtCreator 2013-11-09T00:40:27
#
#-------------------------------------------------

QT       += core network multimedia

QT       -= gui

TARGET   = grooveshark
CONFIG   += console
CONFIG   += c++11
CONFIG   -= app_bundle
CONFIG   += release
TEMPLATE = app

CONFIG(debug, debug|release) {
QMAKE_CXXFLAGS_DEBUG += -g3 -O0
message("DEBUG!")
} else {
DEFINES += QT_NO_DEBUG
DEFINES += QT_NO_DEBUG_OUTPUT
message("RELEASE!")
}

SOURCES += main.cpp \
    lib/grooveshark/qplayer.cpp \
    lib/grooveshark/qgroovesession.cpp \
    lib/grooveshark/qrequest.cpp \
    qserver.cpp \
    qconfig.cpp \
    qsongsqueue.cpp \
    qserverchildthread.cpp

HEADERS += \
    lib/grooveshark/qplayer.h \
    lib/grooveshark/qgroovesession.h \
    lib/grooveshark/qrequest.h \
    qserver.h \
    qconfig.h \
    qsongsqueue.h \
    qserverchildthread.h
