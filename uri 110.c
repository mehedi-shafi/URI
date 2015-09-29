#include <stdio.h>
main ()
{
    int R;
    float v;
    scanf ("%d", &R);
    v = ((4/3.0)*3.14159*(R^3));
    printf ("VOLUME = %.3f\n", v);
    return 0;
}
