#include<iostream>
using namespace std;

class Punto{
    private:
        int x,y;
    public:
        Punto();
        void setPunto(int,int);
        int getX();
        int getY();
};

Punto::Punto(){
}

void Punto::setPunto(int _x, int _y){
    x = _x;
    y = _y;
}

int Punto::getX(){
    return x;
}

int Punto::getY(){
    return y;
}

int main(){
    Punto p1;
    p1.setPunto(10,10);
    cout<<p1.getX()<<endl;
    cout<<p1.getY()<<endl;
    
}