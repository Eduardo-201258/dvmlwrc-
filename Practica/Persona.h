#include <iostream>
#include "Alumno.h"
using namespace std;


class Persona{
    private:
        string nombre;
        string apellido;
        int edad;
    public:
        void setNombre(string);
        string getNombre();
        void setApellido(string);
        string getApellido();
        void setEdad(int);
        int getEdad();
        Persona(string, string, int);
        ~Persona();
};

Persona::Persona(string _nombre, string _apellido, int _edad){
    nombre = _nombre;
    apellido = _apellido;
    edad = _edad;
}
Persona::~Persona(){
}
void Persona::setNombre(string _nombre){
    nombre = _nombre;
}
string Persona::getNombre(){
    return nombre;
}
void Persona::setApellido(string _apellido){
    apellido = _apellido;
}
string Persona::getApellido(){
    return apellido;
}
void Persona::setEdad(int _edad){
    edad = _edad;
}
int Persona::getEdad(){
    return edad;
}