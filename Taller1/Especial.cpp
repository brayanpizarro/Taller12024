#include "Especial.h"
#include <string>
using namespace std;

Especial::Especial(string _nombre,string _apellido,string _correo,string _descripcion,string _especialidad):Asistente(_nombre,_apellido,_correo){
    this-> descripcion=_descripcion;
    this-> especialidad=_especialidad;
}
string Especial::getDescripcion(){
    return descripcion;
}
string Especial::getEspecialidad(){
    return especialidad;
}
void Especial::setDescripcion(string _descripcion){
    this-> descripcion=_descripcion;
}
void Especial::setEspecialidad(string _especialidad){
    this-> especialidad=_especialidad;
}
Especial::~Especial(){}