QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    character.cpp \
    consumable.cpp \
    dead.cpp \
    inventory.cpp \
    item.cpp \
    main.cpp \
    gui.cpp \
    map.cpp \
    room.cpp \
    win.cpp \
    zorkul.cpp

HEADERS += \
    character.h \
    consumable.h \
    dead.h \
    gui.h \
    inventory.h \
    item.h \
    map.h \
    room.h \
    win.h \
    zorkul.h

FORMS += \
    dead.ui \
    gui.ui \
    inventory.ui \
    map.ui \
    win.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc

SUBDIRS += \

DISTFILES += \
