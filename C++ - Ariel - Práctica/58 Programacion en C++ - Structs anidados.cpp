#include <iostream>
using namespace std;

struct info_direccion {
	string direccion;
	string ciudad;
	string provincia;
};

struct empleado {
	string nombre;
	struct info_direccion dir_empleado;
	double salario;
};

int main() {

	empleado empleados[2];
	
	for (int i = 0; i < 2; i++) {
		cout << "Ingrese su nombre: ";
		getline(cin, empleados[i].nombre);
		cout << "Ingrese su dirección: ";
		getline(cin, empleados[i].dir_empleado.direccion);
		cout << "Ingrese su ciudad: ";
		getline(cin, empleados[i].dir_empleado.ciudad);
		cout << "Ingrese su provincia: ";
		getline(cin, empleados[i].dir_empleado.provincia);
		cout << "Ingrese su salario: ";
		cin >> empleados[i].salario;
		cin.ignore(); // Agregar esta línea para evitar problemas con getline después de cin
		cout << "\n";
	}

	
	for (int i = 0; i < 2; i++) {
		cout << "Nombre: " << empleados[i].nombre << endl;
		cout << "Dirección: " << empleados[i].dir_empleado.direccion << endl;
		cout << "Ciudad: " << empleados[i].dir_empleado.ciudad << endl;
		cout << "Provincia: " << empleados[i].dir_empleado.provincia << endl;
		cout << "Salario: " << empleados[i].salario << endl;
		cout << "\n";
	}
	
	return 0;
}
