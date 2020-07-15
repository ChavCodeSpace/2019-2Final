#include "player1.h"
#include <QDebug>

Player1::Player1()
{
    this->setRect(0,0,50,50);
}

void Player1::keyPressEvent(QKeyEvent *event)
{
    //qDebug()<<"presionaste una tecla";

    if (event->key() == Qt::Key_W){
        if (pos().y() > 100){
            setPos(x(),y()-10);
            //qDebug() << "pos subiendo"<<this->y();
        }
    }
    if (event->key() == Qt::Key_S){
        if (pos().y() < 400){
            setPos(x(),y()+10);
            //qDebug() << "pos bajando"<<this->y();
        }
    }
    if (event->key() == Qt::Key_D){
        Bala_jugador *bala = new Bala_jugador();
        bala->setPos(x()+50,y());
        scene()->addItem(bala);
    }

}

//void Player1::keyPressEvent_player2(QKeyEvent *event)
//{
//    if (event->key() == Qt::Key_I){
//        if (pos().y() > -200){
//            setPos(x(),y()-20);
//            //qDebug() << "pos subiendo"<<this->y();
//        }
//    }
//    if (event->key() == Qt::Key_K){
//        if (pos().y()+50 < 290){
//            setPos(x(),y()+20);
//            //qDebug() << "pos bajando"<<this->y();
//        }
//    }

//}

//void Player1::Movimiento_jugador1()
//{

//}

//void Player1::Movimiento_jugador2()
//{

//}
