#include "login.h"
#include "panel.h"

#include <QApplication>

Panel *p;//Objeto global del panel principal del juego

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login w;
    w.show();
    return a.exec();
}
