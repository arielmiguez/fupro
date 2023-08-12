#include <iostream>
/* Realice un programa que lea de la entrada esándar números
hasta que se introduzca un cero. En ese momento el programa
debe terminar y mostrar en la salida estándar el número de 
valores mayores que cero leídos.
*/
using namespace std;

int main() {
/// CON DO:
	int numero;
	int contador = 0;
	
	do {
		cout << "Ingrese un número (0 para terminar): ";
		cin >> numero;
		
		if (numero > 0) {
			contador++;
		}
	} while (numero != 0);
	
	cout << "Cantidad de números mayores que cero leídos: " << contador <<endl;
	
	
/// CON WHILE:
//	int numero;
//	int contador = 0;
//	
//	cout << "Ingrese un número (0 para terminar): ";
//	cin >> numero;
//	
//	while (numero != 0) {
//		if (numero > 0) {
//			contador++;
//		}
//		
//		cout << "Ingrese un número (0 para terminar): ";
//		cin >> numero;
//	}
//	
//	std::cout << "Cantidad de números mayores que cero leídos: " << contador <<endl;
	
	return 0;
}

