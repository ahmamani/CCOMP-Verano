#include <iostream>

using namespace std;

void print(const int arr[], const int tam) {
    cout << "[ ";
    for(int i = 0; i < tam; i++)
        cout << arr[i] << " ";
    cout << "]" << endl;
}

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int tam = sizeof(arr) / sizeof(arr[0]);

    int *ptrIni = &arr[0];
    int *ptrFin = &arr[tam-1];

    print(arr, tam);

    while(ptrFin >= ptrIni) {
        int tmp = *ptrIni;
        *ptrIni = *ptrFin;
        *ptrFin = tmp;

        ptrIni++;
        ptrFin--; 
    }

    print(arr, tam);

    return 0;
}
