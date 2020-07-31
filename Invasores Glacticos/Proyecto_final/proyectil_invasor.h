#ifndef PROYECTIL_INVASOR_H
#define PROYECTIL_INVASOR_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsPixmapItem>
#include <math.h>
#include <QTimer>
#include <QMediaPlayer>
#include "panel.h"

//Clase de la bala del invasor
class Proyectil_invasor: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Proyectil_invasor(double px, double py);
    void detener();

public slots:
    void move();

private:
    //Atributos para el movimiento acelerado
    double fi, w, alfa, delta, posx, posy;
    QTimer *b_a_timer;//timer para el movimiento
    QMediaPlayer *sonido_choque;//musica de colision
};

#endif // PROYECTIL_INVASOR_H
