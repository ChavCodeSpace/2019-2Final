#ifndef DEFENSOR_H
#define DEFENSOR_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QTimer>
#include <QGraphicsScene>
#include "bullet_defensor.h"

//Clase del aliado defensor
class Defensor: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Defensor();
    void detener();

public slots:
    void move();

private:
    QTimer *timer;
    Bullet_defensor *bala;
};

#endif // DEFENSOR_H
