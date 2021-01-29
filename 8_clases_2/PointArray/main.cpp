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

    pa2.print();
    cout << "\nPush_back : ";
    pa2.push_back(b);
    pa2.print();
    cout << "\ninsert : ";
    pa2.insert(1, c);
    pa2.print();
    cout << "\nremove : ";
    pa2.remove(1);
    pa2.print();

    return 0;

}
