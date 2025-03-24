#include <iostream>
#include <cmath>

using namespace std;

int main() { 
    int n1, n2;
    
    cout << "Introduce un numero: ";
    cin >> n1;
    
    cout << "Introduce otro numero: "; 
    cin >> n2;

    if (n2 == 0) {
        cout << "Error: No se puede dividir por cero." << endl;
    } else {
        int resultado = n1 / n2; 
        cout << "El resultado de la division es: " << resultado << endl;
    }
        
    return 0;
}