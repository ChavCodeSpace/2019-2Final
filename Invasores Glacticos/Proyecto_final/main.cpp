#include "login.h"
#include "game.h"

#include <QApplication>

//Game *game;//Objeto global para poderlo usar en otras clases

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Login w;
    //w.show();
    Game g;
    g.show();
    return a.exec();
}
