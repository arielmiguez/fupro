#include <iostream>
using namespace std;

/* La calificaci�n final de un estudiante es la media ponderada
de tres notas: la nota de pr�cticas que cuenta un 30% del total,
la nota te�rica que cuenta un 60% y la nota de participaci�n que
cuenta el 10% restante. Escriba un programa que lea la entrada
est�ndar las tres notas de un alumno y escriba en la salida est�ndar
su notal final. */

int main() {
	
	float practica, teorica, participacion, nota_final=0;
	
	cout<<"Dijite la nota de pr�ctica: ";cin>>practica;
	cout<<"Dijite la nota de te�rica: ";cin>>teorica;
	cout<<"Dijite la nota de participaci�n: ";cin>>participacion;
	
	practica*=0.30; //practica = practica * 0.30
	teorica*=0.60;
	participacion*=0.10;
	
	nota_final = practica + teorica + participacion;
	
	cout<<"\nNota final: "<<nota_final;
	return 0;
}

