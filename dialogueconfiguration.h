#ifndef DIALOGUECONFIGURATION_H
#define DIALOGUECONFIGURATION_H

#include <QtGui/QDialog>
#include "ui_dialogueconfiguration.h"

class DialogueConfiguration : public QDialog
{
    Q_OBJECT

public:
    DialogueConfiguration(QWidget *parent = 0);
    ~DialogueConfiguration();

private:
    Ui::DialogueConfigurationClass ui;
};

#endif // DIALOGUECONFIGURATION_H
