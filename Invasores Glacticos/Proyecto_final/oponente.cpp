#include "oponente.h"
#include "ui_oponente.h"
#include "panel.h"
#include <QDebug>

extern  Panel *p;//Objeto global del panel principal del juego

//Oponente del juego
Oponente::Oponente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Oponente)
{
    ui->setupUi(this);
}

Oponente::~Oponente()
{
    delete ui;
}

//Funcion del boton para capturar el nombre del oponene y abrir el panel del juego
void Oponente::on_aceptar_clicked()
{
    //captura el nombre ingresado y lo guarda
    QString aux;//auxiliar para el nombre
    aux = ui->o_name->text();
    setNombre_oponente(aux);
    //qDebug() << this->getNombre_oponente();
    this->hide();//esconde esta ventana
    //Crea el panel del juego y lo muestra, envia los nombres de los jugadores para ponerlos encima de la puntuacion
    p = new Panel();
    p->setNombre1(nombre_jugador);
    p->setNombre2(nombre_oponente);
    p->show();
}

//Metodos get y set
QString Oponente::getNombre_oponente() const
{
    return nombre_oponente;
}

void Oponente::setNombre_oponente(const QString &value)
{
    nombre_oponente = value;
}

QString Oponente::getNombre_jugador() const
{
    return nombre_jugador;
}

void Oponente::setNombre_jugador(const QString &value)
{
    nombre_jugador = value;
}
