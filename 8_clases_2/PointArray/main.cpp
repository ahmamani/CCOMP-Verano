#include <iostream>
#include "PointArray.h"

using namespace std;

int main() {

    // PROBANDO EL CONSTRUCTOR POR DEFECTO.
    PointArray pa;
    cout << pa.getSize() << endl;

    // PROBANDO EL CONSTRUCTOR CON ARGUMENTOS.
    Point a;
    Point b(4, 5);
    Point c(6, 8);
    Point arr[] = {a, b, c}; // arreglo de Points estático.
    int tam = sizeof(arr) / sizeof(arr[0]);

    PointArray pa2(arr, tam);
    cout << pa2.getSize() << endl;

    //**************************************/
    if(true) {
        // PROBANDO EL CONSTRUCTOR COPIA
        PointArray pa3 = pa2;
    }

    

    return 0;

}
