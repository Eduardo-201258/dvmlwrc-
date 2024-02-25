#include <iostream>
#include <array>

using namespace std;

//-- Constantes ---
const int NAGENTES=20;
const double SUELDO=1000.0;
const double INCENTIVO=10.0;
const double PROMEDIO=2.0/3.0;

//-- Tipos ---
typedef array<double, NAGENTES> Ventas;

//-- leer_ventas ---
void leer_ventas(Ventas& ventas){
    for(int i=0;i<int(ventas.size()); i++){
        cout << "Ventas de empleado"<<(i+1)<<endl<<">> ";
        cin >> ventas[i];
    }
}
double calcular_media(const Ventas& ventas){
    int total_ventas = 0;
    for(int i=0;i<int(ventas.size());i++){
        total_ventas += ventas[i];
    }
    return (total_ventas/ventas.size());
}
double porcentaje(double porcentaje, double valor){
    return (porcentaje * valor)/100.0;
}
void imprimir_sueldos(const Ventas& ventas){
    double umbral = PROMEDIO * calcular_media(ventas);
    for(int i=0;i<int(ventas.size()); i++){
        double sueldo = SUELDO;
        if(ventas[i]>=umbral){
            sueldo += porcentaje(INCENTIVO, ventas[i]);
        }
        cout<<"Agente: "<<i<<" Sueldo: "<<sueldo<<endl;
    }
}
//-- Main ---
int main(){
    Ventas ventas;
    leer_ventas(ventas);
    imprimir_sueldos(ventas);
}