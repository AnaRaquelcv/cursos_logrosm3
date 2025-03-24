//Pide al usuario dos números que representen un rango. Luego, utiliza un bucle para imprimir todos los números pares dentro de ese rango

#include <iostream>

using namespace std;

int main() {
    int inicio, fin;

    cout << "Introduce el inicio del rango: ";
    cin >> inicio;
    
    cout << "Introduce el fin del rango: ";
    cin >> fin;

    if (inicio > fin) {
        cout << "El inicio del rango debe ser menor o igual que el fin del rango." << endl;
        return 1;
    }

    // Imprimir los números pares dentro del rango
    cout << "Los números pares en el rango de " << inicio << " a " << fin << " son:" << endl;

    for (int i = inicio; i <= fin; i++) {
        if (i % 2 == 0) { // Verificar si el número es par
            cout << i << " ";
        }
    }

    return 0;
}