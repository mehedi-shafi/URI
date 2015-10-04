#include <stdio.h>
void main ()
{
    int alc=0, gas=0, die=0, a;
    for ( ; ; ){
        scanf ("%d", &a);
        if (a==4) break;
        else if (a==1) alc++;
        else if (a==2) gas++;
        else if (a==3) die++;
        else continue;
    }
    printf ("MUITO OBRIGADO\n");
    printf ("Alcool: %d\n", alc);
    printf ("Gasolina: %d\n", gas);
    printf ("Diesel: %d\n", die);
}
