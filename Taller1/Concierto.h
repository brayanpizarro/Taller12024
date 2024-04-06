#pragma once
#include "Evento.h"
#include <iostream>
#include <string>
using namespace std;

class Concierto:public Evento
{
private:
    string nombreArtista;
    int duracion;
    int precioEntrada;
public:
    Concierto(string nombre,string ubicacion,string fecha,string hora,string nombreArtista,int duracion,int precioEntrada);
    string getNombreArtista();
    int getDuracion();
    int getPrecioEntrada();
    void setNombreArtista(string nombreArtista);
    void setDuracion(int duracion);
    void setPrecioEntrada(int precioEntrada);
    ~Concierto();
};
