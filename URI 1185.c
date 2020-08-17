#include <stdio.h>
void main ()
{
    double m[12][12], sum=0, avg;
    int i, j, count = 0, k = 11;
    char ch;
    scanf ("%ch", &ch);
    for (i=0; i<12; ++i){
        for (j=0; j<12; ++j){
            scanf ("%lf", &m[i][j]);
            if (j<k){
                sum += m[i][j];
                ++count;
            }
        }
        --k;
    }
    avg = (double) sum/count;
    if (ch=='S') printf ("%.1lf\n", sum);
    else if (ch=='M') printf ("%.1lf\n", avg);
}
