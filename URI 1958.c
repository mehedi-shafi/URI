/// Unsolved
#include <stdio.h>
void main ()
{
    float x, x_temp;
    int E = 00;
    scanf ("%f", &x);
    x_temp = x;
    if (x>0) {
        while (x_temp>9){

            if (E==00) E+=10;
            else E*=10;
            x_temp = x/E;
        }
        printf ("%f %2d", x_temp, E);
    }
}
