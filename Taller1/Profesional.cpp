#include "Profesional.h"
#include <string>
using namespace std;

Profesional::Profesional(string _nombre,string _apellido,string _correo,string _profesion,string _especialidad):Asistente(_nombre,_apellido,_correo){
    this-> profesion=_profesion;
    this->especialidad=_especialidad;
}
string Profesional::getProfesion(){
    return profesion;
}
string Profesional::getEspecialidad(){
    return especialidad;
}
void Profesional::setProfesion(string _profesion){
    this-> profesion=_profesion;
}
void Profesional::setEspecialidad(string _especialidad){
    this-> especialidad=_especialidad;
}
Profesional::~Profesional(){}