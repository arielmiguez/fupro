/*
Desarrollar un programa que determine si una matriz
es sim�trica o no. Una matriz es sim�trica si es 
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
	cout<<"Ingrese el n�mero de filas: ";
	cin>>filas;
	cout<<"Ingrese el n�mero de columnas: ";
	cin>>columnas;
	
	for(int i=0; i<filas; i++) { 
		for(int j=0; j<columnas; j++) { 
			cout<<"Ingrese un n�mero ["<<i<<"]["<<j<<"]:";
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
	
	//Bandera est� definida por default como FALSE,
	//Si el IF anterior da falso, bandera = FALSE,
	//As� que entrar�a en el ELSE.
	if(bandera == true){
		cout<<"-> La matriz es sim�trica.";
	}
	else{
		cout<<"-> La matriz NO es sim�trica.";
	}
	
	return 0;
}

