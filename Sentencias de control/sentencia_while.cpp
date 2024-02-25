#include <iostream>
using namespace std;

int main(){
    int resp;

    do{
        cout << "/////Services/////////\n";
        cout << "1.- Recharger\n";
        cout << "2.- View Balanced\n";
        cout << "3.- Retreat\n";

        cout << "Select option: \n >>";
        cin >> resp;
        
        while(cin.fail()){
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid Entry";
            cin >> resp;
        }
        while (resp <=1 || resp >=3)
        {
            if (resp==1){
                cout << "You would make a deposit\n";
                break;
            }else if(resp==2){
                cout << "You would view the balanced account\n";
                break;
            }else if(resp==3){
                cout << "You world retreat money in your account\n";
                break;
            };
            
        }
        
    }while(resp < 1 || resp >4);
}           