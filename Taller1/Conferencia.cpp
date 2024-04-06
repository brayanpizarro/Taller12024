#include "Conferencia.h"
#include <iostream>
using namespace std;

Conferencia::Conferencia(string _nombre,string _ubicacion,string _fecha,string _hora,string _nombreEspecialista,string _tema,int _duracion):Evento(_nombre,_ubicacion,_fecha,_hora,100){
    this-> nombreEspecialista=_nombreEspecialista;
    this-> tema=_tema;
    this-> duracion=_duracion;
}
string Conferencia::getNombreEspecialista(){
    return nombreEspecialista;
}
string Conferencia::getTema(){
    return tema;
}
int Conferencia::getDuracion(){
    return duracion;
}
void Conferencia::setNombreEspecialista(string _nombreEspecialista){
    this->nombreEspecialista=_nombreEspecialista;
}
void Conferencia::setTema(string _tema){
    this->tema=_tema;
}
void Conferencia::setDuracion(int _duracion){
    this->duracion=_duracion;
}
Conferencia::~Conferencia(){}
