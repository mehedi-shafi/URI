#include <stdio.h>
void main ()
{
    int led[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6}, total, n, i;
    char in;
    scanf ("%d", &n);
    getchar ();
    for (i=0; i<n; ++i){
        total = 0;
        while ((in=getchar()) != '\n'){
            total += led[in- '0'];
        }
        printf ("%d leds\n", total);
    }
}
