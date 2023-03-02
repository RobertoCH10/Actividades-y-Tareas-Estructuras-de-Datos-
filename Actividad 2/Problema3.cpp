#include<iostream>
#include <string>
using namespace std;
int main()
{
    string mars = " ";
    int c = 0;
    cout << "Ingresa la cadena de caracteres" << endl;
 
    getline(cin >> ws, mars);
 
    for (int i = 0; i < mars.length(); i++) {
        if ((mars[i] == ' ' && mars[i + 1] != ' ')) {
            c = c + 1;
        }
    }
    cout << "En la cadena hay " << c+1 << " palabras " << endl;
    return 0;
}