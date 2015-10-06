#include <stdio.h>
#include <math.h>
void main ()
{
    int N, i=1, j, k;
    scanf ("%d", &N);
    while (i<=N){
        j=pow (i,2);
        k=pow (i,3);
        printf ("%d %d %d\n", i, j, k);
        i++;
    }
}
