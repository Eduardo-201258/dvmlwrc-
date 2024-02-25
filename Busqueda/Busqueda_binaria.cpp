#include<iostream>
using namespace std;

//arreglo en forma ascendente
int main(){
    int numeros[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
    int inferior,superior,mitad,dato;
    bool bandera = false;

    dato = 4;

    //-- Busqueda ---
    inferior =0;
    superior = 10;

    while(inferior<=superior){
        mitad = (inferior+superior)/2;

        if(numeros[mitad]==dato){
            bandera = true;
            break;
        }
        if (numeros[mitad]>dato)
        {
            superior = mitad;
            mitad = (inferior+superior)/2;
        }
        if (numeros[mitad]<dato){
            inferior = mitad;
            mitad = (inferior+superior)/2;
        }
        
    }
    if(bandera==true){
            cout<<"Se encontro el dato en la posicion: "<<mitad<<endl;
    }else{
       cout<<"No se encontro el dato \n";
    }

    return 0;
}