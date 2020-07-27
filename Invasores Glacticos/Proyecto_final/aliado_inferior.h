#ifndef ALIADO_INFERIOR_H
#define ALIADO_INFERIOR_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QTimer>
#include <QGraphicsScene>
#include "bala_aliado_inferior.h"

//Clase de el aliado inferior derecho
class Aliado_inferior: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Aliado_inferior();
    void detener();

public slots:
    void move();

private:
    QTimer *timer;
    Bala_aliado_inferior *bala;
};

#endif // ALIADO_INFERIOR_H
