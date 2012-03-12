#include "dialogueconfiguration.h"

DialogueConfiguration::DialogueConfiguration(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.sbNbLettres, SIGNAL(valueChanged(int)), this, SLOT(setVie(int)));
}

QString DialogueConfiguration::getNomFichier() const {
	return this->nomFichier;
}

unsigned DialogueConfiguration::getVie() const {
	return this->vie;
}



DialogueConfiguration::~DialogueConfiguration()
{

}

void DialogueConfiguration::naviguer() {
	this->nomFichier = QFileDialog::getOpenFileName(this, "Choisir un fichier de mots", QDir::currentPath());

	if(nomFichier != "") {
		ui.lbNomFichier->setText(QFileInfo(nomFichier).fileName());
	} else {
		ui.lbNomFichier->setText("(rien)");
	}
}
void DialogueConfiguration::setVie(int vie) {
	if(vie < 0 || vie > 12)
		throw("Nombre de vie doit être compris entre 0 et 12.");

	this->vie = vie;
}
