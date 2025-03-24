#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

int main() {
    string texto;
    int contadorVocales = 0;

    cout << "Ingrese una cadena de texto: ";
    getline(cin, texto);

    for (int i = 0; i < texto.length(); i++) {
        char caracter = texto[i];
        caracter = tolower(caracter); 

        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
            contadorVocales++;
        }
    }

    cout << "La cadena tiene " << contadorVocales << " vocales." << endl;

    return 0;
}