/*
11. Escriba un programa que calcule el valor de:
2^1+2^2+2^3+...2^n
*/

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
	int suma=0,  elevacion=0,  n;
	
	cout<<"Ingrese el número de elementos a sumar: ";
	cin>>n;
	
	for(int i=1; i<=n; i++){
		elevacion = pow(2,i); //pow(base, exponente)
		suma += elevacion;
	}
	
	cout<<"La suma total es: " <<suma<<endl;
	system("pause");
	return 0;
}

