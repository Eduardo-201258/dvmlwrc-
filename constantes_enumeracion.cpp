#include <iostream>
using namespace std;

int main(){
    cout << "Nueva Linea\n";
    cout << "Retorno \r 1 2 3 4" << endl;
    cout << "Retroceso \b 1 2 3 4" << endl;
    cout << "Tabulador \t 1 2 3 4" << endl;
    cout << "Tabulador vertical \v 1 2 3 4" << endl;
    cout << "Avance de pagina \f" << endl;
    cout << "Sonido \a" << endl;
    cout << "Notación octal o hexadecimal \137 \t \x57 ";

    enum Color {
        Rojo,
        Azul,
        Amarillo,
        Verde
    };

    const bool OK = true ;
    const char SONIDO = '\a' ;
    const short ELEMENTO = 1000 ;
    const int SEGMIN = 60 ;
    const int MINHOR = 60 ;
    const int SEGHOR = SEGMIN * MINHOR ;
    const long ULTIMO = 100000L ;
    const long long TAMANO = 1000000LL ;
    const unsigned short VALOR = 100U ;
    const unsigned FILAS = 200U ;
    const unsigned long COLUMNAS = 200UL ;
    const unsigned long long NELMS = 2000ULL ;
    const float N_E = 2.7182F ;
    const long double N_PI = 3.141592L ;
}