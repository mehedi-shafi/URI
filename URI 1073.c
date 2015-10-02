#include <stdio.h>
#include <math.h>
void main ()
{
    int N, i, j;
    scanf ("%d", &N);
    for (i=1; i<=N; ++i){
        if (i%2==0){
                j = pow(i,2);
            printf ("%d^2 = %d\n", i, j);
        }
    }
}
