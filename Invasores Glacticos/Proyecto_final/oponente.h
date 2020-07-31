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

    //Metodos get y set
    QString getNombre_oponente() const;
    QString getNombre_jugador() const;

    void setNombre_oponente(const QString &value);
    void setNombre_jugador(const QString &value);

private slots:
    void on_aceptar_clicked();

private:
    Ui::Oponente *ui;
    //Variables para los nombres de los jugadores
    QString nombre_oponente;
    QString nombre_jugador;
};

#endif // OPONENTE_H
