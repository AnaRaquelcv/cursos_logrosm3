#include <iostream>
#include <cmath>

using namespace std;

int main() { 
    int n1, n2, resultado;
    
    cout << "Introduce un numero: ";
    cin >> n1;
    
    cout << "Introduce otro numero: "; 
    cin >> n2;
    
    resultado = n1 * n2;
    
    cout << "El resultado de la multiplicacion es: " << resultado << endl;

    return 0;
}