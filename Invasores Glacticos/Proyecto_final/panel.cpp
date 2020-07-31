#include "panel.h"
#include "ui_panel.h"
#include <QDebug>
#include <QGraphicsItem>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QBrush>
#include <QImage>
#include "defensor.h"
#include "invasor.h"


//Universo del juego
Panel::Panel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Panel)
{
    ui->setupUi(this);
    //Escena
    scene = new QGraphicsScene(20,100,770,360);
    scene->setBackgroundBrush(QBrush(QImage(":/images/bg.jpg")));
    ui->view->setScene(scene);

    //Desactiva scrollbars
    ui->view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);



    //Muestra la vista
    ui->view->show();

    //Vida de los jugadores
    vida1 = 100;
    vida2 = 100;

    //Jugadores
    p1 = new Player(1);
    jugadores.push_back(p1);
    p2 = new Player(2);
    jugadores.push_back(p2);

    //Obstaculos
    Wall *muro1 = new Wall();
    muro1->setPos(170,130);
    scene->addItem(muro1);
    Wall *muro2 = new Wall();
    muro2->setPos(170,330);
    scene->addItem(muro2);
    Wall *muro3 = new Wall();
    muro3->setPos(600,130);
    scene->addItem(muro3);
    Wall *muro4 = new Wall();
    muro4->setPos(600,330);
    scene->addItem(muro4);    

    //Timer para el spawn de aliados
    timer_u = new QTimer();
    connect(timer_u,SIGNAL(timeout()),this,SLOT(spawn_enemies()));
}

Panel::~Panel()
{
    delete ui;
}

//Funcion del boton para iniciar el juego
void Panel::on_Iniciar_clicked()
{
    //Setea los nombres y las vidas
    ui->lbl_nombre1->setText(nombre1);
    ui->lbl_nombre2->setText(nombre2);
    ui->lbl_vida1->setText(QString::number(vida1));
    ui->lbl_vida2->setText(QString::number(vida2));
    ui->Iniciar->setVisible(false);//Esconde el boton

    //Muestra Personajes
    p1->setPos(30,250);
    scene->addItem(p1);
    p2->setPos(720,250);
    scene->addItem(p2);

    //Musica de fondo
    music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/sounds/bgmusic.mp3"));
    music->play();

    //Tiempo universal del juego
    timer_u->start(6000);

}

//Funcion para poner los enemigos y los meteoritos
void Panel::spawn_enemies()
{
    //Aliado superior izquierdo
    ally_1 = new Defensor();
    ally_1->setPos(100,30);
    scene->addItem(ally_1);

    //Aliado inferior derecho
    ally_2 = new Invasor();
    ally_2->setPos(650,450);
    scene->addItem(ally_2);

    //Meteoritos
    Meteor *meteorito = new Meteor();
    scene->addItem(meteorito);
}

//Funcion para el movimiento de los jugadores
//W-S-D para el jugador defensor
//I-K-J para el jugador invasor
void Panel::keyPressEvent(QKeyEvent *event)
{
    //Movimiento jugador defensor
    if (jugadores.size()>0 && jugadores.size()<2){
        if (event->key() == Qt::Key_W){
            if (jugadores.at(0)->pos().y() > 100){
                jugadores.at(0)->setPos(jugadores.at(0)->x(),jugadores.at(0)->y()-10);
                //qDebug() << "pos subiendo"<<this->y();
            }
        }
        if (event->key() == Qt::Key_S){
            if (jugadores.at(0)->pos().y() < 400){
                jugadores.at(0)->setPos(jugadores.at(0)->x(),jugadores.at(0)->y()+10);
                //qDebug() << "pos bajando"<<this->y();
            }
        }
        //Disparo de balas jugador defensor
        if (event->key() == Qt::Key_D){
            Bala_jugador *bala = new Bala_jugador(1);
            bala->setPos(jugadores.at(0)->x()+50,jugadores.at(0)->y());
            scene->addItem(bala);
        }
    }
    else if(jugadores.size()==2){
        //Movimiento jugador defensor
        if (event->key() == Qt::Key_W){
            if (jugadores.at(0)->pos().y() > 100){
                jugadores.at(0)->setPos(jugadores.at(0)->x(),jugadores.at(0)->y()-10);
                //qDebug() << "pos subiendo"<<jugadores.at(0)->y();
            }
        }
        if (event->key() == Qt::Key_S){
            if (jugadores.at(0)->pos().y() < 400){
                jugadores.at(0)->setPos(jugadores.at(0)->x(),jugadores.at(0)->y()+10);
                //qDebug() << "pos bajando"<<jugadores.at(0)->y();
            }
        }
        //Disparo de balas jugador defensor
        if (event->key() == Qt::Key_D){
            Bala_jugador *bala = new Bala_jugador(1);
            bala->setPos(jugadores.at(0)->x()+52,jugadores.at(0)->y()+25);
            scene->addItem(bala);
        }
        //Movimiento jugador invasor
        if (event->key() == Qt::Key_I){
            if (jugadores.at(1)->pos().y() > 100){
                jugadores.at(1)->setPos(jugadores.at(1)->x(),jugadores.at(1)->y()-10);
                //qDebug() << "pos subiendo"<<jugadores.at(1)->y();
            }
        }
        if (event->key() == Qt::Key_K){
            if (jugadores.at(1)->pos().y() < 400){
                jugadores.at(1)->setPos(jugadores.at(1)->x(),jugadores.at(1)->y()+10);
                //qDebug() << "pos bajando"<<jugadores.at(1)->y();
            }
        }
        //Disparo jugador invasor
        if (event->key() == Qt::Key_J){
            Bala_jugador *bala = new Bala_jugador(2);
            bala->setPos(jugadores.at(1)->x()-32,jugadores.at(1)->y()+25);
            scene->addItem(bala);            
        }
    }
}

//Funcion para restar vida
void Panel::decrease(int t)
{
    if (t == 1){
       vida2 -= 10;
       ui->lbl_vida2->setText(QString::number(vida2));
       //Cuando la vida llega a cero acaba el juego
       if (vida2 == 0){
           //Se detienen todos los timers
           timer_u->stop();
           //qDebug() <<"Fin del juego";
           ally_1->detener();
           ally_2->detener();
           QMessageBox::information(this,"Fin del Juego","Juego Terminado");
           Final(nombre1, nombre2);//Funcion del menu final
       }
    }
    else if (t == 2){
       vida1 -= 10;
       ui->lbl_vida1->setText(QString::number(vida1));
       //Cuando la vida llega a cero acaba el juego
       if (vida1 == 0){
           timer_u->stop();
           //qDebug() <<"Fin del juego";
           ally_1->detener();
           ally_2->detener();
           QMessageBox::information(this,"Fin del Juego","Juego Terminado");
           Final(nombre2, nombre1);//Funcion del menu final
       }
    }
}

//Funcion para el final del juego
void Panel::Final(QString n1, QString n2)
{
    //qDebug () << "Entro al final";
    //Escribe el tablon de resultados
    QFile archivo("../data/tablon.txt");
    archivo.open(QIODevice::ReadWrite | QIODevice::Append | QIODevice::Text);
    if (!archivo.isOpen()){
        qDebug() << "No se pudo abrir el archivo";
    }else{
        QTextStream out(&archivo);
        out << n1 << " le gano a "<< n2 <<endl;
        archivo.flush();
        archivo.close();
    }

    //Detiene la musica de fondo
    music->stop();

    //Esconde esta ventana y abre la ventana de menu final
    this->hide();
    Menu_final *menu = new Menu_final();
    menu->setModal(true);
    menu->setNombre_ganador(n1);
    menu->setNombre_perdedor(n2);
    menu->show();
}

//Metodos set
void Panel::setNombre1(const QString &value)
{
    nombre1 = value;
}

void Panel::setNombre2(const QString &value)
{
    nombre2 = value;
}
