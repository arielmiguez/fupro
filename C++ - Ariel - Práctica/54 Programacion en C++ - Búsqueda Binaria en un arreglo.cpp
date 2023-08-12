#include <iostream>
using namespace std;

int main() {
	int numeros[] = {1, 2, 3, 4, 5};
	int i, d, m, dato;
	bool bandera = false;
	
	dato = 2;
	
	// Algoritmo de la búsqueda binaria.
	i = 0;
	d = 4; // El índice máximo del arreglo es 4 (para un arreglo de tamaño 5).
	
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
		cout << "El número ha sido encontrado en la pos: " << m << endl;
	} else {
		cout << "No se ha encontrado el número." << endl;
	}
	return 0;
}
