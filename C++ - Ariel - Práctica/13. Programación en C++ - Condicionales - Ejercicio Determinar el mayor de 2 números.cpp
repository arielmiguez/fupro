#include <iostream>
using namespace std;

/* Escriba un programa que lea dos n�meros y determine cual de ellos 
es el mayor */

int main() {
	int n1, n2;
	
	cout<<"Digite dos n�meros: "; cin>>n1>>n2;
	
	if (n1==n2){
		cout<<"Ambos n�meros son iguales";
	}
	else if (n1>n2){
		cout<<"El mayor es: "<<n1;
	}
	else {
		cout<<"El mayor es: "<<n2;
	}
	
	
	return 0;
}

