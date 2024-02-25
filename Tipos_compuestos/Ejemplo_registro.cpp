#include <iostream>
#include <string>

using namespace std;

const int SEGMIN = 60;
const int MINHOR = 60;
const int MAXHOR = 24;
const int SEGHOR = SEGMIN * MINHOR;

struct Tiempo{
    int horas;
    int minutos;
    int segundos;
};

void leer_rango(int& num, int inf, int sup){
    do{
        cin >> num;
    }while(!((num >= inf) && (num < sup)));
}

void leer_tiempo(Tiempo& t){
    leer_rango(t.horas, 0, MAXHOR);
    leer_rango(t.minutos, 0, MINHOR);
    leer_rango(t.segundos, 0, SEGMIN);
}

void escribir_tiempo(Tiempo& t){
    cout << t.horas <<":"<<t.minutos<<":"<<t.segundos;
}
int tiempo_a_segundos(const Tiempo& t){
    return (t.horas * SEGHOR) + (t.minutos * SEGMIN) + (t.segundos);
}
void seg_a_tiempo (int sg, Tiempo& t){
    t.horas = sg /SEGHOR;
    t.minutos = (sg % SEGHOR) / SEGMIN;
    t.segundos = (sg % SEGHOR) % SEGMIN;
}
void diferencia(const Tiempo& t1, const Tiempo& t2, Tiempo& dif){
    seg_a_tiempo(tiempo_a_segundos(t2) - tiempo_a_segundos(t1), dif);
}

int main(){
    Tiempo t1, t2, dif;
    leer_tiempo(t1);
    leer_tiempo(t2);
    diferencia(t1, t2, dif);
    escribir_tiempo(dif);
    cout << endl;
}