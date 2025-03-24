#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "Introduce dos numeros:";
    cin >> a>> b;
    if (a>b){  
        cout << "el numero mayor ingresado es:" <<a<< endl;
    } else if (a<b) {
        cout << "el numero menor ingresado es:" <<b<< endl;
    } else{
        cout << "los numeros ingresados son iguales";
    }
    return 0;
}