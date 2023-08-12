#include <iostream>
using namespace std;

/*Realice un programa que lea un valor entero y determine si se
trata de un número par o impar. */

int main() {
	int numero;
	
	cout<<"Digite un número: "; cin>>numero;
	
	if (numero==0){
		cout<<"No es par ni impar. .";
	}
	else if (numero%2==0){
		cout<<"El número es par.";
	}
	else {
		cout<<"El número es impar.";
	}
	
	return 0;
}

