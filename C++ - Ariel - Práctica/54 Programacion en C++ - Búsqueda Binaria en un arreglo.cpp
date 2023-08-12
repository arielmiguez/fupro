#include <iostream>
using namespace std;

int main() {
	int numeros[] = {1, 2, 3, 4, 5};
	int i, d, m, dato;
	bool bandera = false;
	
	dato = 2;
	
	// Algoritmo de la b�squeda binaria.
	i = 0;
	d = 4; // El �ndice m�ximo del arreglo es 4 (para un arreglo de tama�o 5).
	
	while (i <= d) {
		m = (i + d) / 2;
		
		if (numeros[m] == dato) {
			bandera = true;
			break;
		} else if (numeros[m] > dato) {
			d = m - 1;
		} else {
			i = m + 1;
		}
	}
	
	if (bandera) {
		cout << "El n�mero ha sido encontrado en la pos: " << m << endl;
	} else {
		cout << "No se ha encontrado el n�mero." << endl;
	}
	return 0;
}
