/*
9. Escriba un programa que calcule el valor de:
1*2*3...*n (factorial) 5!= 5*4*3*2*1
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int numero, factorial = 1;
	
	cout<<"Digite un número: "; cin>>numero;
	
	for(int i=1; i<=numero; i++) { 
		factorial *= i;
	}
	
	cout<<"El factorial del numero "<< numero << " es: "<<factorial<<endl;
	
	system("pause");
	return 0;
}

