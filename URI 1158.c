#include <stdio.h>
void main ()
{
    int n, x, y, sum = 0, i, j, count = 0;
    scanf ("%d", &n);
    for (i=0; i<n; ++i){
        scanf ("%d %d", &x, &y);

        for (j=x; ; ++j){
            if (j%2!=0){
                sum += j;
                ++count;
            }
            if (count==y) break;
        }
        printf ("%d\n", sum);
        count = 0;
        sum = 0;
    }
}
