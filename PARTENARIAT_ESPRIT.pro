#-------------------------------------------------
#
# Project created by QtCreator 2015-07-06T16:02:44
#
#-------------------------------------------------

QT       += core gui sql printsupport

TARGET = PARTENARIAT_ESPRIT
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    tabwidget.cpp \
    connection.cpp \
    dombase.cpp \
    fichemobilite.cpp \
    qcustomplot.cpp \
    statistiquesmobilite.cpp \
    fichepartenariat.cpp \
    notificationpartenariat.cpp \
    fichepoc.cpp \
    ficheinstitution.cpp \
    logfile.cpp

HEADERS  += mainwindow.h \
    tabwidget.h \
    defs.h \
    connection.h \
    dombase.h \
    fichemobilite.h \
    qcustomplot.h \
    statistiquesmobilite.h \
    fichepartenariat.h \
    notificationpartenariat.h \
    fichepoc.h \
    ficheinstitution.h \
    logfile.h

FORMS    += mainwindow.ui \
    tabwidget.ui \
    fichemobilite.ui \
    statistiquesmobilite.ui \
    fichepartenariat.ui \
    notificationpartenariat.ui \
    fichepoc.ui \
    ficheinstitution.ui
