#include <iostream>

using namespace std;

int main() {

    int num = 10;

    // Referencia es un álias. Es asignar otro nombre a la variable a la cual se va a referenciar.
    int &ref = num;

    ref++;

    cout << num << endl;

    return 0;

}