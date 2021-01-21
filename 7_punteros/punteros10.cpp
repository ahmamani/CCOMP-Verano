#include <iostream>

using namespace std;

int* funcion() {
    int x = 20;
    return &x;
}

int main() {
/*
    int *ptr;

    if(true) {
        int x = 10;
        ptr = &x;
    }

    int y = 1000;
    cout << *ptr << endl;
*/

    int *ptr = funcion();

    cout << *ptr << endl;

    return 0;
}
