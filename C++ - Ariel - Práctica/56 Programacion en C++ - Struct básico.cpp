#include <iostream>
using namespace std;

struct Persona {
	string nombre;
	int edad;
}persona1; 

int main() {
	cout << "Nombre: ";
	getline(cin, persona1.nombre); // Usar getline para leer una l�nea completa con espacios
	
	cout << "Edad: ";
	cin >> persona1.edad;
	
	cout << "\n===Imprimiendo datos===\n";
	cout << "Nombre: " << persona1.nombre << endl;
	cout << "Edad: " << persona1.edad << endl;
	return 0;
}
