#include "Evento.h"
#include "Concierto.h"
#include "Taller.h"
#include "Seminario.h"
#include "Conferencia.h"
#include "Asistente.h"
#include "Estudiante.h"
#include "Profesional.h"
#include "Especial.h"
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
vector<Evento*> eventos;
vector<Asistente*> asistentes;
void mostrarListAsis(const vector<Asistente*>& asistentes);
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
int lecturaEvento(){
    ifstream archivo("Eventos.txt");
    
    if(!archivo.is_open()){
        cout<<"error al abrir el archivo"<<endl;
        return 1;
    }
    vector <string>palabras;
    string linea;
    
    while (getline(archivo, linea))
    {   
        istringstream isstream(linea);
        string palabra;
        while (getline(isstream,palabra,','))
        {
            palabras.push_back(palabra);

        }
        if(palabras[0]=="c"){
            string nombre=palabras[1];
            string ubicacion=palabras[2];
            string fecha=palabras[3];
            string hora=palabras[4];
            string nombreArtista=palabras[5];
            int duracion=stoi(palabras[6]);
            int precioEntrada=stoi(palabras[7]);
            Concierto c(nombre,ubicacion,fecha,hora,nombreArtista,duracion,precioEntrada);
            eventos.push_back(&c);
            
        }else if (palabras[0]=="t")
        {
            string nombre=palabras[1];
            string ubicacion=palabras[2];
            string fecha=palabras[3];
            string hora=palabras[4];
            string nombreProfesor=palabras[5];
            string descripcion=palabras[6];
            string materiales=palabras[7];
            int duracion=stoi(palabras[8]);
            Taller t(nombre,ubicacion,fecha,hora,nombreProfesor,descripcion,materiales,duracion);
            eventos.push_back(&t);
        }else if (palabras[0]=="s")
        {
            string nombre=palabras[1];
            string ubicacion=palabras[2];
            string fecha=palabras[3];
            string hora=palabras[4];
            string nombreEspecialista=palabras[5];
            string tema=palabras[6];
            int duracion=stoi(palabras[7]);
            Seminario s(nombre,ubicacion,fecha,hora,nombreEspecialista,tema,duracion);
            eventos.push_back(&s);
        }else if (palabras[0]=="co")
        {
            string nombre=palabras[1];
            string ubicacion=palabras[2];
            string fecha=palabras[3];
            string hora=palabras[4];
            string nombreEspecialista=palabras[5];
            int duracion=stoi(palabras[6]);
            string tema=palabras[7];
            Conferencia c(nombre,ubicacion,fecha,hora,nombreEspecialista,tema,duracion);
            eventos.push_back(&c);
        }
        cout<<linea<<endl;
    }
    return 1;
}

int main(int argc, char const *argv[])
{   
    lecturaEvento();
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
            else if (tipo==2)
            {
                eventos.push_back(crearConferencia());
            }
            else if (tipo==3)
            {
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
            else if (tipo==2)
            {
                asistentes.push_back(registrarEstudiante());
            }
            else if (tipo==3)
            {
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
        }while (opcion!=4);
        
    }
    

    return 0;
}
void mostrarListAsis(const vector<Asistente*>& asistentes) {
    cout << "\nLista de asistentes registrados:" << endl;
    for (const auto& asistente : asistentes) {
        cout << "- " << asistente->getNombre() << " " << asistente->getApellido() << " (" << asistente->getCorreo() << ")" << endl;
    }
}
