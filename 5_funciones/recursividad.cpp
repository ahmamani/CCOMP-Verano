#include <iostream>

using namespace std;

int fib(int n);
int potencia(int base, int exp);

int main() {

    cout << fib(5) << endl;
    cout << potencia(5, 3) << endl;

    return 0;
}

int fib(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}

int potencia(int base, int exp) {
    if ( exp == 1 )
        return base;
    else
        return base * potencia(base, --exp);
}

