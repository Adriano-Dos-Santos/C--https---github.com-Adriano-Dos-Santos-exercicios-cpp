//Fazer um programa para ler nome, idade e altura de N pessoas. Depois, mostrar na 
//tela a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos, 
//bem como os nomes dessas pessoas caso houver. 



#include <iostream>
#include <string>
#include <climits>
#include <iomanip>


using namespace std;

int main() {

    int n, cont = 0;
    double soma=0, media, porcent;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;

    int idade[n];
    double altura[n];
    string nome[n];
    // receber dados
    for (int i = 0; i < n; i++) {

        cout << "Dados da " << i+1 << "a pessoa: " << endl;
        cout << "nome: ";
        getline(cin, nome[i]);
        cin.ignore(INT_MAX, '\n');
        cout << "idade: ";
        cin >> idade[i];
        cout << "altura: ";
        cin >> altura[i];
    }
    // media das alturas
    for (int i = 0; i < n; i++) {

        soma = soma + altura[i];
    }

    media = soma / n;

    cout << "Media das alturas : " << fixed << setprecision(2) << media << endl;

    // porcentagem das idades
    for (int i = 0; i < n; i++) {
        if (idade[i] < 16) {
            cont = cont + 1;

        }
    }

    porcent = (cont * 100)/ n;
    cout << "Pessoas com menos de 16 anos: " << porcent << "%" << endl;
    for (int i = 0; i < n; i++) {
        if (idade[i] < 16) {
            cout << nome[i] << endl;
        }
    }
    


}

