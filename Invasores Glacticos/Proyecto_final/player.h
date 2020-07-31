#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsRectItem>
#include <QGraphicsPixmapItem>

//Clase de los jugadores del juego
class Player: public QGraphicsPixmapItem
{
public:
    Player(int t);
};

#endif // PLAYER_H
