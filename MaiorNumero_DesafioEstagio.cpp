#include <iostream>

using namespace std;

int main() {

	int numero, maiorNumero = -1;
	
	while (cin >> numero && numero) {
		
        if (maiorNumero < numero)
			maiorNumero = numero;
	}

	cout << maiorNumero << endl;

	return 0;
}
