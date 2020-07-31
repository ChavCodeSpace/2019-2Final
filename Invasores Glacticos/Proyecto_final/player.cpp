#include "player.h"

//Jugadores
Player::Player(int t)
{
    //Dibuja los jugadores dependiendo del player que sea
    //setRect(0,0,50,50);
    if (t == 1){
        setPixmap(QPixmap(":/images/PJ Terrestre.png"));
    }
    if (t == 2){
        setPixmap(QPixmap(":/images/PJ Invasor.png"));
    }
}
