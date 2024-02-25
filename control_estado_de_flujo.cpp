#include <iostream>
using namespace std;

int main(){
    int n;
    do{
        cout << "Introduzca un numero del 1 al 19: \n";
        cin >> n;
        while(cin.fail()){
            cin.clear();
            cin.ignore(1000, '\n');
            cout << " (ERROR) Introduzca un numero del 1 al 19:\n";
            cin >> n;
        }
    }while(!(n > 0 && n < 19));
    cout << "Valor: " << n << endl;    
}