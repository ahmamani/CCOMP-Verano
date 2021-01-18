#include <iostream>

using namespace std;

void intercambio(int &i, int &j) {
    int tmp = i;
    i = j;
    j = tmp;
}

/*
* Invertir los elementos de un arreglo
*/
int invertir(int arr[], const int tam) {
    for(int i = 0; i < tam/2; i++) {
        intercambio(arr[i], arr[tam - i - 1]);
    }
}

void print(const int arr[], const int tam) {
    cout << "[ ";
    for(int i = 0; i < tam; i++)
        cout << arr[i] << " ";
    cout << "]" << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int tam = sizeof(arr) / sizeof(arr[0]);

    print(arr, tam);

    invertir(arr, tam);

    print(arr, tam);

    return 0;
}

