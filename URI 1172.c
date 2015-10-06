#include <stdio.h>
void main ()
{
    int X[10], i, a;
    for (i=0; i<10; ++i){
        scanf ("%d", &a);
        if (a<0 || a==0){
            X[i] =1;
            continue;
        }
        X[i] = a;
    }
    for (i=0; i<10; ++i){
        printf ("X[%d] = %d\n", i, X[i]);
    }
}
