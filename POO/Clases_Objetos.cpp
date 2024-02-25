#include<iostream>
using namespace std;

class Persona{
    private:
        int edad;
        string nombre;
    
    public: //-- Metodos ---
        Persona(int, string);
        void leer();
        void correr();
};

//-- Constructor --- Inicializar atributos
Persona::Persona(int _edad, string _nombre){
    edad = _edad;
    nombre = _nombre;
}

void Persona::leer(){
    cout<<"Soy: "<<nombre<<" y estoy leyendo un libro\n";
}

void Persona::correr(){
    cout<<"Soy: "<<nombre<<" y estoy corriendo\n";
}

int main(){
    Persona p1 = Persona(22,"Eduardo");
    Persona p2(22,"Janeth");
    p1.correr();
    p2.leer();
}