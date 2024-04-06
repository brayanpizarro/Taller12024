#pragma once
#include <iostream>
#include <string>
using namespace std;
class Asistente
{
private:
 string nombre;
 string apellido;
 string correo;
public:
    Asistente(string nombre,string apellido,string correo);
    string getNombre();
    string getApellido();
    string getCorreo();
    void setNombre(string nombre);
    void setApellido(string apellido);
    void setCorreo(string correo);
    ~Asistente();
};