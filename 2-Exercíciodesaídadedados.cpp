#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int idade;
  double salario;
  string nome;
  char sexo;

  idade = 30;
  salario = 3500.31;
  nome = "Adriano Dos Santos";
  sexo = 'M';


  cout << "O funcionario " << nome << ", sexo  "<< sexo << ", ganha " << fixed << setprecision(1) << salario << " e tem " << idade << " anos";  

   return 0;
}