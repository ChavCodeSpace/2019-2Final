#ifndef ALIADO_SUPERIOR_H
#define ALIADO_SUPERIOR_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QTimer>
#include <QGraphicsScene>
#include "bala_aliado_superior.h"

//Clase del aliado superior izquierdo
class Aliado_superior: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Aliado_superior();
    void detener();

public slots:
    void move();

private:
    QTimer *timer;
    Bala_aliado_superior *bala;
};

#endif // ALIADO_SUPERIOR_H
