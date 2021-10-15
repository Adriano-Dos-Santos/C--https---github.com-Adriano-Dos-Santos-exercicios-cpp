#include <iostream>
#include <iomanip>
#include <string>
#include <climits>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main () {

  int horas;

  cout << "Que horas sao? ";
  cin >> horas;

  if (horas < 12) {
    cout << "Bom dia!";
  }
  else if (horas >= 12 && horas < 18) {
    cout << "Boa Tarde!";
  }
  else if (horas >= 18) {
    cout << "Boa noite!";
  }


  return 0;
}