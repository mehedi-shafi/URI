#include <stdio.h>
void main ()
{
    unsigned long long int i, reverse = 0, i_temp;
    scanf ("%llu", &i);
    i_temp = i;
    while (i_temp!=0){
        reverse *= 10;
        reverse += i_temp%10;
        i_temp/=10;
    }
    if (i%10==0) printf ("0%llu\n", reverse);
    else printf ("%llu\n", reverse);
}
