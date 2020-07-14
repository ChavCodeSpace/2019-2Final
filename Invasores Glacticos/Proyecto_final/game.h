#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsTextItem>
#include <QFont>
#include "oponente.h"
#include "login.h"
#include "player1.h"
#include "player2.h"

//Clase del universo del juego
class Game : public QGraphicsView
{
    Q_OBJECT

public:
    explicit Game(QWidget *parent = nullptr);

    QGraphicsScene *scene;
    Login *l;
    Oponente *o;
};

#endif // GAME_H
