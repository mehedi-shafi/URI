#include <stdio.h>
void main ()
{
    double m[12][12], sum=0, avg, count = 0;
    int i, j, x = 5;
    char ch;
    scanf ("%c", &ch);
    for (i=0; i<12; ++i){
        for (j=0; j<12; ++j){
            scanf ("%lf", &m[i][j]);
            if (j > x && j < 11 - x)
                sum += m[i][j];
        }
        if (i > 5)
            x--;

    }
    avg = sum/count;
    if (ch=='S') printf ("%.1lf\n", sum);
    else if (ch=='M') printf ("%.1lf\n", avg);
}
