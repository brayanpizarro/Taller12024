#include "Asistente.h"
#include <string>
using namespace std;

Asistente::Asistente(string _nombre,string _apellido,string _correo){
    this-> nombre=_nombre;
    this-> apellido	=_apellido;
    this-> correo=_correo;
}
string Asistente::getNombre(){
    return nombre;
}
string Asistente::getApellido(){
    return apellido;
}
string Asistente::getCorreo(){
    return correo;
}
void Asistente::setNombre(string _nombre){
    this->nombre=_nombre;
}
void Asistente::setApellido(string _apellido){
    this-> apellido=_apellido;
}
void Asistente::setCorreo(string _correo){
    this->correo=_correo;
}
Asistente::~Asistente(){}