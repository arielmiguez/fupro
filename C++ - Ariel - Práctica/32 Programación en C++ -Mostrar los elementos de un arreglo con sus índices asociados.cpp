/*
Escriba un programa que lea de la entrada est�ndar
un vector de n�meros y muestre en la salida est�ndar
los n�meros del vector con sus indices asociados.
*/

#include <iostream>
using namespace std;

int main() {
	int numeros[100], n;
	
	cout<<"Ingrese el n�meros de elementos: ";
	cin>>n;
	
	
	for(int i=0; i<n; i++) { 
		cout<<"Ingrese un n�mero: ";
		cin>>numeros[i];
	}

	for(int i=0; i<n; i++) { 
		cout <<i << " -> " << numeros[i] << endl;
	}
	
	return 0;
}

