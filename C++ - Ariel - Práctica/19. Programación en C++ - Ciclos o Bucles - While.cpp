#include <iostream>
#include <conio.h>
using namespace std;

/* La sentencia WHILE:

	WHILE (expresi�n l�gica) {
		conjunto de instrucciones;
	}

*/

int main() {
	int i=1;
	/// INCREMENTO.
	while(i>=10){
		cout<<i<<endl;
		i++;
	}
//	int i=10;
//	/// DISMINUCI�N.
//	while(i>=1){
//		cout<<i<<endl;
//		i--;
//	}
	getch();
	return 0;
}

