#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <thread>

using namespace std;

void test_hilo(){
    for(size_t i{0}; i<100; i++)
        printf("Hilo %llu > %llu\n", this_thread::get_id(), i);
    printf("Sali del hilo %llu \n", this_thread::get_id());    
}

void main_hilo()
{
    for(size_t i{i}; i<100;i++)
    {
        printf("Hilo %llu > %llu \n", this_thread::get_id(), i);
    }
    printf("Sali del hilo %llu \n", this_thread::get_id());
}

int main()
{
    thread hilo(&test_hilo);

    

    //corre el hilo en paralelo con el pr
    //hilo.detach();

    main_hilo();

    hilo.join();
    return EXIT_SUCCESS;

}