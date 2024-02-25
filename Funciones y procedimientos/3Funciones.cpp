#include <iostream>
using namespace std;

int mayor(int x, int y, int z){
    if(x>y){
        if(x>z){
            return x;
        }else if(y>z){
            return y;
        }else {
            return z;
        }
    }else if(y>z){
        return y;
    }else {
        return z;
    }
}
int menor(int x, int y, int z){
    if(x<y){
        if(x<z){
            return x;
        }else if(y<z){
            return y;
        }else {
            return z;
        }
    }else if(y<z){
        return y;
    }else {
        return z;
    }
}
void ordenar(int& a, int& b, int& c){
    int aux, aux2;
    if(a<b){
        if(a<c){
            if(b<c){
                a=a;
                b=b;
                c=c;
                cout << a <<"-"<<b<<"-"<<c;
            }
            else{
                aux=c;
                a=a;
                b=c;
                c=aux;
                cout << a <<"="<<b<<"=-"<<c;
            }
        }else{
            //c menor, a 2do, b 3ro
            aux = a;
            aux2 = b;
            a = c;
            b = aux;
            c = aux2;
            cout << a <<" "<<b<<" "<<c;
        }
    }else if(b<c){
        if(a<c){
            //b 1ro, a 2do, c 3ro
            aux = a;
            a = b;
            b = aux;
            cout << a <<"+"<<b<<"+"<<c;
        }
    }else if(c<a){
        //c 1ro, a 2do, b 3ro
        aux = a;
        a = c;
        c = aux;
        cout << a <<"|"<<b<<"|"<<c;
    }else{
        a = b;
    }
}
int main(){
    int x;
    int y;
    int z;

    cin >> x;
    cin >> y;
    cin >> z;

    int n_mayor = mayor(x,y,z);
    cout << "El mayor es: " << n_mayor <<endl;
    int n_menor = menor(x,y,z);
    cout << "El menor es: " << n_menor <<endl;
    ordenar(x,y,z);
    //cout << "Numeros ordenados: " << x << "," << y << "," << z;
}