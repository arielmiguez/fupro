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
		cout<<"El número a buscar NO existe."<<endl;
	}else{
		cout<<"El número "<<dato<<" se encuentra en la posición "<<i<<endl;
	}
	return 0;
}

