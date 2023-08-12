#include <iostream>

using namespace std;

// Función para calcular el factorial
int calcularFactorial(int num) {
	if (num == 0 || num == 1)
		return 1;
	else
		return num * calcularFactorial(num - 1);
}

int main() {
	int numero;
	
	cout << "Ingrese un número entero no negativo: ";
	cin >> numero;
	
	if (numero < 0) {
		cout << "El número debe ser no negativo." << endl;
	} else {
		int factorial = calcularFactorial(numero);
		cout << "El factorial de " << numero << " es: " << factorial << endl;
	}
	
	return 0;
}
