#include <stdio.h>
void main ()
{
    long long unsigned int a, b;
    while (scanf ("%llu %llu", &a, &b) != EOF){
        printf ("%llu\n", (a^b));
    }
}
