#include <stdio.h>
void main ()
{
    int X, i, j;
    for ( ; ; ){
        scanf ("%d", &X);
        if (X==0) break;
        else {
            for (i=1; i<=X; ++i){
                if (i==1) printf ("%d", i);
                else printf (" %d", i);
            }
        printf ("\n");
        }
    }
}
