#include <iostream>
#include <string>
using namespace std;


int main(){
    for(int i=0; i<5; i++){
        for(int j=0; j<i; j++){
            cout << "*";
        }
        cout << endl;
    }

    string productos[3] = {"Papas", "Galletas", "Refresco"};
    cout << "Lista de productos\n";
    for(int i=0; i<3; i++){
        cout << i+1+".-" << productos[i] << endl;
    }
}