/* Función para evaluar si es primo */
#include <iostream>

using namespace std;

bool es_primo(int num){
	for (int i = 1; i <= num/2; i++) {
		if (num == 1) {
			return true;
		}
		if (num % i == 0) {
			if (i == num/2) {
				return false;
			}
		continue;
		}
		else if ((num % i != 0) && (i == num / 2)) {
			return true;
		}
	}
}

int main () {

    cout << es_primo(102) << endl;

}


