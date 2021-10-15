//ler dois numeros e dizer se eles foram digitados em ordem crescente ou decrescente


#include <iostream> 

using namespace std;

int main () {

    int x, y;

    do {
    cout << "Digite o valor de x: ";
    cin >> x;
    cout << "Digite o valor de y: ";
    cin >> y;

    if (x > y) {
        cout << "Decrescente" << endl;
    }
    else {
        cout << "Crescente" << endl;
    }

    } while (x != y);

}