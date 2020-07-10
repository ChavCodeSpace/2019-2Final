#include "game.h"

//Universo del juego
Game::Game(QWidget *parent)
{
    scene = new  QGraphicsScene(0,0,1200,700);
    setScene(scene);


    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    setFixedSize(1200,700);

    show();

}

