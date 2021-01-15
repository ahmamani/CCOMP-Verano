#include <iostream>

using namespace std;

void incrementoPorCopia(int valor) {
    valor++;
    cout << "Incremento: " << valor << endl;
}

void incrementoPorReferencia(int &valor) {
    valor++;
    cout << "Incremento: " << valor << endl;
}

int main() {

    int v = 10;
    incrementoPorCopia(v);

    cout << "Main despues del paso por valor: " << v << endl;

    incrementoPorReferencia(v);

    cout << "Main despues del paso por referencia: " << v << endl;

}