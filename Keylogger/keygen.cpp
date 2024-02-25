#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>

using namespace std;

//izzi8length
string izziDefaultLong() {
    char passrnd;
    string pass;

    for(int i = 0; i < 8; i++) {
        passrnd = 97 + rand() % (122 - 97+1);
        pass += passrnd;
    }

    return pass;
}

int main(){
    string t_pass[200];
   
    int iterator=0;
    FILE *pass_gen = fopen("passwordsGEN.txt", "a+");

    srand(time(NULL));

    while (iterator < 200) {
        string pass = izziDefaultLong();
        fprintf(pass_gen, "%s\n", pass.c_str());
        iterator++;
    }

    fclose(pass_gen);
    
    cin.get();
}