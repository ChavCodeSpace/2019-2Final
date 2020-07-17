#ifndef BALA_JUGADOR_H
#define BALA_JUGADOR_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QTimer>
#include "panel.h"
#include "player.h"

class Bala_jugador: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Bala_jugador(int t);

    void choque(int p);
public slots:
    void bullet_move_rigth();
    void bullet_move_left();

};

#endif // BALA_JUGADOR_H
