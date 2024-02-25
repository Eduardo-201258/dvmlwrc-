#include <iostream>
#include <thread>

using namespace std;

void funcion(int parametro1, double parametro2){
    for(int i=0; i<10; i++){
        cout<<parametro1+parametro2<<endl;
    }
}

int main(int argc, char argv[]){
    thread th(funcion, 1, 5.7);

// ~# Esperar a que el thread termine para terminar el programa.
    if(th.joinable()){
        th.join();
    }
}