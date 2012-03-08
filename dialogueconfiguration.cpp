#include "dialogueconfiguration.h"

DialogueConfiguration::DialogueConfiguration(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
}
void DialogueConfiguration::naviguer() {
	nomFichier = QFileDialog::getOpenFileName(this, "Choisir un fichier de mots", QDir::currentPath());

	if(nomFichier != "") {
		ui.lbNomFichier->setText(QFileInfo(nomFichier).fileName());
	} else {
		ui.lbNomFichier->setText("(rien)");
	}
}

unsigned int DialogueConfiguration::getVie() const {
	return this->vie;
}

void DialogueConfiguration::setVie(int vie) {
	if(vie < 0 || vie > 12)
		throw("Nombre de vie doit être compris entre 0 et 12.");

	this->vie = vie;
}

DialogueConfiguration::~DialogueConfiguration()
{

}
