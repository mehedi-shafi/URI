#include <stdio.h>
void main ()
{
    int N, i, j;
    scanf ("%d", &N);
    for (i=1; i<=N; ++i){
        printf ("%d %d %d\n", i, i*i, i*i*i);
        printf ("%d %d %d\n", i, (i*i)+1, (i*i*i)+1);
    }
}
