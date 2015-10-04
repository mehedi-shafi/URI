#include <stdio.h>
void main ()
{
    int X;
    for ( ; ; ){
        scanf ("%d", &X);
        if (X==2002){
            printf ("Acesso Permitido\n");
            break;
        }
        else {
            printf ("Senha Invalida\n");
            continue;
        }
    }
}
