#include <stdio.h>
void main ()
{
    int N, X, Y, i, j, count =0;
    scanf ("%d", &N);
    for (i=0; i<N; ++i){
        scanf ("%d %d", &X, &Y);
        if (X>Y){
            for (j=X-1; j>Y; --j){
                if (j%2!=0) count += j;
            }
            printf ("%d\n", count);
        }
        else if (X<Y){
            for (j=X+1; j<Y; ++j){
                if (j%2!=0) count +=j;
            }
            printf ("%d\n", count);
        }
        else if (X==Y) printf ("0\n");
        count =0;
    }
}
