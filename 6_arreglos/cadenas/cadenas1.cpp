#include <iostream>

using namespace std;

bool esLetra(char car) {
    int valor = static_cast<int>(car);
    return ( (valor >= 65 && valor <= 90) || (valor >= 97 && valor <= 122) );
}

bool esMayuscula(char car) {
    int valor = static_cast<int>(car);
    return (valor >= 65 && valor <= 90);
}

char convertirAMinuscula(char letra) {
    int valor = static_cast<int>(letra);
    valor = valor + 32;
    return static_cast<char>(valor);
}

bool esPunto(char car) {
    return (static_cast<int>(car) == 46);
}

int main() {

    char cadenaDesordenada[] = "e6s0T9e6.eS.99u9n5a.CADENA";
    char actual = cadenaDesordenada[0];

    for ( int i = 0; actual != '\0'; actual = cadenaDesordenada[++i]) {
        if( esLetra(actual) )
            cout << (char)(esMayuscula(actual) ? convertirAMinuscula(actual) : actual);
        else 
            if(esPunto(actual))
                cout << ' ';
    }
    cout << endl;
    return 0;

}