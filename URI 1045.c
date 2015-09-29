#include <stdio.h>
#include <math.h>
//couldn't solve
void main ()
{
    double A, B, C, max, mid, min;
    scanf ("%lf %lf %lf", &A, &B, &C);
    if (A>B && A>C){
        max = A;
        if (B>C){
            mid = B;
            min = C;
        }
        else {
            mid = C;
            min = B;
        }
    }
   else if (B>A && B>C){
        max = B;
        if (A>C){
            mid = A;
            min = C;
        }
        else {
            mid = C;
            min = A;
        }
    }
      else if (C>B && C>A){
        max = C;
        if (B>A){
            mid = B;
            min = A;
        }
        else {
            mid = A;
            min = B;
        }
    }
    A = max;
    B = mid;
    C = min;
    printf ("%.lf %.1lf %.1lf\n", A, B, C);
    if  (A>=(B+C)){
        printf ("NAO FORMA TRIANGULO\n");
    }
    if (sqrt(A) == (sqrt(B) + sqrt(C))){
        printf ("TRIANGULO RETANGULO\n");
    }
    if (sqrt(A) > (sqrt(B)+sqrt(C))){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if (sqrt(A) < (sqrt(B)+sqrt(C))){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (A==B && A==C && B==C){
        printf ("TRIANGULO EQUILATERO\n");
    }
    if (A==B && A!=C){
        printf ("TRIANGULO ISOSCELES\n");
    }
}
