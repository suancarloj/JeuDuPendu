#ifndef JEUDUPENDU_H
#define JEUDUPENDU_H

#include <QMainWindow>
#include <QMessageBox>
#include <QCloseEvent>
#include "ui_jeudupendu.h"
#include "dialogueconfiguration.h"
#include "moteur/pendu.h"
#include "O_SDO/sujetDObservation.h"

#include "ObservateurProposition.h"

class JeuDuPendu : public QMainWindow
{
    Q_OBJECT

public:
    JeuDuPendu(QWidget *parent = 0);
    void creerAction();
    ~JeuDuPendu();

private:
    Ui::JeuDuPenduClass ui;
    QAction * action_Aide;
    Pendu * pendu;
    ObservateurProposition * obsPro;


private slots:
	void nouvellePartie();
	void fermerPartie();
	void observateurProposition(bool);
	void observateurPotence(bool);
	void afficherAide();
	void lettreSelectionnee(const QString &);
	void decocherMenuProposition();

};

#endif // JEUDUPENDU_H
