#include <iostream>
/* Realice un programa que lea de la entrada es�ndar n�meros
hasta que se introduzca un cero. En ese momento el programa
debe terminar y mostrar en la salida est�ndar el n�mero de 
valores mayores que cero le�dos.
*/
using namespace std;

int main() {
/// CON DO:
	int numero;
	int contador = 0;
	
	do {
		cout << "Ingrese un n�mero (0 para terminar): ";
		cin >> numero;
		
		if (numero > 0) {
			contador++;
		}
	} while (numero != 0);
	
	cout << "Cantidad de n�meros mayores que cero le�dos: " << contador <<endl;
	
	
/// CON WHILE:
//	int numero;
//	int contador = 0;
//	
//	cout << "Ingrese un n�mero (0 para terminar): ";
//	cin >> numero;
//	
//	while (numero != 0) {
//		if (numero > 0) {
//			contador++;
//		}
//		
//		cout << "Ingrese un n�mero (0 para terminar): ";
//		cin >> numero;
//	}
//	
//	std::cout << "Cantidad de n�meros mayores que cero le�dos: " << contador <<endl;
	
	return 0;
}

