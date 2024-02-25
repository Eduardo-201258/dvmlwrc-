#include <iostream>
using namespace std;


int main(){
    int n_producto;
    
    do{
        cout << "//////////Productos///////////\n";
        cout << "1.- Doritos\n";
        cout << "2.- Gansito\n";
        cout << "3.- Coca Cola\n";
        cout << "4.- Pau Pau\n";
            
        cout << "Seleccione un producto: ";
        cin >> n_producto;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "ERROR EN LA ENTRADA DE LOS DATOS!!!";
            cin >> n_producto;
        }
        if(n_producto<1 || n_producto>4){
            cout << "Seleccione un numero de producto existente\n";
        }
    }while (n_producto<1 || n_producto>4);
    {
        if(n_producto==1){
            cout << "Ha seleccionado Doritos";
        }else if(n_producto==2){
            cout << "Ha seleccionado Gansitos";
        }else if(n_producto==3){
            cout << "Ha seleccionado Coca Cola";
        }else if(n_producto==4){
            cout << "Ha seleccionado Pau Pau";
        }
    }
}