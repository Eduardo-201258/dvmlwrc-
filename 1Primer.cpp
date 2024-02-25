#include <iostream>
using namespace std;

const double value_dollar = 17.22;

int main(){
    cout << "Convertir dolares a pesos" << endl;
    int dollars;
    cout << "Ingrese la cantidad de dolares que tiene: \n";
    cin >> dollars;
    double mxn_total = dollars * value_dollar ;
    cout << "Total en pesos MXN: " << mxn_total;
}