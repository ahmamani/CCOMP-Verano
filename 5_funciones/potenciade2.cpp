#include <iostream>

using namespace std;

bool esPotenciaDeDos(int num) {
    int i = 1;
    while( i <= num) {
        if (i == num)
            return true;
        i *= 2;
    }
    return false;
}

/*
* &
*          10000 &  
*          01111
*         -------
*          00000
*/

bool esPotenciaDeDosConBitwiseOp(int num) {
    if( (num & (num - 1))  == 0 )
        return true;
    else
        return false;
}

int main() {

    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    cout << esPotenciaDeDos(num) << endl;
    cout << esPotenciaDeDosConBitwiseOp(num) << endl;

}

