#include <iostream>
using namespace std;
int main(){
    int num1, num2, op, resultado;
    cout<<"Ingrese el primer numero: ";
    cin>>num1;
    cout <<"Ingrese el segundo numero: ";
    cin>>num2;

    cout<<"1) Suma"<<endl;
    cout<<"2) Resta"<<endl;
    cout<<"3) Multiplicacion"<<endl;
    cout<<"4) Division"<<endl;
    cout<<"Opcion> ";
    cin>>op;
    switch (op){
        case 1: resultado= num1+num2;
            break;
        case 2: resultado= num1-num2;
            break;
        case 3: resultado= num1*num2;
            break;
        case 4: resultado= num1/num2;
            break;
        default:
            break;
    }
    cout<<"El resultado es: "<<resultado<<endl;
    return 0;
}