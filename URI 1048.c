#include <stdio.h>
void main ()
{
    float i, new_i, percent;
    scanf ("%f", &i);
    if (i>=0 && i<=400.00)
        percent = .15;
    else if (i>=400.01 && i<=800.00)
        percent = .12;
    else if (i>=800.01 && i<=1200.00)
        percent = .10;
    else if (i>=1200.01 && i<=2000.00)
        percent = .07;
    else if (i>2000.00)
        percent = .04;
    new_i = i+ (i*percent);
    printf ("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n", new_i, new_i-i, percent*100);
}
