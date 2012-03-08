#ifndef JEUDUPENDU_H
#define JEUDUPENDU_H

#include <QtGui/QMainWindow>
#include "ui_jeudupendu.h"
#include "dialogueconfiguration.h"
#include "moteur/pendu.h"
#include <QMessageBox>

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


private slots:
	void nouvellePartie() const;
	void fermerPartie() const;
	void observateurProposition(bool) const;
	void observateurPotence(bool) const;
	void afficherAide() const;

};

#endif // JEUDUPENDU_H
