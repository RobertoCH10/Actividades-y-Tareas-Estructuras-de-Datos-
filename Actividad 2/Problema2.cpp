#include <iostream>
#include <algorithm>
using namespace std;
const int N = 10;
int main()
{
    int datos[N] = {2, 1, 4, 0, 3, 8, 9, 1, 7, 8};
    sort(datos, datos + N);
    
    cout << "Datos ordenados: ";
    
    for (int i = 0; i != N; ++i)
        cout << datos[i] << " ";

    return 0;
}