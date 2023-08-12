#include <iostream>
#include <cstring>
using namespace std;

int main() {
	//DECLARAMOS 2 AREGLOS DE CARACTERES PARA ALMACENAR LAS PALABRAS.
	char palabra1[] = "Ariel";
	char palabra2[] = "Miguez";
	
	//COMPARAMOS LAS 2 CADENAS DE CARACTERES UTILIZANDO LA FUNCION STRCMP.
	if (strcmp(palabra1, palabra2) == 0) {
		//SI LAS CADENAS SON IGUALES, IMPRIMIMOS "IGUALES".
		cout << "Las palabras son iguales" << endl;
	} else {
		//DE LO CONTRARIO, IMPRIMIMOS "DIFERENTES".
		cout << "Las palabras son diferentes" << endl;
	}
	
	return 0;
}
