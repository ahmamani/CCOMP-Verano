#include <iostream>
#include "Estudiante.h"

using namespace std;

int main() {

    Estudiante e10("Faraón","Gutierrez", 5370);

    Estudiante *ptr = &e10;

    // Cuando es un puntero a una clase, se invoca a las funciones miembro de la clase
    // usando el operdor -> (flechita)
    e10.print();
    ptr->print();
    (*ptr).print();

    ptr->setNombre("Manuel");
    ptr->print();
    
    return 0;
}
