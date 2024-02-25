#include<iostream>
#include<fstream>
using namespace std;

enum Codigo{
    OK, ERROR_APERTURA, ERROR_FORMATO
};
void procesar(int num){
    cout<<num<<endl;
}
void leer(ifstream& fich, int& num){
    fich>>num;
}
void leer_fichero(const string& nombre_fichero, Codigo& ok)
{
    ifstream f_ent;
    f_ent.open(nombre_fichero.c_str());
    if(f_ent.fail()){
        ok = ERROR_APERTURA;
    }else{
        int numero;
        leer(f_ent, numero);
        while(!f_ent.fail()){
            procesar(numero);
            leer(f_ent,numero);
        }
        if(!f_ent.fail() || f_ent.eof()){
            ok = OK;
        }else{
            ok = ERROR_FORMATO;
        }
        f_ent.close();
    }
}
void codigo_error(Codigo ok){
    switch (ok)
    {
    case OK:
        cout<<"Fichero procesado correctamente"<<endl;
        break;
    case ERROR_APERTURA:
        cout<<"Error en la apertura"<<endl;
        break;
    case ERROR_FORMATO:
        cout<<"Error en la lectura del fichero"<<endl;
        break;
    }
}
int main(){
    Codigo ok;
    string nombre_fichero;
    cout<<"Ingrese nombre del fichero\n";
    cin>>nombre_fichero;

    leer_fichero(nombre_fichero, ok);
    codigo_error(ok);
}