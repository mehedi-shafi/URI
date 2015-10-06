#include <stdio.h>
void main ()
{
    int n, a, i, j, k=1;
    scanf ("%d", &n);
    for (i=0; i<n; ++i){
        scanf ("%d", &a);
        if (a==1) printf ("1 nao eh primo\n");
        else {
            for (j=2; j<a; ++j){
                if (a%j==0){
                    k=0;
                    break;
                }
            }
            if (k==1) printf ("%d eh primo\n", a);
            else if (k==0) printf ("%d nao eh primo\n", a);
            k=1;
        }
    }
}
