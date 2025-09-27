
QT += core gui widgets multimedia network

TEMPLATE = app
TARGET = DominoGame
CONFIG += c++17

# Подавить предупреждения о неиспользуемых параметрах
QMAKE_CXXFLAGS += -Wno-unused-parameter

SOURCES += \
    basicButtons.cpp \
    beginButton.cpp \
    dominoLogic.cpp \
    gameMain.cpp \
    playerLogic.cpp \
    randoomizerLogic.cpp \
    main.cpp \
    sandboxLogic.cpp

HEADERS += \
    basicButtons.h \
    beginButton.h \
    dominoLogic.h \
    gameMain.h \
    playerLogic.h \
    randoomizerLogic.h \
    sandboxLogic.h

DISTFILES += \
    extra/2.png \
    extra/3.png \
    extra/4.png \
    extra/5.png \
    extra/6.png \
    extra/domino.wav \
    extra/huh.dib \
    extra/huh.png \
    extra/test.png \
    extra/wood.jpg \
    extra/robotCav.png \

RESOURCES += resources.qrc \
    resouces.qrc
