#include <stdio.h>
void main ()
{
    int M, N, sum = 0, i, j;
    for (i=0; 1<3; ++i){
        scanf ("%d %d", &M, &N);
        if (M<=0 || N<=0){
            break;
        }
        if (M>N){
            for (j=N; j<=M; ++j){
                printf ("%d ", j);
                sum +=j;
            }
            printf ("Sum=%d\n", sum);
        }
        else if (M<N){
            for (j=M; j<=N; ++j){
                printf ("%d ", j);
                sum+=j;
            }
            printf ("Sum=%d\n", sum);
        }

        sum=0;
    }
}
