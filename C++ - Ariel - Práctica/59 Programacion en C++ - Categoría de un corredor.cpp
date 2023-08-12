#include <iostream>
#include <string>
using namespace std;

struct corredor {
	string nombre;
	int edad;
	string sexo;
	string club;
};

int main() {
	string categoria;
	corredor c1;
	
	cout << "Nombre: ";
	getline(cin, c1.nombre);
	cout << "Edad: ";
	cin >> c1.edad;
	cin.ignore(); // Limpiar el búfer después de leer la edad
	cout << "Sexo: ";
	getline(cin, c1.sexo);
	cout << "Club: ";
	getline(cin, c1.club);
	
	if (c1.edad <= 18) {
		categoria = "Juvenil";
	} else if (c1.edad <= 40) {
		categoria = "Adulto";
	} else {
		categoria = "Veterano";
	}
	
	cout << "\n\n===DATOS DEL CORREDOR===" << endl;
	cout << "NOMBRE: " << c1.nombre << endl;
	cout << "EDAD: " << c1.edad << endl;
	cout << "SEXO: " << c1.sexo << endl;
	cout << "CLUB: " << c1.club << endl;
	cout << "CATEGORIA: " << categoria << endl;
	
	return 0;
}
