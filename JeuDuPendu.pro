TEMPLATE = app
TARGET = JeuDuPendu
QT += core \
    gui
HEADERS += ObservateurProposition.h \
    dialogueconfiguration.h \
    O_SDO/observateur.h \
    O_SDO/sujetDObservation.h \
    moteur/pendu.h \
    jeudupendu.h
SOURCES += ObservateurProposition.cpp \
    dialogueconfiguration.cpp \
    main.cpp \
    moteur/pendu.cpp \
    O_SDO/sujetDObservation.cpp \
    jeudupendu.cpp
FORMS += dialogueconfiguration.ui \
    jeudupendu.ui
RESOURCES += 
