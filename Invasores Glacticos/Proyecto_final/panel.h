#ifndef PANEL_H
#define PANEL_H

#include <QWidget>
#include <QList>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>
#include <QObject>
#include <QMediaPlayer>
#include "oponente.h"
#include "login.h"
#include "menu_final.h"
#include "bala_jugador.h"
#include "player.h"
#include "wall.h"
#include "meteor.h"

class Defensor;
class Invasor;

//Clase de el universo del juego
namespace Ui {
class Panel;
}

class Panel : public QWidget
{
    Q_OBJECT

public:
    explicit Panel(QWidget *parent = nullptr);
    ~Panel();    

    void keyPressEvent(QKeyEvent *event);
    void decrease(int t);
    void Final(QString n1, QString n2);

    //Metodos set
    void setNombre1(const QString &value);
    void setNombre2(const QString &value);

private slots:
    void on_Iniciar_clicked();
    void spawn_enemies();

private:
    Ui::Panel *ui;
    //Objeto de escena
    QGraphicsScene *scene;
    //Variables para los nombres los jugadores
    QString nombre1;
    QString nombre2;
    //Objetos del juego
    Defensor *ally_1;
    Invasor *ally_2;
    Player *p1;
    Player *p2;
    QList <Player *> jugadores;
    int vida1;
    int vida2;
    //Tiempo del juego
    QTimer *timer_u;
    //Musica de fondo
    QMediaPlayer *music;

};

#endif // PANEL_H
