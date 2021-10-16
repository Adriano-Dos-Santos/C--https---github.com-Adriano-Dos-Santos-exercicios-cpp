//Fazer um programa para ler um número inteiro N (máximo = 10) e uma matriz quadrada de ordem N 
//contendo números inteiros. Em seguida, mostrar a diagonal principal e a quantidade de valores 
//negativos da matriz. 



#include "iostream"

using namespace std;

int main() {

    int n, contadora = 1;

    //entrada de dados

    do {

    cout << "Qual a ordem da matriz: ";
    cin >> n;
    
    if (n > 10) {
        cout << "maximo = 10" << endl;
    } 
    
    } while (n > 10);

    int mat[n][n];  //matriz criada

    cout << endl;
    cout << "Digite os valores: " << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
            
        }
    }


    //diagonal principal
    cout << endl;
    cout << "Diagonal principal: " << endl;

    for (int i = 0; i < n; i++) {
        for (int j = i; j <= i; j++){

            cout << mat[i][j] << " ";
        }
    }

    //quantidade de negativos

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (mat[i][j] < 0) {
                contadora = contadora + 1;
            }
        }
    }
    cout << endl;
    cout << "Quantidade de negativos: " << contadora << endl;

    return 0;
}
