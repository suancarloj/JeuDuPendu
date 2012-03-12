/********************************************************************************
** Form generated from reading UI file 'dialogueconfiguration.ui'
**
** Created: Sun 11. Mar 17:23:29 2012
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGUECONFIGURATION_H
#define UI_DIALOGUECONFIGURATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogueConfigurationClass
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbFichier;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lbNomFichier;
    QPushButton *pbFichier;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbNbLettres;
    QSpacerItem *horizontalSpacer_3;
    QSpinBox *sbNbLettres;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pb_OK;
    QPushButton *pb_Annuler;

    void setupUi(QDialog *DialogueConfigurationClass)
    {
        if (DialogueConfigurationClass->objectName().isEmpty())
            DialogueConfigurationClass->setObjectName(QString::fromUtf8("DialogueConfigurationClass"));
        DialogueConfigurationClass->resize(328, 156);
        verticalLayout = new QVBoxLayout(DialogueConfigurationClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lbFichier = new QLabel(DialogueConfigurationClass);
        lbFichier->setObjectName(QString::fromUtf8("lbFichier"));
        QFont font;
        font.setPointSize(10);
        lbFichier->setFont(font);

        horizontalLayout_3->addWidget(lbFichier);

        horizontalSpacer_2 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        lbNomFichier = new QLabel(DialogueConfigurationClass);
        lbNomFichier->setObjectName(QString::fromUtf8("lbNomFichier"));
        lbNomFichier->setFont(font);

        horizontalLayout_3->addWidget(lbNomFichier);

        pbFichier = new QPushButton(DialogueConfigurationClass);
        pbFichier->setObjectName(QString::fromUtf8("pbFichier"));

        horizontalLayout_3->addWidget(pbFichier);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lbNbLettres = new QLabel(DialogueConfigurationClass);
        lbNbLettres->setObjectName(QString::fromUtf8("lbNbLettres"));
        lbNbLettres->setFont(font);

        horizontalLayout_2->addWidget(lbNbLettres);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        sbNbLettres = new QSpinBox(DialogueConfigurationClass);
        sbNbLettres->setObjectName(QString::fromUtf8("sbNbLettres"));
        sbNbLettres->setMaximum(12);
        sbNbLettres->setValue(6);

        horizontalLayout_2->addWidget(sbNbLettres);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 45, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(148, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pb_OK = new QPushButton(DialogueConfigurationClass);
        pb_OK->setObjectName(QString::fromUtf8("pb_OK"));

        horizontalLayout->addWidget(pb_OK);

        pb_Annuler = new QPushButton(DialogueConfigurationClass);
        pb_Annuler->setObjectName(QString::fromUtf8("pb_Annuler"));

        horizontalLayout->addWidget(pb_Annuler);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogueConfigurationClass);
        QObject::connect(pb_OK, SIGNAL(clicked()), DialogueConfigurationClass, SLOT(accept()));
        QObject::connect(pb_Annuler, SIGNAL(clicked()), DialogueConfigurationClass, SLOT(reject()));
        QObject::connect(sbNbLettres, SIGNAL(valueChanged(int)), DialogueConfigurationClass, SLOT(setVie(int)));
        QObject::connect(pbFichier, SIGNAL(clicked()), DialogueConfigurationClass, SLOT(naviguer()));

        QMetaObject::connectSlotsByName(DialogueConfigurationClass);
    } // setupUi

    void retranslateUi(QDialog *DialogueConfigurationClass)
    {
        DialogueConfigurationClass->setWindowTitle(QApplication::translate("DialogueConfigurationClass", "DialogueConfiguration", 0, QApplication::UnicodeUTF8));
        lbFichier->setText(QApplication::translate("DialogueConfigurationClass", "Fichier :", 0, QApplication::UnicodeUTF8));
        lbNomFichier->setText(QApplication::translate("DialogueConfigurationClass", "(rien)", 0, QApplication::UnicodeUTF8));
        pbFichier->setText(QApplication::translate("DialogueConfigurationClass", "Naviguer...", 0, QApplication::UnicodeUTF8));
        lbNbLettres->setText(QApplication::translate("DialogueConfigurationClass", "Nombre de lettres erron\303\251es tol\303\251r\303\251es :", 0, QApplication::UnicodeUTF8));
        pb_OK->setText(QApplication::translate("DialogueConfigurationClass", "&OK", 0, QApplication::UnicodeUTF8));
        pb_Annuler->setText(QApplication::translate("DialogueConfigurationClass", "&Annuler", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogueConfigurationClass: public Ui_DialogueConfigurationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGUECONFIGURATION_H
