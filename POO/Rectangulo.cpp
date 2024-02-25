#include<iostream>
using namespace std;

//-- Clase ----
class Rectangulo{
    private:
        int largo;
        int ancho;
    public:
        Rectangulo(int, int); //-- Init Constructor
        ~Rectangulo(); //-- Init Destructor
        int perimetro();
        int area();
};

//-- Constructor ----
Rectangulo::Rectangulo(int _largo, int _ancho){
    largo = _largo;
    ancho = _ancho;
}

//-- Destructor
Rectangulo::~Rectangulo(){

}

int Rectangulo::perimetro(){
    return (2*largo)+(2*ancho);
}

int Rectangulo::area(){
    return largo*ancho;
}

int main(){
    Rectangulo r1(10,15);

    cout<<"El perimetro es "<<r1.perimetro()<<" y el area es "<<r1.area();
    r1.~Rectangulo();
}