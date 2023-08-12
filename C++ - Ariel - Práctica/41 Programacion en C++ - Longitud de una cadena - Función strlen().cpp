/*
Longitud de una cadena de caracteres -
Función STRLEN().
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string palabra;
	int longitud=0;
	
	cout<<"Ingrese un pequeño texto: ";
	getline(cin, palabra);
	
	/*
	Para convertir la cadena de caracteres a formato
	char*, se utiliza la función c_str(). Esta función
	devuelve un puntero a la primera posición de la 
	cadena de caracteres en formato char*. 
	Por lo tanto, se utiliza palabra.c_str() 
	como argumento para la función strlen
	*/
	
	longitud = strlen(palabra.c_str());
	cout<<palabra<<" -> Tiene "<<longitud<< " digitos."<<endl;
	
	return 0;
}

