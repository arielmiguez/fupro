#include <iostream>
using namespace std;

// Escribe la siguiente expresión como expresión en C++: a/b +1

int main() {
	float a,b, resultado=0;
	
	cout<<"Dijite el valor de a: ";cin>>a;
	cout<<"Dijite el valor de b: ";cin>>b;
	
	resultado=(a/b)+1;
	cout<<"\nResultado: "<<resultado;
	return 0;
}

