#pragma once
#include "Asistente.h"
#include <iostream>
#include <string>
using namespace std;
class Estudiante:public Asistente
{
private:
 string institucion;
public:
    Estudiante(string nombre,string apellido,string correo,string institucion);
    string getInstitucion();
    void setInstitucion(string institucion);
    ~Estudiante();
};