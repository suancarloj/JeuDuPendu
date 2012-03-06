/********************************************************************************
** Form generated from reading UI file 'jeudupendu.ui'
**
** Created: Tue 6. Mar 11:18:20 2012
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JEUDUPENDU_H
#define UI_JEUDUPENDU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JeuDuPenduClass
{
public:
    QAction *action_Nouveau;
    QAction *action_Fermer;
    QAction *action_Proposition;
    QAction *actionP_otence;
    QAction *action_Quitter;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QMenuBar *menubar;
    QMenu *menu_Jeu;
    QMenu *menu_Observateur;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *JeuDuPenduClass)
    {
        if (JeuDuPenduClass->objectName().isEmpty())
            JeuDuPenduClass->setObjectName(QString::fromUtf8("JeuDuPenduClass"));
        JeuDuPenduClass->resize(400, 95);
        action_Nouveau = new QAction(JeuDuPenduClass);
        action_Nouveau->setObjectName(QString::fromUtf8("action_Nouveau"));
        action_Fermer = new QAction(JeuDuPenduClass);
        action_Fermer->setObjectName(QString::fromUtf8("action_Fermer"));
        action_Fermer->setEnabled(false);
        action_Proposition = new QAction(JeuDuPenduClass);
        action_Proposition->setObjectName(QString::fromUtf8("action_Proposition"));
        action_Proposition->setEnabled(true);
        actionP_otence = new QAction(JeuDuPenduClass);
        actionP_otence->setObjectName(QString::fromUtf8("actionP_otence"));
        actionP_otence->setEnabled(true);
        action_Quitter = new QAction(JeuDuPenduClass);
        action_Quitter->setObjectName(QString::fromUtf8("action_Quitter"));
        centralwidget = new QWidget(JeuDuPenduClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(188, 0));
        label->setMaximumSize(QSize(188, 16777215));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEnabled(true);
        comboBox->setMaximumSize(QSize(75, 16777215));

        horizontalLayout->addWidget(comboBox);

        JeuDuPenduClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(JeuDuPenduClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 20));
        menu_Jeu = new QMenu(menubar);
        menu_Jeu->setObjectName(QString::fromUtf8("menu_Jeu"));
        menu_Observateur = new QMenu(menubar);
        menu_Observateur->setObjectName(QString::fromUtf8("menu_Observateur"));
        menu_Observateur->setEnabled(false);
        JeuDuPenduClass->setMenuBar(menubar);
        statusbar = new QStatusBar(JeuDuPenduClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        JeuDuPenduClass->setStatusBar(statusbar);

        menubar->addAction(menu_Jeu->menuAction());
        menubar->addAction(menu_Observateur->menuAction());
        menu_Jeu->addAction(action_Nouveau);
        menu_Jeu->addAction(action_Fermer);
        menu_Jeu->addAction(action_Quitter);
        menu_Observateur->addAction(action_Proposition);
        menu_Observateur->addAction(actionP_otence);

        retranslateUi(JeuDuPenduClass);

        QMetaObject::connectSlotsByName(JeuDuPenduClass);
    } // setupUi

    void retranslateUi(QMainWindow *JeuDuPenduClass)
    {
        JeuDuPenduClass->setWindowTitle(QApplication::translate("JeuDuPenduClass", "Un jeu du pendu...", 0, QApplication::UnicodeUTF8));
        action_Nouveau->setText(QApplication::translate("JeuDuPenduClass", "&Nouveau", 0, QApplication::UnicodeUTF8));
        action_Fermer->setText(QApplication::translate("JeuDuPenduClass", "&Fermer", 0, QApplication::UnicodeUTF8));
        action_Proposition->setText(QApplication::translate("JeuDuPenduClass", "&Proposition", 0, QApplication::UnicodeUTF8));
        actionP_otence->setText(QApplication::translate("JeuDuPenduClass", "P&otence", 0, QApplication::UnicodeUTF8));
        action_Quitter->setText(QApplication::translate("JeuDuPenduClass", "&Quitter", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("JeuDuPenduClass", "Choisissez une lettre :", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("JeuDuPenduClass", "A", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("JeuDuPenduClass", "B", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("JeuDuPenduClass", "C", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("JeuDuPenduClass", "D", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("JeuDuPenduClass", "E", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("JeuDuPenduClass", "F", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("JeuDuPenduClass", "G", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("JeuDuPenduClass", "H", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("JeuDuPenduClass", "I", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("JeuDuPenduClass", "J", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("JeuDuPenduClass", "K", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("JeuDuPenduClass", "L", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("JeuDuPenduClass", "M", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("JeuDuPenduClass", "N", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("JeuDuPenduClass", "O", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("JeuDuPenduClass", "P", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("JeuDuPenduClass", "Q", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("JeuDuPenduClass", "R", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("JeuDuPenduClass", "S", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("JeuDuPenduClass", "T", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("JeuDuPenduClass", "U", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("JeuDuPenduClass", "V", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("JeuDuPenduClass", "W", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("JeuDuPenduClass", "X", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("JeuDuPenduClass", "Y", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("JeuDuPenduClass", "Z", 0, QApplication::UnicodeUTF8)
        );
        menu_Jeu->setTitle(QApplication::translate("JeuDuPenduClass", "&Jeu", 0, QApplication::UnicodeUTF8));
        menu_Observateur->setTitle(QApplication::translate("JeuDuPenduClass", "&Observateur", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class JeuDuPenduClass: public Ui_JeuDuPenduClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JEUDUPENDU_H
