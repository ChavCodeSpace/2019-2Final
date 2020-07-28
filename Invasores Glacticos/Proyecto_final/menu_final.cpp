#include "menu_final.h"
#include "ui_menu_final.h"
#include "panel.h"

extern Panel *p;

Menu_final::Menu_final(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Menu_final)
{
    ui->lbl_ganador->setText(this->getNombre_ganador());
    ui->setupUi(this);    
}

Menu_final::~Menu_final()
{
    delete ui;
}

void Menu_final::on_nuevo_juego_clicked()
{
   this->hide();
   p = new Panel();
   p->setNombre1(this->getNombre_ganador());
   p->setNombre2(this->getNombre_perdedor());
   p->show();
}

void Menu_final::on_tablon_clicked()
{

}

void Menu_final::on_salir_clicked()
{
    this->close();
}

QString Menu_final::getNombre_perdedor() const
{
    return nombre_perdedor;
}

void Menu_final::setNombre_perdedor(const QString &value)
{
    nombre_perdedor = value;
}

QString Menu_final::getNombre_ganador() const
{
    return nombre_ganador;
}

void Menu_final::setNombre_ganador(const QString &value)
{
    nombre_ganador = value;
}
