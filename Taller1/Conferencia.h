#pragma once
#include "Evento.h"
#include <iostream>
#include <string>
using namespace std;

class Conferencia:public Evento
{
private:
    string nombreEspecialista;
    string tema;
    int duracion;
public:
    Conferencia(string nombre,string ubicacion,string fecha,string hora,string nombreEspecialista,string tema,int duracion);
    string getNombreEspecialista();
    string getTema();
    int getDuracion();
    void setNombreEspecialista(string nombreProfesor);
    void setTema(string descripcion);
    void setDuracion(int duracion);
    ~Conferencia();
};
