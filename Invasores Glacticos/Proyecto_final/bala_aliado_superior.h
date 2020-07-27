#ifndef BALA_ALIADO_SUPERIOR_H
#define BALA_ALIADO_SUPERIOR_H

#include <QObject>
#include <QGraphicsRectItem>
#include <math.h>
#include <QTimer>
#include "panel.h"
#include "player.h"

//Clase del aliado superior izquierdo
class Bala_aliado_superior: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Bala_aliado_superior(double px, double py);
    void detener();

public slots:
    void move();

private:
    double g = 9.8;
    double delta = 0.1;
    double posy, posx, ang, vel, vel_x, vel_y;
    QTimer *b_a_timer;
};

#endif // BALA_ALIADO_SUPERIOR_H
