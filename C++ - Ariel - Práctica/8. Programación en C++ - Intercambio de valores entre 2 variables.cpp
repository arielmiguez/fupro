#include <iostream>
using namespace std;

/* Escriba un fragmento de programa que intecambie los valores
de dos variables*/

int main() {
	int x,y,aux;
	cout<<"Dijite el valor de x: ";cin>>x;
	cout<<"Dijite el valor de y: ";cin>>y;
	
	aux=x;
	x=y;
	y=aux;
	
	cout<<"\nEl valor de x ahora es: "<<x;
	cout<<"\nEl valor de y ahora es: "<<y;
	
	
	return 0;
}

