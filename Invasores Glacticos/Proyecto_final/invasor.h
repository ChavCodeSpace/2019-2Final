#ifndef INVASOR_H
#define INVASOR_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QTimer>
#include <QGraphicsScene>
#include "proyectil_invasor.h"

//Clase del aliado invasor
class Invasor: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Invasor();
    void detener();

public slots:
    void move();

private:
    QTimer *timer;
    Proyectil_invasor *bala;
};

#endif // INVASOR_H