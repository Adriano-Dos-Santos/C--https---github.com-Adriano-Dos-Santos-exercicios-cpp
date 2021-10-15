//Leia 2 valores inteiros X e Y (em qualquer ordem). A seguir, calcule e mostre a soma dos números 
//impares entre eles.


#include <iostream>
#include <math.h>


using namespace std;

int main () {
    
    int x, y, i, soma, guardar;

    do {
    soma = 0;

    cout << "digite dois numeros: " << endl;
    cin >> x;
    cin >> y;

    if (x > y) {
        guardar = x;
        x = y;
        y = guardar;
    }

    for (i = x+1; i < y; i++) {

        if (i%2 != 0) {
            soma = soma + i;
        }
    
    }

    cout << "Soma dos impares = " << soma << endl;

    } while (i != 999);

}