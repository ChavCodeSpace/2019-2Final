#ifndef ALIADO_SUPERIOR_H
#define ALIADO_SUPERIOR_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QTimer>
#include <QGraphicsScene>
#include "bala_aliado_superior.h"

class Aliado_superior: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Aliado_superior();

public slots:
    void move();
};

#endif // ALIADO_SUPERIOR_H
