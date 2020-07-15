#ifndef BALA_JUGADOR_H
#define BALA_JUGADOR_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QTimer>

class Bala_jugador: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Bala_jugador();
public slots:
    void bullet_move();
};

#endif // BALA_JUGADOR_H
