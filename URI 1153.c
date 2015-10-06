#include <stdio.h>
int fact (int a);

void main ()
{
    int n,fac;
    scanf ("%d", &n);
    fac = fact(n);
    printf("%d\n", fac);
}
int fact (int a){

    if (a==0 || a==1) return 1;
    else return (a * fact (a-1));
}
