#include <stdio.h>
void main ()
{
    int d, m=0, y=0;
    scanf ("%d", &d);
    if (d>=365){
        y=d/365;
        d-=(365*y);
    }
    if (d>=30){
        m=d/30;
        d-=(30*m);
    }
    printf ("%d ano(s)\n", y);
    printf ("%d mes(es)\n", m);
    printf ("%d dia(s)\n", d);
}
