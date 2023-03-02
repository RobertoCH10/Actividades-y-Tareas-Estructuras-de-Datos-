#include <stdio.h>
#include <stdlib.h>
int main
{
    float altura, area, base, perimetro;
    printf ("Escribe la altura: ");
    scanf ("%f", &altura);
    getchar ();
    
    printf ("Escribe la base: ");
    scanf ("%f", &base);
    getchar ();
    
    area= altura * base;
    perimetro= altura + base + altura + base;
    printf ("Valor de area: %g\n", area);
    printf ("Valor de perimetro: %g\n", perimetro);
    putchar ('\n');
    
    return 0;
}