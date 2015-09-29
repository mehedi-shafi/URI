#include <stdio.h>
void main ()
{
    float A, B, C, perm, area;
    scanf ("%f %f %f", &A, &B, &C);
    if ((A+B)>C && (A+C)>B && (B+C)>A){
        perm = A+B+C;
        printf ("Perimetro = %.1f\n", perm);
    }
    else {
        area = ((A+B)/2)*C;
        printf ("Area = %.1f\n", area);
    }
}
