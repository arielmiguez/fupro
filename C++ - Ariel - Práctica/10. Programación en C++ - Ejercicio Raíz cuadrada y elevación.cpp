#include <iostream>
#include <cmath>
using namespace std;

/* Realice un programa que calcule el valor que toma la siguiente
funci�n para unos valores dados de x e y: f(x,y)= sqrt(x)/y^2-1*/

int main() {
	float x, y, resultado=0;
	
	cout<<"Digite el valor de x: "; cin>>x;
	cout<<"Digite el valor de y: "; cin>>y;
	
	resultado  = (sqrt(x))/(pow(y,2)-1);
	
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	return 0;

}

