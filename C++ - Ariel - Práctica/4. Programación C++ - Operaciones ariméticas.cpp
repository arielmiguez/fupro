#include <iostream>
using namespace std;
/* 1. Escriba un programa que lea de la entrada est�ndar dos n�meros
y muestre en la salida estander su suma, resta, multiplicaci�n
y divisi�n. */

int main() {
	int n1, n2, suma=0, resta=0, multiplicacion=0, division=0;
	cout<<"Dijite un n�mero: "; cin>>n1;
	cout<<"Dijite otro n�mero: "; cin>>n2;
	
	suma=n1+n2;
	resta=n1-n2;
	multiplicacion=n1*n2;
	division=n1/n2;
	
	cout<<"\nLa suma es: "<<suma<<endl;
	cout<<"\nLa resta es: "<<resta<<endl;
	cout<<"\nLa multiplicaci�n es: "<<multiplicacion<<endl;
	cout<<"\nLa divisi�n es: "<<division<<endl;
	
	return 0;
}

