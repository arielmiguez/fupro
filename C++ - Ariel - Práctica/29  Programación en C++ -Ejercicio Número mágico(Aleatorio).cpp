/*
15. Realice un programa que solicite el usuario que
piense un n° entero enre 1-100. El programa debe
generar un n° aleatorio en ese mismo rango, e indicar
si el n° que ingresó es menor o mayor al n° aleatorio,
así hasta que lo adivine, y por último mostrarle el
n° de intentos que le llevó.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	
	int numeroAleatorio = rand() % 100 + 1; // Generar un número aleatorio entre 1 y 100
	int numeroUsuario, intentos = 0;
	
	cout << "Piensa en un número entero entre 1 y 100." << endl;
	
	do {
		cout << "Ingresa tu intento: ";
		cin >> numeroUsuario;
		
		if (numeroUsuario < numeroAleatorio) {
			cout << "-> El número ingresado es MENOR al número aleatorio. Intenta nuevamente." << endl;
		} else if (numeroUsuario > numeroAleatorio) {
			cout << "-> El número ingresado es MAYOR al número aleatorio. Intenta nuevamente." << endl;
		}
		
		intentos++;
	} while (numeroUsuario != numeroAleatorio);
	
	cout << "¡Correcto! Adivinaste el número en " << intentos << " intentos." << endl;
	
	return 0;
}
