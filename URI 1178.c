#include <stdio.h>
void main ()
{
    double n[100], x, j;
    int i;
    scanf ("%lf", &x);
    n[0] = x;
    for (i=1; i<100; ++i){
        j=x/2;
        n[i] = j;
        x/=2;
    }
    for (i=0; i<100; ++i){
        printf ("N[%d] = %.4lf\n", i, n[i]);
    }
}
