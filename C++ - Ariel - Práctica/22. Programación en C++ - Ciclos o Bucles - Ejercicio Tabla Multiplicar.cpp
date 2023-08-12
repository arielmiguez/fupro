#include <iostream>
#include <stdlib.h>

/* 1. Realice un programa que solicite de la entrada estándar
un entero del 1 al 10 y muestre en la salida estándar su
tabla de multiplicar.
*/
using namespace std;

int main() {
	
	int numero;
	do{
	cout<<"Digite un número: "; cin>>numero;
	}while((numero<1) || (numero>10)); // || operador lógico ó.
	
	for(int i=1; i<=20; i++){
		cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
	}
	system("pause");
	return 0;
}

