#include <stdio.h>
void main ()
{
    float A[100], n;
    int  i;
    for (i=0; i<100; ++i){
        scanf ("%f", &n);
        A[i] = n;
        if (n<=10) printf ("A[%d] = %.1f\n", i, A[i]);
    }
}
