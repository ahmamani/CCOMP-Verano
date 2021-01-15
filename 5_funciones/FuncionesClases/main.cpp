#include <iostream>
#include <string>
#include "Estudiante.h"

using namespace std;

void modificarNombre(Estudiante &e) {
    string nombre;
    cout << "Ingrse su nuevo nombre por favor: ";
    getline(cin, nombre);

    e.setNombre(nombre);
}

int main () {

    Estudiante e1{"Luis", "Huachaca", 123456};
    Estudiante e2{"Giancarlo", "Roman", 234567};
    Estudiante e3{"Mateo", "Rodriguez", 234567};

    e1.print();
    e2.print();
    e3.print();

    modificarNombre(e1);

    e1.print();

    return 0;

}
