#include "Taller.h"
#include <iostream>
using namespace std;

Taller::Taller(string _nombre,string _ubicacion,string _fecha,string _hora,string _nombreProfesor,string _descripcion,string _materiales,int _duracion):Evento(_nombre,_ubicacion,_fecha,_hora,100){
    this-> nombreProfesor=_nombreProfesor;
    this-> descripcion=_descripcion;
    this-> materiales=_materiales;
    this-> duracion=_duracion;
}
string Taller::getNombreProfesor(){
    return nombreProfesor;
}
string Taller::getDescripcion(){
    return descripcion;
}
string Taller::getMateriales(){
    return materiales;
}
int Taller::getDuracion(){
    return duracion;
}
void Taller::setNombreProfesor(string _nombreProfesor){
    this->nombreProfesor=_nombreProfesor;
}
void Taller::setDescripcion(string _descripcion){
    this->descripcion=_descripcion;
}
void Taller::setMeteriales(string _materiales){
    this->materiales=_materiales;
}
void Taller::setDuracion(int _duracion){
    this->duracion=_duracion;
}
Taller::~Taller(){}