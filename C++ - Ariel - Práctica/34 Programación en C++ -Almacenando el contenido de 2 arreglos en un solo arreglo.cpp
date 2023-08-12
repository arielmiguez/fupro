#include <iostream>
using namespace std;

int main() {
	char letras1[]={'a','b','c','d','e'};
	char letras2[]={'f','g','h','i','j'};
	char letras3[10];
	
	//Copiamos los elementos de Letras1 hacia letras3
	for(int i=0;i<5;i++) { 
		letras3[i]=letras1[i];
	}
	
	//Copiamos los elementos de Letras2 hacia letras3
	for(int i=5;i<10;i++) { 
		letras3[i]=letras2[i-5];
	}
	
	//Mostramos el resultado
	for(int i=0;i<10;i++) { 
		cout<<letras3[i]<<" ";
	}
	return 0;
}

