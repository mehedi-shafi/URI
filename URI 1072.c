#include <stdio.h>
void main ()
{
    int N, X, i, count=0;
    scanf ("%d", &N);
    for (i=0; i<N; ++i){
        scanf ("%d", &X);
        if (X>=10 && X<=20){
            count++;
        }
    }
    printf ("%d in\n%d out\n", count, N-count);
}
