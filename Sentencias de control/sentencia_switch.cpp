#include <iostream>
using namespace std;
int n_producto;

void funcion(){
    cout << "//////////Productos///////////\n";
    cout << "1.- Doritos\n";
    cout << "2.- Gansito\n";
    cout << "3.- Coca Cola\n";
    cout << "4.- Pau Pau\n";
    cout << "Seleccione un producto: ";
    cin >> n_producto;
}

int main(){
    funcion();
    switch (n_producto)
    {
    case 1:
        cout << "Ha seleccionado Doritos\n";
        break;
    case 2:
        cout << "Ha seleccionado Gansitos\n";
        break;
    case 3:
        cout << "Ha seleccionado Coca Cola\n";
        break;
    case 4: 
        cout << "Ha seleccionado Pau Pau\n";
        break;
    default:
        cout << "Error Dato no existente\n";
        funcion();
        break;
    }
}