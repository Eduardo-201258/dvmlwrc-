#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << " Ingresa una letra: \n";
    char dato;
    cin.get(dato);  
    cout << " Dato: " << dato << endl;

    //Salida de datos formateada
    bool x = true;
    cout << boolalpha << x << endl ; //escribe los booleanos como 'false' o 'true'

    cout << dec << 27 << endl; //salida: 27 (decimal)
    cout << hex << 27 << endl; //salida: 1b (hexadecimal)
    cout << oct << 27 << endl; //salida: 33 (octal)

    cout << setprecision(2) << 4.567 << endl; //salida: 4.6
    cout << setw(5) << 234 << endl; //salida: "  234"
    cout << setfill('#') << setw(5) << 234 << endl; // salida: ##234

}