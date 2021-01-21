#include <iostream>
#include "Estudiante.h"

using namespace std;

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} ;

    // ¿Qué imprime?
    cout << '\t' << arr << endl;

    // Rodrigo dice: imprime 1. x
    // Enrique dice: imprimiria el tamaño x
    // Ayrton dice: imprime 1. x
    // Mateo dice: imprime 1-
    // Ana dice: DIRECCION DE MEMORIA.  si
    // Luis dice: imprime 1 x
    // Marela dice: imprime 1 x
    // Rafael dice: DIRECCION DE MEMORIA x
/*******************************************************************/
    char arr1[] = "Hola Mundo";
    cout << '\t' << arr1 << endl;
    cout << '\t' << arr1[0] << endl;
    cout << '\t' << arr1[1] << endl;
    cout << '\t' << arr1[2] << endl;
    cout << '\t' << arr1[3] << endl;

    char arr2[] = {'H', 'o', 'l', 'a', '\0'};
    //char arr2[] = "Hola";
    cout << '\t' << arr2 << endl;
/*******************************************************************/
    Estudiante e1("Luis", "Huachaca", 47632);
    Estudiante e2("Leonardo","Gallegos", 69420);
    Estudiante e3("Enrique","Ticona",47881);
    Estudiante e4("Ana","Concha", 45233);
    Estudiante e5("Rodrigo","Torres",47891);
    Estudiante e6("Mateo","Rodriguez", 1000101);
    Estudiante e7("Rafael", "Ramirez", 1977);
    Estudiante e8("Ayrton","Chávez", 47513);
    Estudiante e9("Manuel", "Vargas", 1977);
    Estudiante e10("Faraón","Gutierrez", 5370);

    Estudiante arr3[] = {e1, e2, e3, e4, e5, e6, e7, e8, e9, e10};

    arr3->print();

    return 0;
}
