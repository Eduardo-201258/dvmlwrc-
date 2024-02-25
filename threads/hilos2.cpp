#include <iostream>
#include <thread>
#include <cstdlib>
#include <cstdio>

using namespace std;

void fun_hilo(){
    char option{};
    
    while(option != '\n')
    {
        scanf("%c", &option);
        fflush(stdin);
    }
    printf("Sali del hilo %llu. \n", this_thread::get_id());
}

int main(int argc, char argv[]){
    thread hilo(&fun_hilo);

    /*
    thread hilo{};
    thread hilo{&fun_hilo};
    thread hilo(&fun_hilo);

    */
   thread hilo2  thread(fun_hilo());
    hilo.join();
    return EXIT_SUCCESS;
}