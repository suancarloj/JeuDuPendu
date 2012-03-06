#include "jeudupendu.h"

#include <QtGui>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    JeuDuPendu w;
    w.show();
    return a.exec();
}
