#include <stdio.h>
void main ()
{
    int i,n, h=0, pos;
    for (i=1; i<=100; ++i){
        scanf ("%d", &n);
        if (n>h){
            h = n;
            pos = i;
        }
    }
    printf ("%d\n%d\n", h, pos);
}
