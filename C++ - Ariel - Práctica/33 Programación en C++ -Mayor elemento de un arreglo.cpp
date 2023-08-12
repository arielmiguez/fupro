/*
Desarrolle un programa que lea de la entrada est�ndar
un vector de enteros y determine el mayor elemento del 
vector.
*/

#include <iostream>
using namespace std;

int main() {
	int numeros[100], n, mayor;
	
	cout << "Ingrese el n�mero de elementos: ";
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cout << "Ingrese un n�mero: ";
		cin >> numeros[i];
	}
	
	// Inicializar 'mayor' con el primer elemento del vector
	mayor = numeros[0];
	
	for (int i = 1; i < n; i++) {
		if (numeros[i] > mayor) {
			mayor = numeros[i];
		}
	}
	
	cout << "El mayor elemento del vector es: " << mayor << endl;
	
	return 0;
}

