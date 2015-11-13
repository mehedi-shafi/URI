#include <stdio.h>
void main ()
{
    int i, j, n, k, sum = 0, m = -1;
    scanf ("%d", &n);
    for (i=0; i<n; ++i){
        scanf ("%d", &j);
        for (k=0; k<j; ++k){
            if (m==-1) m=1;
            else if (m==1) m=-1;
            sum+=m;
        }
        printf ("%d\n", sum);
        sum = 0;
        m = -1;
    }
}
