#include <iostream>
using namespace std;

/*Escriba un programa que lea la entrada estándar un carácter
e indique en la salida estandar si el carácter es una vocal 
minúscula o no. */

int main() {
	char letra;
	
	cout<<"Digite un carácter: "; cin>>letra;
	
	switch(letra){
		case 'a': 
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"Es una vocal minúscula"; break;
		default: cout<<"Es una vocal mayúscula"; break;
	}
	
	return 0;
}

