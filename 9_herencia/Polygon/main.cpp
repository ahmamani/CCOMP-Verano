#include <iostream>
#include "PointArray.h"
#include "Polygon.h"
#include "Rectangle.h"

using namespace std;

int main() {

    // PROBANDO EL CONSTRUCTOR POR DEFECTO.
    PointArray pa;

    // PROBANDO EL CONSTRUCTOR CON ARGUMENTOS.
    Point a;
    Point b(4, 5);
    Point c(6, 8);
    Point arr[] = {a, b, c}; // arreglo de Points estático.
    int tam = sizeof(arr) / sizeof(arr[0]);

    PointArray pa2(arr, tam);

    //**************************************/
    Rectangle rec(a, b);

    cout << rec.area() << endl;


    return 0;

}
