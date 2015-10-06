#include <stdio.h>
void main ()
{

    float count=0, i, s;
    for (i=2; i<=100; ++i){
        count += 1/i;
    }
    s = 1+count;
    printf ("%.2f\n", s);
}
