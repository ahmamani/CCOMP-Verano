#include <iostream>

using namespace std;

void print(const int *arr, const int tam) {
    cout << "[ ";
    for(int i = 0; i < tam; i++, arr++)
        cout << *arr << " ";
    cout << "]" << endl;
}

void intercambio(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void invertirIterativo(int *ini, int *fin) {
    while(fin >= ini) {
        intercambio(ini++, fin--);
    }
}

void invertirRecursivo(int *ptrIni, int *ptrfin) {
	if (ptrfin <= ptrIni) {
		return;
	}	
    intercambio(ptrIni, ptrfin);
    invertirRecursivo(++ptrIni, --ptrfin);
}

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int tam = sizeof(arr) / sizeof(arr[0]);

    // EL NOMBRE DE UN ARREGLO ES EN EL FONDO UN PUNTERO AL PRIMER ELEMENTO DEL ARREGLO.
    cout << *arr << endl;
    
    int *ini = arr;
    int *fin = arr + tam - 1;

    print(arr, tam);
    invertirIterativo(ini, fin);    
    print(arr, tam);
    invertirRecursivo(ini, fin);
    print(arr, tam);

    return 0;
}
