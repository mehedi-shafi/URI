#include <stdio.h>
void main ()
{
    int t, pa, pb, i, year =0;
    double ga, gb, ppa, ppb;
    scanf ("%d", &t);
    for (i=0; i<t; ++i){
        scanf ("%d %d %lf %lf", &pa, &pb, &ga, &gb);
        for ( ; ; ){
            if (pa>pb) break;
            else {
                ppa = pa + ((ga*pa)/100);
                ppb = pb + ((gb*pb)/100);
                pa = (int) ppa;
                pb = (int) ppb;
                ++year;
                if (year > 100){
                    printf ("Mais de 1 seculo.\n");
                    break;
                }
            }
        }
        if (year<=100) printf ("%d anos.\n", year);
        year = 0;
    }
}
