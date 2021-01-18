#include <iostream>
#include "Estudiante.h"

using namespace std;

void print(const Estudiante arr[], const int tam) {
    cout << "[ " << endl;
    for(int i = 0; i < tam; i++)
        arr[i].print();
    cout << "]" << endl;
}

int main() {

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

    Estudiante arr[] = {e1, e2, e3, e4, e5, e6, e7, e8, e9, e10};

    int tam = sizeof(arr) / sizeof(arr[0]);

    print(arr, tam);


}
