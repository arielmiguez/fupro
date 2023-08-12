#include <iostream>
#include <stdlib.h>
using namespace std;
/*
	for(expr1; expresión lógica; expr2){
		conjunto de instrucciones;
	}
*/
int main() {
	
///No es necesario inicializar la variable antes, lo haces dentro del for.
	
	for(int i=1; i<=10; i++){
		cout<<i<<endl;
	}
	
	system("pause");
	return 0;
}

