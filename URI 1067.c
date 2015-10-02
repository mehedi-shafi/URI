#include <stdio.h>
void main ()
{
    int X, i;
    scanf ("%d", &X);
    for (i=0; i<=X; ++i){
        if (i%2!=0) printf ("%d\n", i);
    }
}
