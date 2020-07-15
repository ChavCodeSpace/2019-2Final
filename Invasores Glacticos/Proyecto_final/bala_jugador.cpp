#include "bala_jugador.h"
#include <QDebug>

Bala_jugador::Bala_jugador()
{
    setRect(0,0,30,10);

    QTimer *b_timer = new QTimer();
    connect(b_timer,SIGNAL(timeout()),this, SLOT(bullet_move()));

    b_timer->start(50);
}

void Bala_jugador::bullet_move()
{
    setPos(x()+40,y());
    if(this->pos().x()>770){
        scene()->removeItem(this);
        delete this;
        //qDebug() <<"se elimino la bala";
    }
}
