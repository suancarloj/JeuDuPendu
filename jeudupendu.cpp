#include "jeudupendu.h"

JeuDuPendu::JeuDuPendu(QWidget *parent)
    : QMainWindow(parent), obsPro(0)
{
	ui.setupUi(this);

	action_Aide = new QAction("&Aide", ui.menubar);
	ui.menubar->addAction(action_Aide);

	ui.action_Nouveau->setShortcut(QKeySequence(tr("Ctrl+N")));
	ui.action_Fermer->setShortcut(QKeySequence(tr("Ctrl+F")));
	ui.action_Quitter->setShortcut(QKeySequence(tr("Ctrl+Q")));
	ui.action_Proposition->setShortcut(QKeySequence(tr("Ctrl+P")));
	ui.centralwidget->setVisible(false);
	ui.cbLettres->setCurrentIndex(-1);

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

void JeuDuPendu::nouvellePartie() {
	DialogueConfiguration dialogueConfiguration((QWidget *) this);
	int retour = dialogueConfiguration.exec();

	if(retour == QDialog::Rejected) return;

	try {
		this->pendu = new Pendu(dialogueConfiguration.getNomFichier().toStdString().c_str(), dialogueConfiguration.getVie());
	} catch(std::string & er) {
		QMessageBox::warning(this, "Erreur création nouvelle partie :", er.c_str());
	}

	connect(ui.cbLettres, SIGNAL(activated(const QString &)), this, SLOT(lettreSelectionnee(const QString &)));

	ui.centralwidget->setVisible(true);
	ui.action_Nouveau->setDisabled(true);
	ui.action_Fermer->setEnabled(true);
	ui.menu_Observateur->setEnabled(true);
}

void JeuDuPendu::fermerPartie() {

	if(this->pendu) {
		delete pendu;
		pendu = 0;
	}

	disconnect(ui.cbLettres, SIGNAL(activated(QString &)),this, SLOT(lettreSelectionnee(const QString &)));	ui.centralwidget->setVisible(false);
	ui.action_Nouveau->setEnabled(true);
	ui.action_Fermer->setDisabled(true);
	ui.menu_Observateur->setDisabled(true);
}

void JeuDuPendu::observateurProposition(bool actif) {
	if(actif) {
		if(this->obsPro == 0) {
			this->obsPro = new ObservateurProposition(this->pendu);
			connect(this->obsPro,SIGNAL(masque()), this, SLOT(decocherMenuProposition()));
		}
		this->obsPro->show();
	} else {
		this->obsPro->hide();
	}
}
void JeuDuPendu::observateurPotence(bool obs) {

}
void JeuDuPendu::afficherAide() {
	QString titre("Aide");
	QString corps("<html><div>Ce jeu du pendu vous permet de choisir :<ul><li>Le nombre de lettres erronées permises;</li><li>Le fichier dans lequel le mot à trouver est puisé.</li></ul>Notez que si vous choisissez un nombre de vies initiallement différent de 6, la vue potence n'est pas dispossible.<br /><br />Veillez à ce que le fichier ne contienne pas de ligne vide sauf pour le terminer.<br /><p style='width: 100%; text-align: right; font-weight: bold;'>Bon amusement !</p></div></html>");

	QMessageBox::information(this, titre, corps );
}

void JeuDuPendu::lettreSelectionnee(const QString & lettre) {

	try {

	} catch (std::string & er) {
		QMessageBox::warning(this, "Erreur proposition :", er.c_str());
	}

}
void JeuDuPendu::decocherMenuProposition() {
	ui.action_Proposition->setChecked(false);
}
JeuDuPendu::~JeuDuPendu()
{

}
