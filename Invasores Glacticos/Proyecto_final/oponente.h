#ifndef OPONENTE_H
#define OPONENTE_H

#include <QDialog>

//Clase para capturar el nombre del oponente
namespace Ui {
class Oponente;
}

class Oponente : public QDialog
{
    Q_OBJECT

public:
    explicit Oponente(QWidget *parent = nullptr);
    ~Oponente();    

    QString getNombre_oponente() const;
    void setNombre_oponente(const QString &value);



    void setNombre_jugador(const QString &value);

    QString getNombre_jugador() const;

private slots:
    void on_aceptar_clicked();

private:
    Ui::Oponente *ui;
    QString nombre_oponente;
    QString nombre_jugador;
};

#endif // OPONENTE_H
