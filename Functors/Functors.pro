TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    simplefunctor.cpp \
    functorwithstl.cpp

HEADERS += \
    simplefunctor.h \
    functorwithstl.h

OTHER_FILES += \
    README.md

