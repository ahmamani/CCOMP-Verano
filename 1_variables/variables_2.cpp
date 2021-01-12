#include <iostream>

using namespace std;

int main() {

    unsigned short a = 65535;
    //  short   int (long)  long long
    //a = a + 1;
    // la función sizeof me retorna el tamaño de la variable en memoria
    cout << sizeof(a) << endl;
    cout << a << endl;
    // Esto me imprimirá 4, lo que significa que un INT ocupa 4bytes en memoria.
    /*
        11111111 11111111

        1   1  1  1  1 1 1 1
        128 64 32 16 8 4 2 1
              
    
    */

}
