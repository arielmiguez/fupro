#include <iostream>
using namespace std;

/*Realice un programa que lea un valor entero y determine si se
trata de un n�mero par o impar. */

int main() {
	int numero;
	
	cout<<"Digite un n�mero: "; cin>>numero;
	
	if (numero==0){
		cout<<"No es par ni impar. .";
	}
	else if (numero%2==0){
		cout<<"El n�mero es par.";
	}
	else {
		cout<<"El n�mero es impar.";
	}
	
	return 0;
}

