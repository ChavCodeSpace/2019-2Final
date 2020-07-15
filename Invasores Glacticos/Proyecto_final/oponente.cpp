#include "oponente.h"
#include "ui_oponente.h"
#include "panel.h"
#include <QDebug>

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

QString Oponente::getNombre_oponente() const
{
    return nombre_oponente;
}

void Oponente::setNombre_oponente(const QString &value)
{
    nombre_oponente = value;
}

//boton para capturar el nombre del oponene e iniciar el juego
void Oponente::on_aceptar_clicked()
{
    //captura el nombre ingresado y lo guarda
    QString aux;
    aux = ui->o_name->text();
    setNombre_oponente(aux);
    //qDebug() << this->getNombre_oponente();
    this->hide();//esconde esta ventana
    Panel *p = new Panel();
    p->setNombre1(nombre_jugador);
    p->setNombre2(nombre_oponente);
    p->show();
}

QString Oponente::getNombre_jugador() const
{
    return nombre_jugador;
}

void Oponente::setNombre_jugador(const QString &value)
{
    nombre_jugador = value;
}
