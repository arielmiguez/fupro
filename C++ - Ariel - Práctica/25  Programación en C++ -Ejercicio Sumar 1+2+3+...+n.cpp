/*
Escriba un programa que calcula el valor de: 1+2+3...+n
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int n, suma=0;
	
	cout<<"Digite el número de elementos: "; 
	cin>>n;
	
	for(int i=1; i<=n; i++){
		/* inicializamos i=1; hasta que i sea menor o igual
		a n; cada vez incrementamos i en 1. */
		suma += i;
	}
	
	cout<<"La suma total es: "<<suma<<endl;
	
	system("pause");
	return 0;
}

