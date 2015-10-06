#include <stdio.h>
void main ()
{
    int i;
    float s, count=0, j=2;
    for (i=3; i<=39; i+=2){
        count += (float) (i/j);
        j*=2;
    }
    s = 1 + count;
    printf ("%.2f\n", s);
}
