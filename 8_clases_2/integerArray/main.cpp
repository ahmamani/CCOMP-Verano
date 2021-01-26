#include <iostream>
#include "IntegerArray.h"

using namespace std;

int main() {

    IntegerArray a(2);

    //TODO: Implementar un método de la clase para insertar  
    //TODO: elementos al final.
    a.push_back(4);
    a.push_back(2);

    //TODO: Implementar un método de la clase para eliminar  
    //TODO: elementos del final.
    a.remove();

    //TODO: Implementar un método de la clase para imprimir  
    //TODO: los elementos.
    a.print();


    return 0;
}
