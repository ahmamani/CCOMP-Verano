#include <iostream>
#include "Estudiante.h"

using namespace std;

int longitudCadena(char arr[]) {
    int i = 0, len = 0;
    while(arr[i++] != '\0') {
        len++;
    }
    return len;
}

int longitudCadenaConPtr1(char *arr) {
    int len = 0;
    while(*arr++ != '\0')
        len++;
    return len;
}

int longitudCadenaConPtr2(char *arr) {
    char *ptr = arr;
    while(*arr++ != '\0');
    return arr-ptr-1;
}

int main() {

    char arr[] = "Ciencia de la Computacion";

    cout << longitudCadena(arr) << endl;
    cout << longitudCadenaConPtr1(arr) << endl;
    cout << longitudCadenaConPtr2(arr) << endl;

    return 0;
}
