#include <stdio.h>
void main ()
{
    double m[12][12], x, avg, sum =0;
    int i, j, k, n;
    char ch;
    scanf ("%d %c", &n, &ch);
    for (i=0; i<12; ++i){
        for (j=0; j<12; ++j){
            scanf ("%lf", &m[i][j]);
            if (j==n) sum += m[i][j];
        }
    }
    avg = sum/12;
    if (ch=='S') printf ("%.1lf\n", sum);
    else if (ch == 'M') printf ("%.1lf\n", avg);
}
