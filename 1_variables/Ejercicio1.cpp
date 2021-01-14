#include <iostream>

using namespace std;

int main() {

    /*
    * Implemente un programa que solicite por teclado un caracter e imprima
    * su número correspondiente en la table ASCII.
    */
    char caracter;
    
    cout << "Ingrese un caracter por favor: ";
    cin >> caracter;

    int valor = static_cast<int>(caracter);
    
    cout << "El numero correspondiente es: " << valor << endl;

    return 0;
}