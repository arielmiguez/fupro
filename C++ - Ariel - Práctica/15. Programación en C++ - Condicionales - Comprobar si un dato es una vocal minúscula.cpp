#include <iostream>
using namespace std;

/*Escriba un programa que lea la entrada est�ndar un car�cter
e indique en la salida estandar si el car�cter es una vocal 
min�scula o no. */

int main() {
	char letra;
	
	cout<<"Digite un car�cter: "; cin>>letra;
	
	switch(letra){
		case 'a': 
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"Es una vocal min�scula"; break;
		default: cout<<"Es una vocal may�scula"; break;
	}
	
	return 0;
}

