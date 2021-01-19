#include <iostream>

using namespace std;

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    int *ptr;

    ptr = &arr[0];
    cout << ptr << endl;
    cout << *ptr << endl;

    ptr = &arr[1];
    cout << ptr << endl;
    cout << *ptr << endl;

    ptr = &arr[2];
    cout << ptr << endl;
    cout << *ptr << endl;

    //---------------------------
    /*  
    * Aritmética de Punteros
    * si 'ptr = 644' y esta apuntando a un entero, 
    * entonces hacer 'ptr = ptr + 1', hará que el puntero apunto a 648
    */
    cout << "Aritmetica de Punteros" << endl;
    ptr = &arr[0];
    cout << *ptr << endl;
    ptr++;
    cout << *ptr << endl;
    ptr++;
    cout << *ptr << endl;
    ptr++;
    cout << *ptr << endl;
    

    return 0;
}
