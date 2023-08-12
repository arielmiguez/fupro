#include <iostream>
using namespace std;

/* Realice un programa que lea de la entrada estandar los siguientes
datos de una persona:
	Edad: dato de tipo entero.
	Sexo: dato de tipo carácter.
	Altura en metros: dato de tipo real.
Tras leer los datos, el programa debe mostrarlos en la salida 
estandar. */

int main() {
	int edad; 
	char sexo[10];
	float altura;
	
	cout<<"Dijite su edad: "; cin>>edad;
	cout<<"Dijite su sexo: "; cin>>sexo;
	cout<<"Dijite su altura en metros: "; cin>>altura;
	
	cout<<"\nEdad: "<<edad;
	cout<<"\nSexo: "<<sexo;
	cout<<"\nAltura: "<<altura;
	
	return 0;
}

