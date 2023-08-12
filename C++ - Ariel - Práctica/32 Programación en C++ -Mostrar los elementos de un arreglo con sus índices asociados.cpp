/*
Escriba un programa que lea de la entrada estándar
un vector de números y muestre en la salida estándar
los números del vector con sus indices asociados.
*/

#include <iostream>
using namespace std;

int main() {
	int numeros[100], n;
	
	cout<<"Ingrese el números de elementos: ";
	cin>>n;
	
	
	for(int i=0; i<n; i++) { 
		cout<<"Ingrese un número: ";
		cin>>numeros[i];
	}

	for(int i=0; i<n; i++) { 
		cout <<i << " -> " << numeros[i] << endl;
	}
	
	return 0;
}

