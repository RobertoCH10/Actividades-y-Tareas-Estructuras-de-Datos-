#include <iostream>
#include <conio.h>
#include<stack>

using namespace std;

int main(){
	stack <int> pila;
	pila.push(1);
	pila.push(16);
	pila.push(4);
	
	cout <<""<< endl;
	
	cout <<"El tamaño es de: "<<pila.size()<< endl;
	cout <<"El elemnto de hasta arriba es: "<<pila.top()<<endl;
	pila.pop();
	
	cout <<"Acabamos de eliminar el numero 4 de la pila" <<endl;
	cout <<"El elemnto de hasta arriba es: "<<pila.top()<<endl;
	
	return 0;
}
