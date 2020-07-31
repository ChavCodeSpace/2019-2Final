#ifndef DEFENSOR_H
#define DEFENSOR_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include "bullet_defensor.h"

//Clase del aliado defensor
class Defensor: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Defensor();
    void detener();

    //QList<Bullet_defensor *> getBalas() const;

public slots:
    void move();

private:
    QTimer *timer;
    Bullet_defensor *bala;

    //QList <Bullet_defensor *> balas;
};

#endif // DEFENSOR_H
