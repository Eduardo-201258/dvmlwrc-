#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>

using namespace std;
enum Color{
    ROJO, AZUL, AMARILLO
};
int main(){
    char caracter = char(65);
    cout << " ASCII a char: " << caracter << endl;
    int entero = int('a');
    cout << " Char a entero  : " << entero << endl;
    int convert = int(ROJO);
    cout << "  Valor de ROJO en enumeracion Color a Int: " << convert <<endl;
    int entero2 = int(3.1416);
    cout << " Decimal a entero" << endl;
    double decimal = double(3);
    cout << " Entero a Decimal" << endl;
    string cadena = "hello\n";
    cout << " String: " << cadena;
    Color color = Color(1);
    cout << " Numero de color en el Enum: " << color << endl;
    Color color2 = Color(color + 1);

    int n_convert = 10;
    string str = to_string(n_convert);

    cout << "String: " << str <<endl;

    int convert_n = atoi(str.c_str());
    cout << "Int: " << convert_n;

}    
