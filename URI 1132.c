#include <stdio.h>
void main ()
{
    int i, a, b, sum=0;
    scanf ("%d %d", &a, &b);
    if (a<b){
    for (i=a; i<=b; ++i){
        if (i%13!=0) sum+=i;
    }
    }
    else if (a>b){
    for (i=a; i>=b; --i){
        if (i%13!=0) sum+=i;
    }
    }
    printf ("%d\n", sum);
}
