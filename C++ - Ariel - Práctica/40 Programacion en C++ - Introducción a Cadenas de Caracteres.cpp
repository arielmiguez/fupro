/* 
Este programa demuestra cómo funciona la clase 
string en C++. La clase string se utiliza para 
almacenar cadenas de caracteres, incluyendo espacios 
en blanco. 
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string nombre;
	cout << "Por favor, ingrese su nombre completo: ";
	getline(cin, nombre);
	cout << "Hola, " << nombre << "!" << endl;
	return 0;
}
