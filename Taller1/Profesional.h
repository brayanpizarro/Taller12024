#pragma once
#include "Asistente.h"
#include <iostream>
#include <string>
using namespace std;

class Profesional:public Asistente
{
private:
 string profesion;
 string especialidad;
public:
    Profesional(string nombre,string apellido,string correo,string profesion,string especialidad);
    string getProfesion();
    string getEspecialidad();
    void setProfesion(string profesion);
    void setEspecialidad(string especialidad);
    ~Profesional();
};