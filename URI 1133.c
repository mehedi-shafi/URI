#include <stdio.h>
void main ()
{
    int i, a, b, n;
    scanf ("%d %d", &a, &b);
    if (a>b){
        n=a;
        a=b;
        b=n;
    }

    for (i=a+1; i<b; ++i){
        if (i%5==2 || i%5==3) printf ("%d\n", i);
    }


}
