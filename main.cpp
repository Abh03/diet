#include "dietplan.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    dietplan w;
    w.show();
    return a.exec();
}
