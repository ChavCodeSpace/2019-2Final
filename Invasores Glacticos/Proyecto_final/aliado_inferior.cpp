#include "aliado_inferior.h"

Aliado_inferior::Aliado_inferior()
{
    setRect(0,0,30,70);

    QTimer *timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(1000);

}

void Aliado_inferior::move()
{
    setPos(x(),y()-70);
}
