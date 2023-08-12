#include <iostream>
#include <stdlib.h>
using namespace std;

/* La sentencia DO-WHILE
	do {
		conjunto de instrucciones;
	}while(expresión lógica);
*/

int main() {
	int i= 1;
	
	do{
		cout<<i<<endl;
		i++;
	} while(i<=10);
	system("pause");
	return 0;
}

