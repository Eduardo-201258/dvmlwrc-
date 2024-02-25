#include <iostream>
using namespace std;

void ordenar(int& menor, int& mayor){
    if(mayor<menor){
        int aux = menor;
        menor = mayor;
        mayor = aux;
    }
}
bool es_primo(int x){
    int i =2;
    while((i <= x/2) && (x % i != 0)){
        i++;
    }
    return (i == x/2+1);
}
bool primos(int min, int max){
    cout << "Numeros primos entre "<<min<<" y "<<max<<endl;
    for(int i=min;i<=max;i++){
        if(es_primo(i)){
            cout<<i<<" ";
        }
    }
}
int main(){
    int min, max;
    cout << "Introduzca un rango de valores\n";
    cin >> min >> max;
    ordenar(min, max);
    primos(min,max);
}