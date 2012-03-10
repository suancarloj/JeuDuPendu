#include "jeudupendu.h"

#include <QtGui>
#include <QApplication>

int main(int argc, char *argv[])
{
	int n;
    QApplication a(argc, argv);
    JeuDuPendu w;
    w.show();
    return a.exec();
}
