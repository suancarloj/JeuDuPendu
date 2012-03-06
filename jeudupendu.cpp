#include "jeudupendu.h"

JeuDuPendu::JeuDuPendu(QWidget *parent)
    : QMainWindow(parent)
{
	ui.setupUi(this);

	action_Aide = new QAction("&Aide", ui.menubar);
	ui.menubar->addAction(action_Aide);

	ui.action_Nouveau->setShortcut(QKeySequence(tr("Ctrl+N")));
	ui.action_Fermer->setShortcut(QKeySequence(tr("Ctrl+F")));
	ui.action_Quitter->setShortcut(QKeySequence(tr("Ctrl+Q")));
	ui.action_Proposition->setShortcut(QKeySequence(tr("Ctrl+P")));
	ui.centralwidget->setVisible(false);

	this->creerAction();

}

void JeuDuPendu::creerAction() {
	connect(ui.action_Quitter, SIGNAL(triggered(bool)), qApp, SLOT(quit()));
	connect(ui.action_Nouveau, SIGNAL(triggered(bool)), this, SLOT(nouvellePartie()));
	connect(ui.action_Fermer, SIGNAL(triggered(bool)), this, SLOT(fermerPartie()));
	connect(ui.action_Proposition, SIGNAL(triggered(bool)), this, SLOT(observateurProposition(bool)));
	connect(ui.actionP_otence, SIGNAL(triggered(bool)), this, SLOT(observateurPotence(bool)));
	connect(this->action_Aide, SIGNAL(triggered(bool)), this, SLOT(afficherAide()));
}

void JeuDuPendu::nouvellePartie() const {
	ui.centralwidget->setVisible(true);
}

void JeuDuPendu::fermerPartie() const {

}

void JeuDuPendu::observateurProposition(bool obs) const {

}
void JeuDuPendu::observateurPotence(bool obs) const {

}
void JeuDuPendu::afficherAide() const {
	QString titre("Aide");
	QString corps("<html><div>Ce jeu du pendu vous permet de choisir :<ul><li>Le nombre de lettres erronées permises;</li><li>Le fichier dans lequel le mot à trouver est puisé.</li></ul>Notez que si vous choisissez un nombre de vies initiallement différent de 6, la vue potence n'est pas dispossible.<br /><br />Veillez à ce que le fichier ne contienne pas de ligne vide sauf pour le terminer.<br /><p style='width: 100%; text-align: right; font-weight: bold;'>Bon amusement !</p></div></html>");

	QMessageBox::information(const_cast<JeuDuPendu *>(this), titre, corps );
}
JeuDuPendu::~JeuDuPendu()
{

}
