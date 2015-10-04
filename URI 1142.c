#include <stdio.h>
void main ()
{
    int N, i, j, k=1;
    scanf ("%d", &N);
    for (i=0; i<N; ++i){
        for ( ; ; ){
            printf ("%d ", k);
            ++k;
            printf ("%d ", k);
            ++k;
            printf ("%d ", k);
            ++k;
            printf ("PUM\n");
            ++k;
            break;
        }

    }
}
