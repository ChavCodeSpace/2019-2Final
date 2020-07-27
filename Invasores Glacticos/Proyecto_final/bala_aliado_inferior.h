#ifndef BALA_ALIADO_INFERIOR_H
#define BALA_ALIADO_INFERIOR_H

#include <QObject>
#include <QGraphicsRectItem>
#include <math.h>
#include <QTimer>
#include "panel.h"
#include "player.h"

//Clase de la bala del aliado inferior derecho
class Bala_aliado_inferior: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Bala_aliado_inferior(double px, double py);
    void detener();

public slots:
    void move();

private:
    double fi, w, alfa, delta, posx, posy;
    QTimer *b_a_timer;

};

#endif // BALA_ALIADO_INFERIOR_H
