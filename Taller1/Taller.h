#pragma once
#include "Evento.h"
#include <iostream>
#include <string>
using namespace std;

class Taller:public Evento
{
private:
    string nombreProfesor;
    string descripcion;
    string materiales;
    int duracion;
public:
    Taller(string nombre,string ubicacion,string fecha,string hora,string nombreProfesor,string descripcion,string materiales,int duracion);
    string getNombreProfesor();
    string getDescripcion();
    string getMateriales();
    int getDuracion();
    void setNombreProfesor(string nombreProfesor);
    void setDescripcion(string descripcion);
    void setMeteriales(string materiales);
    void setDuracion(int duracion);
    ~Taller();
};

