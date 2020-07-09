#include "nuevouser.h"
#include "ui_nuevouser.h"
#include "login.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QMessageBox>

//Registro de nuevos Usuarios
Nuevouser::Nuevouser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Nuevouser)
{
    ui->setupUi(this);
}

Nuevouser::~Nuevouser()
{
    delete ui;
}

void Nuevouser::on_crearuser_clicked()
{
    //toma los datos ingresados
    n_name = ui->name->text();
    n_pass = ui->pass->text();

    //crea el archivo y lo abre en modo escritura
    QFile archivo("../data/"+n_name+".txt");
    archivo.open(QIODevice::WriteOnly | QIODevice::Text);
    if (!archivo.isOpen()){
        qDebug() << "No se pudo abrir el archivo";
    }else{
        QTextStream out(&archivo);//Es necesario una variable QTextStream para escribir en los archivos
        out << n_pass;//Escribe la contraseña en el archivo
        archivo.flush();
        archivo.close();
        QMessageBox::information(this,"Nuevo Usuario","El Usuario a sido creado");//Informa al usuario que el archivo fue creado
    }

}

void Nuevouser::on_atras_clicked()
{
    this->hide();//Esconde esta ventana
    Login *w = new Login();//Crea la ventana de logueo
    w->show();//La muestra
}
