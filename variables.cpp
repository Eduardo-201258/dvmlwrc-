#include <iostream>
using namespace std;

int main(){
    bool valor = false; //byte: 1 | bits: 8 | false - true
    cout << " bool, valor: " << valor << endl;
    char caracter = 'a'; //bytes: 1 | bits: 8 |
    cout << " char, caracter: " << caracter << endl;
    int entero = 200000000 ; //bytes: 4  | bits: 32 |
    cout << " int, entero: " << entero << endl;
    long entero_long = 1000000000L; //bytes: 8 | bits: 64
    cout << " int_long, entero_largo: " << entero_long << endl;
    long long entero_long_long = 100000000000000LL; //byte: 10 | bits: 80
    cout << " int_long_long, entero_largo_largo: " << entero_long_long << endl;
    unsigned char caracter_unsg = 'a'; //bytes: el de la variable | bits: el de la variable
    cout << " unsigned, sin valor minimo: " << caracter_unsg << endl;
    float decimal = 3.1416F; // bytes: 4 | bits: 32
    cout << " float, decimal: " << decimal << endl;
    double decimal_largo = 3.1416934532;
    cout << " double, decimal_doble: " << decimal_largo << endl; // bytes: 8 | bits: 64
    long double double_long = 3.1416826812688L; //byte: 12 | bits: 96
    cout << " long double, decimal_long: " << double_long << endl;

    

}