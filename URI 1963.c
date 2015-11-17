#include <stdio.h>
void main ()
{
    double a, b;
    scanf ("%lf %lf", &a, &b);
    printf ("%.2lf%%\n", ((b-a)*100)/a);
}
