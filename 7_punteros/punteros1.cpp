#include <iostream>

using namespace std;

int main() {

    int n{100};

    // Usando el operador de dirección
    int *ptr = &n; // estoy asignando la direccion de memoria de la variable n al puntero ptr.

    cout << "Imprimiendo la direccion de memoria de la variable" << endl;
    cout << '\t' << ptr << endl;
    cout << '\t' << &n << endl;

    cout << "Imprimiendo el valor de la variable" << endl;
    cout << '\t' << n << endl;
    cout << '\t' << *ptr << endl;

    *ptr = 10000;
    cout << "Imprimiendo el valor de la variable despues del cambio" << endl;
    cout << '\t' << n << endl;
    cout << '\t' << *ptr << endl;

    return 0;
}
