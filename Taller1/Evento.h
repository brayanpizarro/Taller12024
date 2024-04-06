#pragma once
#include "Asistente.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Evento
{
private:
    string nombre;
    string ubicacion;
    string fecha;
    string hora;
    int cantAsistentes;
    vector<Asistente>list;
public:
    Evento(string nombre,string ubicacion,string fecha,string hora,int cantAsistentes);
    string getNombre();
    string getUbicacion();
    string getFecha();
    string getHora();
    void setNombre(string nombre);
    void setUbicacion(string ubicacion);
    void setFecha(string fecha);
    void setHora(string hora);

    void agregarAsistente(Asistente x);
    ~Evento();
};
