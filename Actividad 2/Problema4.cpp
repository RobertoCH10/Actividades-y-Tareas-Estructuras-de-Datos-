#include <stdio.h>

int main(){
 
int vector[5];
int i;
 
for (i=0; i<5; i++){
   printf( "Ingresa 5 numeros Numero %d\n", i+1);
   scanf("%d", &vector[i]);
}
 
int mayor, menor;
mayor = vector[0]; 
menor = vector[0];
 
for (i=0; i<5; i++){
    if (vector[i]> mayor){
    mayor=vector[i];
    }
    if (vector[i]< menor){
    menor=vector[i];
    }
}
printf("El mayor es %d\n", mayor);
printf("El menor es %d\n", menor);
}