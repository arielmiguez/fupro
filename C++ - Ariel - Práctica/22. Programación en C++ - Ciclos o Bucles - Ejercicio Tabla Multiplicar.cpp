#include <iostream>
#include <stdlib.h>

/* 1. Realice un programa que solicite de la entrada est�ndar
un entero del 1 al 10 y muestre en la salida est�ndar su
tabla de multiplicar.
*/
using namespace std;

int main() {
	
	int numero;
	do{
	cout<<"Digite un n�mero: "; cin>>numero;
	}while((numero<1) || (numero>10)); // || operador l�gico �.
	
	for(int i=1; i<=20; i++){
		cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
	}
	system("pause");
	return 0;
}

