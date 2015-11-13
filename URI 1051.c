#include <stdio.h>
void main ()
{
    double t, tax;
    scanf ("%lf", &t);
    if (t<=2000.00){
        printf ("Isento\n");
    }
    else if (t>=2000.01 && t<=3000.00)
        printf ("R$ %.2lf\n", (t-2000)*.08);
    else if (t>=3000.01 && t<=4500.00)
        printf ("R$ %.2lf\n", ((t-3000)*.18) + (1000*.08));
    else if (t>=4500.01)
        printf ("R$ %.2lf\n", (((t-4500)*.28))+(1500*.18)+(1000*.08));
}
