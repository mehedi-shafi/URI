#include <stdio.h>
int main()
{
    int N, X[500]={0}, i, j, k[500]={0};
    scanf ("%d", &N);
    for (i=0; i<N; i++)
    {
        scanf ("%d", &X[i]);
        for (j=1; j<X[i]; j++){
            if (X[i]%j==0){
                k[i]+=j;
            }
        }
    }
    for (i=0; i<N; i++)
    {
        if (X[i]==k[i])
            printf ("%d eh perfeito\n", X[i]);
        else
            printf ("%d nao eh perfeito\n", X[i]);
    }

}
