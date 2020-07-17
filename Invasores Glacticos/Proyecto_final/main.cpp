#include "login.h"
#include "panel.h"

#include <QApplication>

Panel *p;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login w;
    w.show();
    return a.exec();
}
