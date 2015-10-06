#include <stdio.h>
void main ()
{
    int a, total = 0, i=0;
    float avg;
    for ( ; ; ){
        scanf ("%d", &a);
        if (a<0) break;
        else{
        ++i;
        total += a;
        }
    }
    avg = (float) total/i;
    printf ("%.2f\n", avg);
}
