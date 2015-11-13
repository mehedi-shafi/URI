#include <stdio.h>
void main()
{
    int xi, xf, yi, yf, h, m;
    scanf ("%d %d %d %d", &xi, &yi, &xf, &yf);
    if (xi == xf) h =24;
    else if (xi>xf) h = ((24-xi)+xf);
    else if (xi<xf) h = (xf-xi);
    if (yi==yf) {
        m = 0;
    }
    else if (yi>yf) {
        m = ((60-yi)+yf);
        --h;
    }
    else if (yi<yf) m = (yf-yi);
    if (m>=60){
        ++h;
        m-=60;
    }
    printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
}
