#ifndef DIALOGUECONFIGURATION_H
#define DIALOGUECONFIGURATION_H

#include <QtGui/QDialog>
#include "ui_dialogueconfiguration.h"
#include <QFileDialog>
#include <QDir>

class DialogueConfiguration : public QDialog
{
    Q_OBJECT

public:
    DialogueConfiguration(QWidget *parent = 0);
    QString getNomFichier() const;
    unsigned int getVie() const;
    ~DialogueConfiguration();

private:
    Ui::DialogueConfigurationClass ui;
    QString nomFichier;
    unsigned int vie;


private slots:
	void naviguer();
	void setVie(int);
};
#endif // DIALOGUECONFIGURATION_H
