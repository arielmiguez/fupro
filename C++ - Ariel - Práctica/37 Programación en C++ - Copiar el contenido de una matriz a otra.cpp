/*
Hacer una matriz de tipo entera de 2 * 2, llenarla de números y luego 
copiar todo su contenido hacia otra matriz.
*/

#include <iostream>
#include <matrix>
#include <cstdlib>

using namespace std;

int main() {
	matrix <int> matriz1(2,2,0);
	matrix <int> matriz2(2,2,0);
	
	// Llenar la matriz con números aleatorios
	cout << "=== Matriz N° 1: ===" << endl;
	for (size_t i = 0; i < matriz1.size(0); i++) {
		for (size_t j = 0; j < matriz1.size(1); j++) {
			//llenamos la matriz con valores menores a 100.
			matriz1[i][j] = rand() % 101; 
			//imprimimos la matriz.
			cout << matriz1[i][j] << " "; 
		}
		//salto de linea para que luego de llenar los 2 valores, salte de línea.
		cout << endl;
	}
	
	cout << endl;
	//pasamos de matriz1 a matriz2.
	cout << "=== Matriz N° 2: ===" << endl;
	for (size_t i = 0; i < matriz1.size(0); i++) {
		for (size_t j = 0; j < matriz1.size(1); j++) {
			matriz2[i][j] = matriz1[i][j];
			cout << matriz2[i][j] << " "; 
		}
		//salto de linea para que luego de llenar los 2 valores, salte de línea.
		cout << endl;
	}
	
	return 0;
}

