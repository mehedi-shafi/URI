#include <stdio.h>
void main ()
{
    int i, n, r1, r2, r3;
    scanf ("%d", &n);
    for (i=0; i<n; ++i){
        scanf ("%d %d", &r1, &r2);
        r3 = ((r1*2)+(r2*2))/2;
        printf ("%d\n", r3);
    }
}
