#include "Estudiante.h"
#include <string>
using namespace std;

Estudiante::Estudiante(string _nombre,string _apellido,string _correo,string _institucion):Asistente(_nombre,_apellido,_correo){
    this-> institucion=_institucion;
}
string Estudiante::getInstitucion(){
    return institucion;
}
void Estudiante::setInstitucion(string _institucion){
    this-> institucion=_institucion;
}
Estudiante::~Estudiante(){}