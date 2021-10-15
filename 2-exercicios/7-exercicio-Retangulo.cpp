#include <iostream>
#include <math.h>
#include <iomanip>

using std::cout;
using std::cin;
using std::string;
using std::endl;
using namespace std;

int main() {

    int base, altura;
    double area, perimetro, diagonal;
    
    cout << "Digite a base do retangulo: ";
    cin >> base;
    cout << "Digite a altura do retangulo: ";
    cin >> altura;

    area = base * altura;
    perimetro = (base * 2) + (altura * 2);
    diagonal = sqrt(pow(base,2) + pow(altura,2));

    cout << "area: " << area << endl;
    cout << "perimetro: " << perimetro << endl;    
    cout << "diagonal: " << std::fixed << setprecision(3) << diagonal << endl;
}