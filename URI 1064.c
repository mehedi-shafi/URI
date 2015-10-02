#include <stdio.h>
void main()
{
    float i, n, total=0, avg;
    int count = 0;
    for (i=0; i<6; ++i){
        scanf ("%f", &n);

        if (n>0) {
            count++;
            total += n;
        }
    }
    avg = total/count;
    printf ("%d valores positivos\n%.1f\n", count, avg);
}
