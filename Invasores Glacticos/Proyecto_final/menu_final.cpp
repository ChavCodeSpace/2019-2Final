#include "menu_final.h"
#include "ui_menu_final.h"
#include "panel.h"
#include <QFile>
#include <QTextStream>

extern Panel *p;//Objeto global del panel principal del juego

//Menu final del juego
Menu_final::Menu_final(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Menu_final)
{
    ui->setupUi(this);
}

Menu_final::~Menu_final()
{
    delete ui;
}

//Funcion del boton para iniciar un nuevo juego
void Menu_final::on_nuevo_juego_clicked()
{
   //Esconde esta ventana y abre una nueva del juego
   this->hide();
   p = new Panel();
   p->setNombre1(this->getNombre_ganador());
   p->setNombre2(this->getNombre_perdedor());
   p->show();
}

//Funcion del boton que muestra los resultados
void Menu_final::on_tablon_clicked()
{
    QByteArray contenido;

    QFile archivo("../data/tablon.txt");
    archivo.open(QIODevice::ReadOnly | QIODevice::Text);
    if (!archivo.isOpen()){
        qDebug() << "No se pudo abrir el archivo";
    }else{
        //Recorre el archivo de texto y va mostrando cada linea en el textEdit
        QTextStream in(&archivo);
        while (!in.atEnd()) {
            contenido = archivo.readLine();
            ui->resultados->append(contenido);
        }
    }
    archivo.close();
}

//Funcion del boton para salir del juego
void Menu_final::on_salir_clicked()
{
    this->close();
}

//Metodos get y set
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
