#include "bala_jugador.h"
#include <QDebug>
#include <QMediaPlayer>

extern Panel *p;//Objeto global del panel principal del juego

//Balas de los jugadores
Bala_jugador::Bala_jugador(int t)
{
    //setRect(0,0,30,10);
    QMediaPlayer *bala_sonido = new QMediaPlayer();

    QTimer *b_timer = new QTimer();
    //Dependiendo si es el jugador 1 o 2, se conecta el timer a una funcion de movimiento diferente,
    //reproduce un sonido diferente y pone una imagen diferente.
    if (t == 1){
       connect(b_timer,SIGNAL(timeout()),this, SLOT(bullet_move_rigth()));//balas hacia la derecha
       setPixmap(QPixmap(":/images/Bala terrestre.png"));//Dibuja la bala
       bala_sonido->setMedia(QUrl("qrc:/sounds/bullet blast.mp3"));//reproduce el sonido
       bala_sonido->play();
    }
    else if (t == 2){
        connect(b_timer,SIGNAL(timeout()),this, SLOT(bullet_move_left()));//balas hacia la izquierda
        setPixmap(QPixmap(":/images/Bala invasora.png"));
        bala_sonido->setMedia(QUrl("qrc:/sounds/laser blast.mp3"));
        bala_sonido->play();
    }

    b_timer->start(50);
}

//Funcion del movimiento de la bala hacia la izquierda
void Bala_jugador::bullet_move_left()
{
    QMediaPlayer *sonido_choque = new QMediaPlayer();

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
           sonido_choque->setMedia(QUrl("qrc:/sounds/explocion.mp3"));
           sonido_choque->play();
           scene()->removeItem(this);
           delete this;
        }
        //Si choca con un muro desaparece
        if (typeid (*(colliding_items[i])) == typeid (Wall)){
           sonido_choque->setMedia(QUrl("qrc:/sounds/choques.mp3"));
           sonido_choque->play();
           scene()->removeItem(this);
           delete this;
        }
    }

}

//Funciones de Movimiento: Uniforme
//Funcion del movimiento de la bala hacia la derecha
void Bala_jugador::bullet_move_rigth()
{
    QMediaPlayer *sonido_choque = new QMediaPlayer();//sonido de fondo

    setPos(x()+40,y());
    //Cuando la bala sale de la escena se elimina
    if(this->pos().x()>770){
        scene()->removeItem(this);
        delete this;
        //qDebug() <<"se elimino la bala";
    }
    //Coliciones con los jugadores
    QList <QGraphicsItem *> colliding_items = collidingItems();
    for (int i=0, n=colliding_items.size(); i < n; i++){
        //Cuando choca con jugadores se elimina
        if (typeid (*(colliding_items[i])) == typeid (Player)){
           scene()->removeItem(this);
           sonido_choque->setMedia(QUrl("qrc:/sounds/explocion.mp3"));
           sonido_choque->play();
           delete this;
           p->decrease(1);
        }
        //Cuando choca con un obstaculo se elimina
        if (typeid (*(colliding_items[i])) == typeid (Wall)){
           sonido_choque->setMedia(QUrl("qrc:/sounds/choques.mp3"));
           sonido_choque->play();
           scene()->removeItem(this);
           delete this;
        }
    }
}
