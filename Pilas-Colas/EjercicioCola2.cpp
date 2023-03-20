#include <iostream>
#include <queue>
#include <stack>
#include <set> //Almacenar valores unicos y ordenarlos
using namespace std;
void removeDuplicates(queue<int>& q)
{
    set<int> unicos;
    queue<int> si;
    while (!q.empty()) 
	{
        int elementoactual = q.front();
        q.pop();
        
        if (unicos.insert(elementoactual).second) 
		{
            si.push(elementoactual);
        }
    }
    q = si;
}
int main() {
    queue<int> cola;
    cola.push(1);
    
    cola.push(2);
    cola.push(2);
    
    cola.push(3);
    cola.push(3);
    cola.push(3);
    
    cola.push(4);
    cola.push(4);
    cola.push(4);
    cola.push(4);

    cout<<"Cola completa: "<<endl;
    queue<int> colainicio=cola;
    while (!colainicio.empty()) 
	{
        cout << colainicio.front() << " ";
        colainicio.pop();
    }
    
    removeDuplicates(cola);
    
    cout<<endl<<"Cola sin elementos repetidos: "<<endl;
    while (!cola.empty()) 
	{
        cout << cola.front() << " ";
        cola.pop();
    }
    return 0;
}