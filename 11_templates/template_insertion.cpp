#include <iostream>
#include "Point.h"

using namespace std;

template <typename T>
void insertion_sort(T lista[], int tam) {
    for (int i = 0; i < tam; i++) {
        T llave = lista[i];
        int j = i - 1;
        while ((j >= 0) && (llave < lista[j])) {
            lista[j + 1] = lista[j];
            j -= 1;
        }
        lista[j + 1] = llave;
    }    
}

template <typename T>
void print(const T arr[], const int tam) {
    cout << "[ ";
    for(int i = 0; i < tam; i++)
        cout << arr[i] << " ";
    cout << "]" << endl;
}

ostream& operator<<(ostream& output, const Point &p) {
    output << "(" << p.getX() << ", " << p.getY() << ")"; 
    return output;
}

int main() {

    int arrInts[] = {4, 5, 6, 3, 55, 10};
    int tam = sizeof(arrInts) / sizeof(arrInts[0]);

    insertion_sort<int>(arrInts, tam);
    print<int>(arrInts, tam);

    double arrDoubles[] = {1.2, 4.5, 2.3, 4.2, 0.5, 6.3};
    tam = sizeof(arrDoubles) / sizeof(arrDoubles[0]);

    insertion_sort<double>(arrDoubles, tam);
    print<double>(arrDoubles, tam);

    string arrCadenas[] = {"Rafael", "Rodrigo", "Manuel", "Mateo", "Ana"};
    tam = sizeof(arrCadenas) / sizeof(arrCadenas[0]);

    insertion_sort<string>(arrCadenas, tam);
    print<string>(arrCadenas, tam);

    Point a;
    Point b(4, 5);
    Point c(6, 8);
    Point d(8, 8);
    Point e(9, 8);
    Point arrPoints[] = {a, b, c, d, e};
    tam = sizeof(arrPoints) / sizeof(arrPoints[0]);

    insertion_sort<Point>(arrPoints, tam);
    print<Point>(arrPoints, tam);

    return 0;
}