#include "Evento.h"
#include "Asistente.h"
#include <stdlib.h>
#include <iostream>
using namespace std;

Evento::Evento(string _nombre,string _ubicacion,string _fecha,string _hora,int _cantAsistentes){
    this-> nombre=_nombre;
    this-> ubicacion=_ubicacion;
    this-> fecha=_fecha;
    this-> hora=_hora;
    this->cantAsistentes=_cantAsistentes;
    
}
string Evento::getNombre(){
    return nombre;
}
string Evento::getUbicacion(){
    return ubicacion;
}
string Evento::getFecha(){
    return fecha;
}
string Evento::getHora(){
    return hora;
}
void Evento::setNombre(string _nombre){
    this-> nombre=_nombre;
}
void Evento::setUbicacion(string _ubicacion){
    this-> ubicacion=_ubicacion;
}
void Evento::setFecha(string _fecha){
    this-> fecha=_fecha;
}
void Evento::setHora(string _hora){
    this-> hora=_hora;
}
void Evento::agregarAsistente(Asistente x){
    list.push_back(x);
}

Evento::~Evento(){}