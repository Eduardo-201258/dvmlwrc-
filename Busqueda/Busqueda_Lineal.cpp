#include<iostream>
#include<array>

using namespace std;

typedef array<int, 5> Numeros;

int buscar(int x, const Numeros& n){
    x = int(n.size());
    bool ok = false;
    for(int i=0;(i<int(n.size()))&& !ok; i++ ){
        if(x==n[i]){
            ok = true;
            x=i;
        }
    }
    return x;
}

int main(){
    Numeros num;
    num[0] = 1;
    num[1] = 2;
    num[2] = 3;
    num[3] = 4;
    num[4] = 5;

    int id = 4;
    int p = buscar(id, num);
    cout<<p;
}
