#include <iostream>

using namespace std;

int main() {

    // char = character
    char a = '9';

    // Tabla ASCII. Cada caracter tiene asociado un número.
    // Un casteo es una conversión de tipo. 
    // Estamos convirtiendo de char a int
    int valor = static_cast<int>(a);

    cout << valor << endl;
    cout << sizeof(a) << endl;


}