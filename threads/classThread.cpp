#include <iostream>
#include <thread>
#include <cstdlib>
#include <cstdio>

using namespace std;


class Hilo{
    private:
        string saludo;
    public:
        void saludar();
        Hilo(string);
        ~Hilo();
};
Hilo::~Hilo(){
}
Hilo::Hilo(string _saludo){
    saludo = _saludo;
}
void Hilo::saludar(){
    cout<<"Hola "<<saludo<<endl;
}

int main
(int argc, char *argv[]){
    Hilo h1("Jose");
    thread th(&Hilo::saludar, &h1 );
    th.join();
}