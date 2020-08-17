#include <stdio.h>
int main ()
{
    unsigned int a, b;
    while (scanf ("%u %d", &a, &b) != EOF){
        printf ("%u\n", a^b);
    }
    return 0;
}
