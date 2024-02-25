#include <iostream>
#include "Persona.h"
#include "Alumno.h"
using namespace std;

int main(int argc, char argv[]){
    Persona p1 = Persona("Eduardo", "Jimenez", 23);
    cout<<p1.getEdad<<endl;
    Alumnno a1 = Alumnno("Eduardo", "Jimenez", 25, "201258A", "Ing. En Software");
    cout<<a1.getDatos;
}