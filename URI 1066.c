#include <stdio.h>
void main ()
{
    int i, n, even=0, odd=0, positive=0, negetive=0;
    for (i=0; i<5; ++i){
        scanf ("%d", &n);
        if (n%2==0) even++;
        else odd++;
        if (n>0) positive++;
        else if (n<0) negetive++;
    }
    printf ("%d valor(es) par(es)\n", even);
    printf ("%d valor(es) impar(es)\n", odd);
    printf ("%d valor(es) positivo(s)\n", positive);
    printf ("%d valor(es) negativo(s)\n", negetive);
}
