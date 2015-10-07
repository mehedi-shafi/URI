#include <stdio.h>
void main ()
{
    unsigned long long int fib[61], first = 0, second = 1, next;
    int i, c, n;
    fib[0] = 0;
    fib[1] = 1;
    for (i=2; i<61; ++i){
        next = first + second;
        fib[i] = next;
        first = second;
        second = next;
    }
    scanf ("%d", &n);
    for (i=0; i<n; ++i){
            scanf ("%d", &c);
        printf ("Fib(%d) = %lld\n", c, fib[c]);
    }
}
