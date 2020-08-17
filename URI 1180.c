#include <stdio.h>
void main ()
{
    int i, n, j, pos, min;
    int x[10008];
    scanf ("%d", &n);
    i=0;
    while (i<n){
        scanf ("%d", &j);
        x[i] = j;
        if (i==0) min =j;
        if (x[i] <= min){
            min = x[i];
            pos = i;
        }
        ++i;
    }
    printf ("Menor valor: %d\n", min);
    printf ("Posicao: %d\n", pos);
}
