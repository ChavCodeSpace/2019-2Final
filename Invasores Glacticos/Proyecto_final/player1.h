#ifndef PLAYER1_H
#define PLAYER1_H

#include <QObject>
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include "bala_jugador.h"

class Player1: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Player1();
    void keyPressEvent(QKeyEvent * event);
    //void keyPressEvent_player2(QKeyEvent * event);

    //void Movimiento_jugador1();
    //void Movimiento_jugador2();
};

#endif // PLAYER1_H
