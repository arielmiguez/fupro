#include <iostream>
using namespace std;

int main() {
	int numeros[]= {4,1,2,3,5};
	int aux;
	for(int i=0;i<5;i++) { 
		if(numeros[i] > numeros[i+1]){
			aux = numeros[i];
			numeros[i] = numeros[i+1];
			numeros[i+1] = aux;
		}
	}
	
	cout<<"ORDEN ASCENDENTE: ";
	for(int i=0;i<5;i++) { 
		cout<<numeros[i]<<" ";
	}
	
	cout<<"\nORDEN DESCENDENTE: ";
	for(int i=4;i>=0;i--) { 
		cout<<numeros[i]<<" ";
	}
	return 0;
}

