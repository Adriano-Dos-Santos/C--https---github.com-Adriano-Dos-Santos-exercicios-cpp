//fazer um programa que leia uma quantidade de numeros e 
//diga se é possivel somar dois dos numeros digitados e ter como resultado o numero 8  

#include <iostream>

using namespace std;

int main () {

int i, j, sim;
int vet[4];

cout <<"Encontrar dois numeros que somados resultam no valor 8" << endl;

do {
    cout << "Digite uma sequencia de quatro numeros: " << endl;


    for (i=0;i < 4; i++) {
        cin >> vet[i];
    }

    sim=0;
    for (i=0;i < 4; i++) {
        for (j=i+1;j < 4; j++) {

            if (vet[i] + vet[j] == 8) {
                sim = 1;
            }

        }
    }

    cout << "Tem como somar dois elementos e dar 8? : ";
    
        if (sim == 1) {
        cout << "SIM" << endl;
    }
    else {
        cout << "NAO" << endl;
    }
} while (sim != 2);

}