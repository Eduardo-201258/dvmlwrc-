#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void funcion(bool& parametro){
    while(!parametro)
    {
        this_thread::sleep_for(chrono::milliseconds(100));
    }
    cout<<"B"<<endl;
}

int main(int argc, char argv[]){
    bool parametro = false;

    thread th(funcion, ref(parametro));

    cout<<"A"<<endl;

    parametro = true;

    if(th.joinable()){
        th.join();
    }

}