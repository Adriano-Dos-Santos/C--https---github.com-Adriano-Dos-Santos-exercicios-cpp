#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;


int main() {

    int n, soma=0,i;

    cout << "Qual a quantidade de numeros a serem digitados? ";
    cin >> n;

    int vet[n];

    for (i = 0; i < n; i++) {
        cout << "Digite o " << i+1 << " valor: ";
        cin >> vet[i];
    }
    for (i = 0; i < n; i++) {
        soma = soma + vet[i];
    }
    cout << "A soma dos valores digitados e: " << soma;

}