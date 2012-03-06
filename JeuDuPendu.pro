TEMPLATE = app
TARGET = JeuDuPendu
QT += core \
    gui
HEADERS += dialogueconfiguration.h \
    O_SDO/observateur.h \
    O_SDO/sujetDObservation.h \
    moteur/pendu.h \
    jeudupendu.h
SOURCES += dialogueconfiguration.cpp \
    main.cpp \
    jeudupendu.cpp
FORMS += dialogueconfiguration.ui \
    jeudupendu.ui
RESOURCES += 
