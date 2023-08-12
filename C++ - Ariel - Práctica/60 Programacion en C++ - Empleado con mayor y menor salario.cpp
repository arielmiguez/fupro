#include <iostream>
#include <string>
using namespace std;

struct Empleado {
	string nombre;
	float salario;
};

int main() {
	int n_empleados, posM = 0, posm = 0;
	float mayor = 0, menor = 99999;
	
	cout << "Ingrese el número de empleados: ";
	cin >> n_empleados;
	cin.ignore(); // Para consumir el salto de línea residual
	
	Empleado emp[100];
	
	cout<<"\n";
	for (int i = 0; i < n_empleados; i++) {
		cout << i + 1 << ". Ingrese su nombre: ";
		getline(cin, emp[i].nombre); // Lee el nombre
		
		cout << i + 1 << ". Ingrese su salario: ";
		cin >> emp[i].salario;
		
		// Empleado de mayor salario.
		if (emp[i].salario > mayor) {
			mayor = emp[i].salario;
			posM = i;
		}
		if (emp[i].salario < menor) {
			menor = emp[i].salario;
			posm = i;
		}
		cout<<"\n";
		cin.ignore(); // Para consumir el salto de línea después de ingresar el salario
	}
	
	cout << "\n.:Datos del empleado con mayor salario:.\n";
	cout << "Nombre: " << emp[posM].nombre << endl;
	cout << "Salario: " << emp[posM].salario << endl;
	
	cout << "\n.:Datos del empleado con menor salario:.\n";
	cout << "Nombre: " << emp[posm].nombre << endl;
	cout << "Salario: " << emp[posm].salario << endl;
	
	return 0;
}
