#include <iostream>
#include <iomanip>
#include <string>
#include <climits>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main () {

  double salario1, salario2;
  int idade;
  string nome1, nome2;
  char sexo;

  cout << "Digite o primeiro nome: ";
  getline(cin, nome1);
  cout << "Digite o primeiro salario: ";
  cin >> salario1;

  cout << "Digite o segundo nome: ";
  cin.ignore(INT_MAX, '\n'); 
  getline(cin, nome2);
  cout << "Digite o segundo salario: ";
  cin >> salario2;

  cout << "Digite uma idade: ";
  cin >> idade;
  cout << "Digite um sexo (F/M): ";
  cin >> sexo;

  std::cout << "Nome 1: " << nome1 << endl;
  cout << "Salario 1: " << salario1 << endl;
  cout << "Nome 2: " << nome2 << endl;
  cout << "Salario 2: " << salario2 << endl;
  cout << "Idade: " << idade << endl;
  cout << "Sexo: " << sexo << endl;


  return 0;
}