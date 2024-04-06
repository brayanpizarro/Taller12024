#pragma once
#include "Asistente.h"
#include <iostream>
#include <string>
using namespace std;

class Especial:public Asistente
{
private:
 string descripcion;
 string especialidad;
public:
    Especial(string nombre,string apellido,string correo,string descripcion,string especialidad);
    string getDescripcion();
    string getEspecialidad();
    void setDescripcion(string descripcion);
    void setEspecialidad(string especialidad);
    ~Especial();
};