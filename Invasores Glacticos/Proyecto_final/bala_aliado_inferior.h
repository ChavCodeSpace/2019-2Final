#ifndef BALA_ALIADO_INFERIOR_H
#define BALA_ALIADO_INFERIOR_H

#include <QObject>
#include <QGraphicsRectItem>
#include <math.h>
#include <QTimer>
#include "panel.h"
#include "player.h"

class Bala_aliado_inferior: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Bala_aliado_inferior();
};

#endif // BALA_ALIADO_INFERIOR_H
