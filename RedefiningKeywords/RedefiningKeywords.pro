TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

# uncomment to unlock private member variables
DEFINES += UNLOCK_PRIVATE_MEMBERS

SOURCES += main.cpp \
    classwithprivatemembers.cpp

HEADERS += \
    classwithprivatemembers.h

OTHER_FILES += \
    README.md
