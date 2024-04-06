#include "Concierto.h"
#include <iostream>
using namespace std;

Concierto::Concierto(string _nombre,string _ubicacion,string _fecha,string _hora,string _nombreArtista,int _duracion,int _precioEntrada):Evento(_nombre,_ubicacion,_fecha,_hora,100){
    this-> nombreArtista=_nombreArtista;
    this-> duracion=_duracion;
    this->precioEntrada=_precioEntrada;
}
string Concierto::getNombreArtista(){
    return nombreArtista;
}
int Concierto::getDuracion(){
    return duracion;
}
int Concierto::getPrecioEntrada(){
    return precioEntrada;
}
void Concierto::setNombreArtista(string _nombreArtista){
    this->nombreArtista=_nombreArtista;
}
void Concierto::setDuracion(int _duracion){
    this->duracion=_duracion;
}
void Concierto::setPrecioEntrada(int _precioEntrada){
    this->precioEntrada=_precioEntrada;
}
Concierto::~Concierto(){}