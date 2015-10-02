#include <stdio.h>
void main()
{
    float i, n;
    int count = 0;
    for (i=0; i<6; ++i){
        scanf ("%f", &n);
        if (n>0) count++;
    }
    printf ("%d valores positivos\n", count);
}
