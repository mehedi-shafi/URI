#include <stdio.h>
void main ()
{
    int N, X, Y, i;
    float a;
    scanf ("%d", &N);
    for (i=0; i<N; ++i){
        scanf ("%d %d", &X, &Y);
        if (Y==0) printf ("divisao impossivel\n");
        else {a = (float) X/Y;
        printf ("%.1f\n", a);
        }
    }
}
