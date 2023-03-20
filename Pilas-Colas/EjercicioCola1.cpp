#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <queue>
#include <stack>
using namespace std;

void reverseQueue(queue<int>& q){
    stack<int> pila;
    while(!q.empty()){
        pila.push(q.front());
        q.pop();
    }
    while(!pila.empty()){
        q.push(pila.top());
        pila.pop();
    }
}

int main(){
    queue<int> cola;
    cola.push(1);
    cola.push(2);
    cola.push(3);
    cola.push(4);
    cola.push(5);
    
    cout << "El valor tope de la cola es: " << cola.front() << endl; 
    cola.pop(); 
    cout << "El nuevo valor tope de la cola es: " << cola.front() << endl;
    
    reverseQueue(cola);
    cout << "La cola invertida es: ";
    
    
    
    while(!cola.empty()){
        cout << cola.front() << " ";
        cola.pop();
    }
    cout << endl;
    
    return 0;
}


/*Se incluyen las librerías necesarias para el funcionamiento del programa, las cuales son iostream, conio.h, stdlib.h, queue y stack.

Se define la función reverseQueue, que recibe una cola de enteros como parámetro. 
Dentro de la función, se crea una pila de enteros llamada "pila".

A continuación, se realiza un bucle while que se ejecutará mientras la cola no esté vacía. 
Dentro del bucle, se agrega el valor que está en el frente de la cola a la pila utilizando la función push(), y luego se elimina ese valor de la cola utilizando la función pop().

Una vez que la cola está vacía, se realiza otro bucle while que se ejecutará mientras la pila no esté vacía. 
Dentro del bucle, se agrega el valor que está en la cima de la pila a la cola utilizando la función push(), y 
luego se elimina ese valor de la pila utilizando la función pop().

En la función principal (main), se crea una cola de enteros llamada "cola" 
y se agregan cinco valores a la misma utilizando la función push().

Se imprime en pantalla el valor del frente de la cola utilizando la función front(), y luego 
se elimina ese valor de la cola utilizando la función pop().

Se imprime en pantalla el nuevo valor del frente de la cola utilizando la función front().

Se llama a la función reverseQueue y se le pasa 
como parámetro la cola creada en el paso 5.

Se imprime en pantalla la cola invertida utilizando un bucle while que se ejecutará mientras 
la cola no esté vacía. Dentro del bucle, se imprime en pantalla el valor que está en el frente 
de la cola utilizando la función front(), y luego se elimina ese valor de la cola utilizando la función pop().

Finalmente, se devuelve 0 para indicar que el programa se ha ejecutado correctamente.*/
