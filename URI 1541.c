#include <stdio.h>
#include <math.h>
void main ()
{
    int a, b, c, land, side;
    for ( ; ; ){
        scanf ("%d", &a);
        if (a==0) break;
        scanf (" %d %d", &b, &c);
        land = (a*b*100)/c;
        side = sqrt (land);
        printf ("%d\n", side);
    }
}
