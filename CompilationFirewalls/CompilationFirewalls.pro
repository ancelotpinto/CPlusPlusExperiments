TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

# comment to privatize better matched among overloaded function
DEFINES += KEEP_FUNCTION_PUBLIC

# comment to unlock error condition of mismatched memory access
DEFINES += KEEP_CLASS_SIZE

SOURCES += main.cpp \
    sizeandlayout.cpp \
    functionresolution.cpp

OTHER_FILES += \
    README.md

HEADERS += \
    sizeandlayout.h \
    functionresolution.h

