#include <stdio.h>
void main ()
{
    int i, n, j, spd;

    while (scanf ("%d", &n) != EOF){
        for (i=0; i<n; ++i){
            scanf ("%d", &j);
            if (i==0) spd =j;
            if (j>=spd) spd = j;
        }
        if (spd<10) printf ("1\n");
        else if (spd>=10 && spd<20) printf ("2\n");
        else if (spd>=20) printf ("3\n");
    }
}
