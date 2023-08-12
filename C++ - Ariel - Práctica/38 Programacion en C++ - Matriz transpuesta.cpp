/*
Realice una matriz que lea una matriz de 3x3 y ree su
matriz traspuesta. La matriz traspuesta es aquella en la 
que la columna i era la fila i de la matriz original.

/1 2 3/      /1 4 7/
/4 5 6/ -->  /2 5 8/
/7 8 9/      /3 6 9/

*/

#include <iostream>
#include <matrix>
using namespace std;

int main() {
	matrix <int> numeros(3,3,0);
	
	for(size_t i=0;i<numeros.size(0);i++) { 
		for(size_t j=0;j<numeros.size(1);j++) { 
			cout<<"Ingrese un número ["<<i<<"]["<<j<<"]: ";
			// [i] -> filas
			// [j] -> columnas
			cin>>numeros[i][j];
		}
	}
	
	cout<<endl;
	
	cout<<"=== Matriz Original: ==="<<endl;
	for(size_t i=0;i<numeros.size(0);i++) { 
		for(size_t j=0;j<numeros.size(1);j++) { 
			cout<<numeros[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl<<"=== Matriz Transpuesta: ==="<<endl;
	for(size_t i=0;i<numeros.size(0);i++) { 
		for(size_t j=0;j<numeros.size(1);j++) { 
			// [i] -> filas
			// [j] -> columnas
			cout<<numeros[j][i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

