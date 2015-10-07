#include <stdio.h>
void main ()
{
    int N[1000], n, i, k, j =0;
    scanf ("%d", &n);
    for (i=0; i<1000; ++i){
        N[i] = j;
        ++j;
        if (j==n) j=0;
    }
    for (i=0; i<1000; ++i){
        printf ("N[%d] = %d\n", i, N[i]);
    }
}
