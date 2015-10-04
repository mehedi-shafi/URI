#include <stdio.h>
void main ()
{
    int X, Y;
    for ( ; ; ){
        scanf ("%d %d", &X, &Y);
        if (X==Y) break;
        else if (X>Y) printf ("Decrescente\n");
        else if (Y>X) printf ("Crescente\n");
    }
}
