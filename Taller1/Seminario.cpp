#include "Seminario.h"
#include <iostream>
using namespace std;

Seminario::Seminario(string _nombre,string _ubicacion,string _fecha,string _hora,string _nombreEspecialista,string _tema,int _duracion):Evento(_nombre,_ubicacion,_fecha,_hora,100){
    this-> nombreEspecialista=_nombreEspecialista;
    this-> tema=_tema;
    this-> duracion=_duracion;
}
string Seminario::getNombreEspecialista(){
    return nombreEspecialista;
}
string Seminario::getTema(){
    return tema;
}
int Seminario::getDuracion(){
    return duracion;
}
void Seminario::setNombreEspecialista(string _nombreEspecialista){
    this->nombreEspecialista=_nombreEspecialista;
}
void Seminario::setTema(string _tema){
    this->tema=_tema;
}
void Seminario::setDuracion(int _duracion){
    this->duracion=_duracion;
}
Seminario::~Seminario(){}
