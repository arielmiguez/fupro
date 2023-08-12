/*
Longitud de una cadena de caracteres -
Funci�n STRLEN().
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string palabra;
	int longitud=0;
	
	cout<<"Ingrese un peque�o texto: ";
	getline(cin, palabra);
	
	/*
	Para convertir la cadena de caracteres a formato
	char*, se utiliza la funci�n c_str(). Esta funci�n
	devuelve un puntero a la primera posici�n de la 
	cadena de caracteres en formato char*. 
	Por lo tanto, se utiliza palabra.c_str() 
	como argumento para la funci�n strlen
	*/
	
	longitud = strlen(palabra.c_str());
	cout<<palabra<<" -> Tiene "<<longitud<< " digitos."<<endl;
	
	return 0;
}

