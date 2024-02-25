#include <iostream>
#include "Persona.h"
using namespace std;

class Alumnno : public Persona{
    private:
        string matricula;
        string carrera;
    public:
        Alumnno(string, string, int, string, string);
        ~Alumnno();
        string getDatos();
};

Alumno::Alumno(string _nombre, string _apellido, int _edad, string _matricula, string _carrera) : Persona(_nombre, _apellido, _edad) {
    matricula = _matricula;
    carrera = _carrera;
}
Alumnno::~Alumno(){
}
string Alumnno::getDatos(){
    cout<<"Los datos son: "<<nombre<<" "<<apellido<<" "<<edad<<endl;
    cout<<"Matricula: "<<matricula<<" : "<<"Carrera: "<<carrera<<endl;
}
