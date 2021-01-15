#include <iostream>

using namespace std;

void intercambio(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main () {

    int a = 10;
    int b = 20;

    cout << "Antes del intercambio  -> a = " << a << endl;
    cout << "Antes del intercambio  -> b = " << b << endl;

    intercambio(a, b);

    cout << "Despues del intercambio  -> a = " << a << endl;
    cout << "Despues del intercambio  -> b = " << b << endl;

    return 0;
}