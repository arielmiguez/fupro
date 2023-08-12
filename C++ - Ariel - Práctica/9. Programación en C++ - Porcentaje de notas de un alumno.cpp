#include <iostream>
using namespace std;

/* La calificación final de un estudiante es la media ponderada
de tres notas: la nota de prácticas que cuenta un 30% del total,
la nota teórica que cuenta un 60% y la nota de participación que
cuenta el 10% restante. Escriba un programa que lea la entrada
estándar las tres notas de un alumno y escriba en la salida estándar
su notal final. */

int main() {
	
	float practica, teorica, participacion, nota_final=0;
	
	cout<<"Dijite la nota de práctica: ";cin>>practica;
	cout<<"Dijite la nota de teórica: ";cin>>teorica;
	cout<<"Dijite la nota de participación: ";cin>>participacion;
	
	practica*=0.30; //practica = practica * 0.30
	teorica*=0.60;
	participacion*=0.10;
	
	nota_final = practica + teorica + participacion;
	
	cout<<"\nNota final: "<<nota_final;
	return 0;
}

