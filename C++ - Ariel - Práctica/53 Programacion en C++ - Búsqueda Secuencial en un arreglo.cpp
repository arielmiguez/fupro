#include <iostream>
using namespace std;

int main() {
	int a[] = {3,4,2,1,5};
	int i, dato;
	bool bandera = false;
	
	dato = 5;
	
	i=0;
	while((bandera == false) && (i<5)){
		if(a[i] == dato){
			bandera = true;
			i--;
		}
		i++;
	}
	
	if(bandera == false){
		cout<<"El n�mero a buscar NO existe."<<endl;
	}else{
		cout<<"El n�mero "<<dato<<" se encuentra en la posici�n "<<i<<endl;
	}
	return 0;
}

