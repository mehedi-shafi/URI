#include <stdio.h>
void main ()
{
    int i, j, j_i=7;
    for (i=1; i<=9; i+=2){
        j=j_i;
        while (j>=(j_i-2)){
            printf ("I=%d J=%d\n", i, j);
            j--;
        }
        j_i+=2;
    }
}
