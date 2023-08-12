/*
Desarrollar un programa que determine si una matriz
es simétrica o no. Una matriz es simétrica si es 
cuadrada y si es igual a su matriz transpuesta.

/1 2 3/      /1 4 7/
/4 5 6/ -->  /2 5 8/
/7 8 9/      /3 6 9/

*/

#include <iostream>
#include <matrix>
using namespace std;

int main() {
	//DEFINIR VARIABLES.
	matrix <int> numeros(100,100,0);
	int filas, columnas;
	char bandera = false;
	
	//ENTRADA DE FILAS Y COLUMNAS.
	cout<<"Ingrese el número de filas: ";
	cin>>filas;
	cout<<"Ingrese el número de columnas: ";
	cin>>columnas;
	
	for(int i=0; i<filas; i++) { 
		for(int j=0; j<columnas; j++) { 
			cout<<"Ingrese un número ["<<i<<"]["<<j<<"]:";
			cin>>numeros[i][j];
		}
	}
	
	// ====== RAZONAMIENTO ====== //
	
	//Si filas = columnas, entramos al bucle.
	//Si NO lo es, directamente lo obviamos.
	if(filas == columnas){
		for(int i=0; i<filas; i++) { 
			for(int j=0; j<columnas; j++) { 
				if(numeros[i][j] == numeros[j][i]){
					bandera = true;
				}
			}
		}
	}
	
	//Bandera está definida por default como FALSE,
	//Si el IF anterior da falso, bandera = FALSE,
	//Así que entraría en el ELSE.
	if(bandera == true){
		cout<<"-> La matriz es simétrica.";
	}
	else{
		cout<<"-> La matriz NO es simétrica.";
	}
	
	return 0;
}

