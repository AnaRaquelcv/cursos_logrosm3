#include <iostream>
using namespace std;

int main() {
  int numero;
  do {
    cout << "Ingrese un número entero positivo: ";
    cin >> numero;

    if (numero <= 0) {
      cout << "Por favor, ingrese un número entero positivo." << endl;
    }
  } while (numero <= 0);

  
  int numeroOriginal = numero; 
  cout << "Módulo por 10 del número " << numeroOriginal << ":" << endl;

  while (numero > 0) {
    int modulo = numero % 10;
    cout << "  " << numero << " % 10 = " << modulo << endl;
    numero /= 10; 
  }

  return 0;
}