#include <stdio.h>
void main ()
{
    double m[12][12], sum=0, avg;
    int i, j, x = 0;
    char ch;
    scanf ("%c", &ch);
    for (i=0; i<12; ++i){
        for (j=0; j<12; ++j){
            scanf ("%lf", &m[i][j]);
                if (j<x){
                    sum+=m[i][j];
            }
        }
        if (i < 5)
            x++;
        if (i>5) x--;
    }
    if (ch == 'S') printf ("%.1lf\n", sum);
    else printf ("%.1lf\n", sum/30);
}
