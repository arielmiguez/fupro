#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int>numeros = {3,2,1,5,4};
	int aux, min;
	
	// Algoritmo del Ordenamiento por Selección.
	for(int i=0; i<5; i++) { 
		min = i;
		
		for(int j=i+1; j<5; j++) { 
			if(numeros[j]< numeros[min]){
				min = j;
			}
		}
		
		aux = numeros[i];
		numeros[i] = numeros[min];
		numeros[min] = aux;
	}
	
	cout<<"\nOrden Ascendente: ";
	for(int i=0;i<5;i++) { 
		cout<<numeros[i]<<" ";
	}
	
	cout<<"\nOrden Descendente: ";
	for(int i=4;i>=0;i--) { 
		cout<<numeros[i]<<" ";
	}
	return 0;
}

