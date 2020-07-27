#include "bala_jugador.h"
#include <QDebug>

extern Panel *p;

//Balas de los jugadores
Bala_jugador::Bala_jugador(int t)
{
    setRect(0,0,30,10);

    QTimer *b_timer = new QTimer();
    //Dependiendo si es el jugador 1 o 2, se conecta el timer a una funcion de movimiento diferente.
    if (t == 1){
       connect(b_timer,SIGNAL(timeout()),this, SLOT(bullet_move_rigth()));//balas hacia la derecha
    }
    else if (t == 2){
        connect(b_timer,SIGNAL(timeout()),this, SLOT(bullet_move_left()));//balas hacia la izquierda
    }

    b_timer->start(50);
}

//Funcion del movimiento de la bala hacia la izquierda
void Bala_jugador::bullet_move_left()
{
    setPos(x()-40,y());
    //this->choque(1);
    if(this->pos().x()<0){
        scene()->removeItem(this);
        delete this;
        //qDebug() <<"se elimino la bala";
    }
    //Coliciones con los jugadores
    QList <QGraphicsItem *> colliding_items = collidingItems();
    for (int i=0, n=colliding_items.size(); i < n; i++){
        if (typeid (*(colliding_items[i])) == typeid (Player)){
           //Cuando las balas impactan, quitan vida y desaparecen
           p->decrease(2);
           scene()->removeItem(this);
           delete this;
        }
        //Si choca con un muro desaparece
        if (typeid (*(colliding_items[i])) == typeid (Wall)){
           scene()->removeItem(this);
           delete this;
        }
    }

}

//Funciones de Movimiento: Uniforme
//Funcion del movimiento de la bala hacia la derecha
void Bala_jugador::bullet_move_rigth()
{
    setPos(x()+40,y());
    //this->choque(2);
    if(this->pos().x()>770){
        scene()->removeItem(this);
        delete this;
        //qDebug() <<"se elimino la bala";
    }
    //Coliciones con los jugadores
    QList <QGraphicsItem *> colliding_items = collidingItems();
    for (int i=0, n=colliding_items.size(); i < n; i++){
        if (typeid (*(colliding_items[i])) == typeid (Player)){
           scene()->removeItem(this);
           delete this;
           p->decrease(1);
        }
        if (typeid (*(colliding_items[i])) == typeid (Wall)){
           scene()->removeItem(this);
           delete this;
        }
    }
}
