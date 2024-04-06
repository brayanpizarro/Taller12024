#include <iostream>
#include <vector>
#include "Evento.h"
#include "Concierto.h"
#include "Conferencia.h"
#include "Seminario.h"
#include "Especial.h"
#include "Estudiante.h"
#include "Profesional.h"


using namespace std;

Evento* crearConcierto();
Evento* crearConferencia();
Evento* crearSeminario();

Asistente* registrarEspecial();
Asistente* registrarEstudiante();
Asistente* registrarProfesional();

void mostrarAsistentes(conts Evento& evento);

int main(int argc, char const *argv[])
{
    vector<Evento*> eventos;
    vector<Asistente*> asistentes;

    int option;
    do{
        cout<< "-PROGRAMA EVENTOS-" <<endl;
        cout<<"1. Crear nuevo evento" <<endl;
        cout<<"2. Registrar asistente" <<endl;
        cout<<"3. Lista asistentes" <<endl;
        cout<<"4. Generar Informe" <<endl;
        cout<<"6. Salir" <<endl;

        cout<<" Seleccione opcion: " <<endl;
        cin >> option;

        switch (option)
        {
        case 1:
            //Creacion de un nuevo evento 
            int tipo;
            cout << "-Que tipo de evento quiere crear-" << endl;
            cout << "1. Concierto" << endl;
            cout << "2. Conferencia" << endl;
            cout << "3. Seminario" << endl;
            cout << "Seleccione una opcion: ";
            cin >> tipo;
            if(tipo==1){
                eventos.push_back(crearConcierto());
            }
            elif(tipo==2){
                 eventos.push_back(crearConferencia());
            }
            elif(tipo==3){
                eventos.push_back(crearSeminario());
            }
        }
        case 2: {
            //Registar asistente
            int tipo;
            cout << "-Que tipo de asistente quiere registrar-" << endl;
            cout << "1. Especial" << endl;
            cout << "2. Estudiante" << endl;
            cout << "3. Profesional" << endl;
            cout << "Seleccione una opcion: ";
            cin >> tipo;
            if(tipo==1){
                asistentes.push_back(registrarEspecial());
            }
            elif(tipo==2){
                asistentes.push_back(registrarEstudiante());
            }
            elif(tipo==3){
                asistentes.push_back(registrarProfesional());
            }
            break;
        }
        case 3: {
            //lista de asistente
            vector<Evento> eventos;

        }

        default:
             cout << "Opcion invalida" << endl;
        }
    }

    Evento e("pablo","casasa0","12/12/12","15:30");
    cout<< "NOMBRE:"<< e.getNombre() <<endl;
    return 0;
}


Evento* crearConcierto() {
    string nombre, ubicacion, fecha, hora, nombreArtista;
    int duracion, precioEntrada;

    cout << "Nombre del concierto: ";
    cin >> nombre;
    cout << "Ubicacion del concierto: ";
    cin >> ubicacion;
    cout << "Fecha del concierto: ";
    cin >> fecha;
    cout << "Hora del concierto: ";
    cin >> hora;
    cout << "Nombre del artista: ";
    cin >> nombreArtista;
    cout << "Duracion del concierto (en horas): ";
    cin >> duracion;
    cout << "Precio de entrada: ";
    cin >> precioEntrada;

    return new Concierto(nombre, ubicacion, fecha, hora, nombreArtista, duracion, precioEntrada);
}

Evento* crearConferencia() {
    string nombre, ubicacion, fecha, hora, nombreEspecialista, tema;
    int duracion;

    cout << "Nombre de la conferencia: ";
    cin >> nombre;
    cout << "Ubicacion de la conferencia: ";
    cin >> ubicacion;
    cout << "Fecha de la conferencia: ";
    cin >> fecha;
    cout << "Hora de la conferencia: ";
    cin >> hora;
    cout << "Nombre del especialista: ";
    cin >> nombreEspecialista;
    cout << "Tema de la conferencia: ";
    cin >> tema;
    cout << "Duracion de la conferencia (en horas): ";
    cin >> duracion;

    return new Conferencia(nombre, ubicacion, fecha, hora, nombreEspecialista, tema, duracion);
}

Evento* crearSeminario() {
    string nombre, ubicacion, fecha, hora, nombreEspecialista, tema;
    int duracion;

    cout << "Nombre del seminario: ";
    cin >> nombre;
    cout << "Ubicacion del seminario: ";
    cin >> ubicacion;
    cout << "Fecha del seminario: ";
    cin >> fecha;
    cout << "Hora del seminario: ";
    cin >> hora;
    cout << "Nombre del especialista: ";
    cin >> nombreEspecialista;
    cout << "Tema del seminario: ";
    cin >> tema;
    cout << "Duracion del seminario (en horas): ";
    cin >> duracion;

    return new Seminario(nombre, ubicacion, fecha, hora, nombreEspecialista, tema, duracion);
}

Asistente* registrarEspecial() {
    string nombre, apellido, correo, descripcion, especialidad;
    cout << "-Asistente especial-";
    cout << "Nombre: ";
    cin >> nombre;
    cout << "Apellido: ";
    cin >> apellido;
    cout << "Correo: ";
    cin >> correo;
    cout << "Descripcion: ";
    cin >> descripcion;
    cout << "Especialidad: ";
    cin >> especialidad;

    return new Especial(nombre, apellido, correo, descripcion, especialidad);
}

Asistente* registrarEstudiante() {
    string nombre, apellido, correo, institucion;
    cout << "-Asistente estudiante-";
    cout << "Nombre: ";
    cin >> nombre;
    cout << "Apellido: ";
    cin >> apellido;
    cout << "Correo: ";
    cin >> correo;
    cout << "Institucion: ";
    cin >> institucion;

    return new Estudiante(nombre, apellido, correo, institucion);
}

Asistente* registrarProfesional() {
    string nombre, apellido, correo, profesion, especialidad;

    cout << "Nombre del profesional: ";
    cin >> nombre;
    cout << "Apellido del profesional: ";
    cin >> apellido;
    cout << "Correo del profesional: ";
    cin >> correo;
    cout << "Profesion del profesional: ";
    cin >> profesion;
    cout << "Especialidad del profesional: ";
    cin >> especialidad;

    return new Profesional(nombre, apellido, correo, profesion, especialidad);
}


