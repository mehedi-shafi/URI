#include <stdio.h>
void main ()
{
    int N[10], i, a;
    scanf ("%d", &a);
    for (i=0; i<10; ++i){
        N[i] = a;
         a*=2;
         printf ("N[%d] = %d\n", i, N[i]);
    }

}
