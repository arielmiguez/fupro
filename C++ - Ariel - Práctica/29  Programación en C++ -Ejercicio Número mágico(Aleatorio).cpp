/*
15. Realice un programa que solicite el usuario que
piense un n� entero enre 1-100. El programa debe
generar un n� aleatorio en ese mismo rango, e indicar
si el n� que ingres� es menor o mayor al n� aleatorio,
as� hasta que lo adivine, y por �ltimo mostrarle el
n� de intentos que le llev�.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	
	int numeroAleatorio = rand() % 100 + 1; // Generar un n�mero aleatorio entre 1 y 100
	int numeroUsuario, intentos = 0;
	
	cout << "Piensa en un n�mero entero entre 1 y 100." << endl;
	
	do {
		cout << "Ingresa tu intento: ";
		cin >> numeroUsuario;
		
		if (numeroUsuario < numeroAleatorio) {
			cout << "-> El n�mero ingresado es MENOR al n�mero aleatorio. Intenta nuevamente." << endl;
		} else if (numeroUsuario > numeroAleatorio) {
			cout << "-> El n�mero ingresado es MAYOR al n�mero aleatorio. Intenta nuevamente." << endl;
		}
		
		intentos++;
	} while (numeroUsuario != numeroAleatorio);
	
	cout << "�Correcto! Adivinaste el n�mero en " << intentos << " intentos." << endl;
	
	return 0;
}
