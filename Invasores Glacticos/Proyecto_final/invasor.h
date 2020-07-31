#ifndef INVASOR_H
#define INVASOR_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QGraphicsScene>
#include "proyectil_invasor.h"

//Clase del aliado invasor
class Invasor: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Invasor();//constructor
    void detener();

public slots:
    void move();

private:
    QTimer *timer;
    Proyectil_invasor *bala;//Objeto para la bala del invasor
};

#endif // INVASOR_H
