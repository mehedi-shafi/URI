#include <stdio.h>
#include <math.h>
void main ()
{
    double A, B, C, tri, cir, tra, sq, rect, pi;
    pi = 3.14159;
    scanf ("%lf %lf %lf", &A, &B, &C);
    tri = .5*A*C;
    cir = pi*pow(C,2);
    tra = ((A+B)/2)*C;
    sq = pow (B,2);
    rect = A*B;
    printf ("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", tri, cir, tra, sq, rect);
}
