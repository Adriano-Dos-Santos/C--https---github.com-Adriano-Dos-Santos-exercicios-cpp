#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;


int main() {

    int i, j, n, m;

    cout << "Qual o numero de linhas da matriz?";
    cin >> n;

    cout << "Qual o numero de colunas da matriz?";
    cin >> m;

    int mat[n][m];

    for (i = 0; i < n; i++){
     for (j = 0; j < m; j++){
        cout << "Elemento ["<< i << ","<< j << "]:";
        cin >> mat[i][j];
    }   
    }
    
    cout << "Matriz digitada: " << endl;
    for (i = 0; i < n; i++){
     for (j = 0; j < m; j++){
        cout << mat[i][j];        
    }   
        cout << endl;
    }
}