TEMPLATE = app
TARGET = JeuDuPendu
QT += core \
    gui
HEADERS += O_SDO/observateur.h \
    O_SDO/sujetDObservation.h \
    moteur/pendu.h \
    jeudupendu.h
SOURCES += main.cpp \
    jeudupendu.cpp
FORMS += jeudupendu.ui
RESOURCES += 
