#include <iostream>
#include <conio.h>
using namespace std;
/* 
-Las referencias no pueden ser asignaas y los apuntadores si
-Se declaran de manera diferente
-Las referencias siempre apuntan a una dirección de memoria valida
-Los apuntadores aparte de hacer lo mismo pueden ser nulos

Pilas
-Crea una pila vaia de enteros
-Inserta algunos elementos en la pila
-Muestra el tamaño de la pila
-Muestra el elemento tope de la pila
-Elimina el elemento top de la pila
-Muestra el nuevo elemento tope de la pila

*/
int main()
{
	int vect[] = {1,2,3,4,5};
	int* ap;
	ap=vect;
	
	for(int i=0; i<5; i++){
	
		cout<<"Valor: "<<ap[i]<<endl;
		cout<<"Apuntador: " <<&ap[i]<<endl;
	}
	
	return 0;

}

