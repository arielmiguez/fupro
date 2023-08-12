#include <iostream>
using namespace std;

int main() {
	int numeros[] = {3,2,1,5,4};
	int aux;
	
	// Algoritmo del ordenamiento por inserción.
	for(int i=0; i<5; i++){
		aux = numeros[i];
		
		
		while((i>0) && (numeros[i-1]>aux)){
			numeros[i] = numeros[i-1];
			//{3,3,1,5,4}
			//{2,3,3,5,4}
			//{2,2,3,5,4}
			//{1,2,3,5,5}
			i --;
		}
		
		numeros[i] = aux;
		//{3,2,1,5,4}
		//{2,3,1,5,4}
		//{1,2,3,5,4}
		//{1,2,3,4,5}
		
	}
	
	cout<<"\nOrden ascendente: ";
	for(int i=0; i<5; i++){
		cout<<numeros[i]<<" ";
	}
	
	cout<<"\nOrden descendente: ";
	for(int i=4; i>=0; i--){
		cout<<numeros[i]<<" ";
	}
	return 0;
}

