#ifndef ALIADO_INFERIOR_H
#define ALIADO_INFERIOR_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QTimer>
#include <QGraphicsScene>

class Aliado_inferior: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Aliado_inferior();

public slots:
    void move();
};

#endif // ALIADO_INFERIOR_H
