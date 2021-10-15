//Fazer um programa para ler o nome e idade de duas pessoas. Ao final mostrar uma mensagem com os 
//nomes e a idade média entre essas pessoas, com uma casa decimal


#include <iostream>
#include <iomanip>
#include <string>
#include <climits>

using namespace std;

int main () {

    int  idade1, idade2; 
    double media;
    string nome1, nome2;

    cout << "Digite o primeiro nome:" ;
    getline (cin, nome1);    
    cout << "Digite a primeira idade: " ;
    cin >> idade1;
    
    cin.ignore(INT_MAX, '\n'); 
    cout << "Digite o segundo nome:" ;
    getline (cin, nome2);    
    cout << "Digite a segunda idade: " ; 
    cin >> idade2;

    media = (idade1 + idade2)/2;

    cout << "Media das idades: " << fiex << setprecision(1) media; 

}   