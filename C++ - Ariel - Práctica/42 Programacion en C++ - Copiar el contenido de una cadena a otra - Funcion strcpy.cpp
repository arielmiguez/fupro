#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
	// Declaramos dos arreglos de caracteres para almacenar las palabras
	char palabra1[] = "Ariel";
	char palabra2[10];
	
	// Copiamos la cadena de caracteres de palabra1 a palabra2
	strcpy(palabra2, palabra1);
	
	// Imprimimos las dos cadenas de caracteres
	cout << "Original: " << palabra1 << endl;
	cout << "Copia: " << palabra2 << endl;
	
	return 0;
}
