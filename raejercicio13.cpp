#include <iostream>
using namespace std;

int main() {
    int numero;
    int mayor; 

    cout << "Introduce cinco números:" << endl;

    cout << "Número 1: ";
    cin >> mayor; 

    for (int i = 2; i <= 5; i++) {
        cout << "Número " << i << ": ";
        cin >> numero; // 

        if (numero > mayor) {
            mayor = numero; 
        }
    }
    cout << "El número mayor es: " << mayor << endl;

    return 0;
}