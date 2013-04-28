TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

# uncomment to unlock private member variables
DEFINES += UNLOCK_PRIVATE_VARIABLES

SOURCES += main.cpp \
    classwithprivatemembers.cpp

HEADERS += \
    classwithprivatemembers.h

OTHER_FILES += \
    README.md
