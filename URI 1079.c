#include <stdio.h>
void main ()
{
    int N, i;
    float n1, n2, n3, avg;
    scanf ("%d", &N);
    for (i=0; i<N; ++i){
        scanf ("%f %f %f", &n1, &n2, &n3);
        avg = ((n1*2)+(n2*3)+(n3*5))/10;
        printf ("%.1f\n", avg);
    }
}
