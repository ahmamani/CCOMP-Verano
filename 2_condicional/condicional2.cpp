#include <iostream>

using namespace std;

int main() {

    int num1;
    int num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if (num1 > num2){
        cout << "el numero " << num1 << " es mayor que " << num2 << endl;
    } else if (num1 < num2) {
        cout << "el numero " << num1 << " es menor que " << num2 << endl;
    } else {
        cout << "los numeros son iguales" << endl;
    }

    /*
       5   10
    *  El numero 5 es mayor/menor que 10
    *  Los numeros son iguales
    * */
    
    return 0;
}