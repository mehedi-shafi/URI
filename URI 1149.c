#include <stdio.h>
void main ()
{
    int X, N, i, sum=0;
    scanf ("%d %d", &X, &N);
    for ( ; ; ){

    if (N>0){
            for (i=X; i<X+N; ++i){
        sum+=i;
    }
    printf ("%d\n", sum);
    break;
    }
    else {
        scanf ("%d", &N);
    }
    }
}
