#include<iostream>
using namespace std;

class Persona
{
private:
    string nombre;
    int edad;
public:
    Persona(string, int);
    ~Persona();
    void setNombre(string);
    string getNombre();

    void setEdad(int);
    int getEdad();

    void mostrarDatos();
};
Persona::Persona(string _nombre, int _edad)
{
    nombre = _nombre;
    edad = _edad;
}
Persona::~Persona()
{
}
//--Nombre ---
void Persona::setNombre(string _nombre)
{
    nombre = _nombre;
}
string Persona::getNombre()
{
    return nombre;
}
//--Edad ---
void Persona::setEdad(int _edad)
{
    edad = _edad;
}
int Persona::getEdad()
{
    return edad;
}
void Persona::mostrarDatos()
{
    cout<<"Nombre: "<<nombre<<" edad: "<<edad<<endl;
}

//-- Herencia ---
class Alumno : public Persona{
    private:
        string matricula;
        float promedio;
    public:
        Alumno(string, int, string, float);
        void mostrarAlumno();
};
Alumno::Alumno(string _nombre, int _edad, string _matricula, float _promedio) : Persona(_nombre, _edad){
    matricula = _matricula;
    promedio = _promedio;
}

void Alumno::mostrarAlumno(){
    mostrarDatos();
    cout<<"Matricula: "<<matricula<<" Promedio: "<<promedio<<endl;
}

//-- Profesor
class Profesor : public Persona{
    private: 
        string materia;
    public:
        Profesor(string, int, string);
        void verProfesor();
};

Profesor::Profesor(string _nombre, int _edad, string _materia) : Persona(_nombre, _edad){
    materia = _materia;
}

void Profesor::verProfesor(){
    cout<<"Profesor: "<<getNombre()<<" Materia: "<<materia;
}

int main(){
    Persona p1("Juan",30);
    Alumno a1("Janeth",22,"XAS322",90.0);
    Profesor pf1("Alonso", 21, "Seguridad de la información");
    pf1.verProfesor();
}