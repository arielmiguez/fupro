/*
Hacer 2 estructuras: una llamada PROMEDIO q tendrá
los siguientes campos: nota1, nota2, nota3; y otro
llamado ALUMNO q tendrá los siguientes miembros:
nombre, sexo, edad; hacer q la estructura PROMEDIO 
esté anidada en la estructura ALUMNO, y por últ. 
imprimir todos sus datos includiso el PROMEDIO.
*/
#include <iostream>
using namespace std;

struct Promedio{
	float nota1, nota2, nota3;
};

struct Alumno{
	string nombre, sexo;
	int edad;
	struct Promedio prom;
};

int main() {
	Alumno alumno1;
	float promedio_alumnos;
	
	cout<<"Ingrese su nombre: ";
	getline(cin, alumno1.nombre);
	cout<<"Ingrese su sexo: ";
	getline(cin, alumno1.sexo);
	cout<<"Ingrese su edad: ";
	cin>>alumno1.edad;
	
	cout<<"\n===NOTAS DEL ALUMNO===\n";
	cout<<"Ingrese la Nota N°1: ";
	cin>>alumno1.prom.nota1;
	cout<<"Ingrese la Nota N°2: ";
	cin>>alumno1.prom.nota2;
	cout<<"Ingrese la Nota N°3: ";
	cin>>alumno1.prom.nota3;
	
	
	promedio_alumnos = (alumno1.prom.nota1+alumno1.prom.nota2+alumno1.prom.nota3)/3;
	
	cout<<"\n===DATOS DEL ALUMNO===\n";
	cout<<"Nombre: "<<alumno1.nombre<<endl;
	cout<<"Sexo: "<<alumno1.sexo<<endl;
	cout<<"Edad: "<<alumno1.edad<<endl;
	cout<<"Promedio: "<<promedio_alumnos<<endl;
	
	return 0;
}

