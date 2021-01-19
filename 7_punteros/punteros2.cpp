#include <iostream>

using namespace std;

void cuadrado(int *ptr) {
    *ptr = *ptr * *ptr;
}

void intercambio(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main() {

    int y{10};
    cuadrado(&y);
    cout << y << endl;

    int a{10};
    int b{50};
    intercambio(&a, &b);
    cout << "Valor de a : " << a << endl;
    cout << "Valor de b : " << b << endl;

    return 0;
}
