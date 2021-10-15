// ler tres valores e dizer qual deles e o menor


#include <iostream>

using namespace std;

int main() {

    int x, y, z;

    cout << "Digite tres numeros: ";
    cin >> x;
    cin >> y;
    cin >> z;    

    if (x < y && x < z) {
        cout << "O menor e: " << x;
    }
    else if (y < z) {
        cout << "O menor e: " << y;
    }
    else {
        cout << "O menor e: " << z;
    }

}

















