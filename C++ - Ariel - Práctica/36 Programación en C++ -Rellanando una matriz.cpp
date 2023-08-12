/*
Hacer un programa para rellenar una matriz pidiendo
al usuario el n° de filas y columnas, posteriormente
mostrar la matriz en pantalla.
*/

#include <iostream>
#include <matrix>
using namespace std;

int main() {
	matrix<int>numeros(10,10);
	int filas, columnas;
	
	cout<<"Ingrese el n° de Filas: ";
	cin>>filas;
	cout<<"Ingrese el n° de Columnas: ";
	cin>>columnas;
	
	//Almacenando elementos en la matriz.
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<"Ingrese un número ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}
	
	//Mostramos la matriz en pantalla.
	for(int i=0; i<filas; i++) { 
		for(int j=0; j<columnas; j++) { 
			cout<<numeros[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

