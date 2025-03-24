#include <iostream>
using namespace std;

int main() {
    int numero;
    int sumaPositivos = 0;

    cout << "Introduce una serie de números (ingresa un número negativo para terminar):" << endl;

    while (true) {
        cout << "Número: ";
        cin >> numero;
        if (numero < 0) {
            break; 
        }
        if (numero > 0) {
            sumaPositivos += numero;
        }
    }
    cout << "La suma de los números positivos ingresados es: " << sumaPositivos << endl;

    return 0;
}