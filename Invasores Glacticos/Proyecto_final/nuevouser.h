#ifndef NUEVOUSER_H
#define NUEVOUSER_H

#include <QMainWindow>

//Clase para el registro de nuevos usuarios
namespace Ui {
class Nuevouser;
}

class Nuevouser : public QMainWindow
{
    Q_OBJECT

public:
    explicit Nuevouser(QWidget *parent = nullptr);
    ~Nuevouser();

private slots:
    void on_crearuser_clicked();

    void on_atras_clicked();

private:
    Ui::Nuevouser *ui;
    QString n_name;
    QString n_pass;
};

#endif // NUEVOUSER_H
