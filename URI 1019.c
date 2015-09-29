#include <stdio.h>
void main ()
{
    int N;
    int h=0, m=0;
    scanf ("%d", &N);
    if (N>=3600){
        h=N/3600;
        N-=(h*3600);
    }
    if (N>=60){
        m=N/60;
        N-=(m*60);
    }
    printf ("%d:%d:%d\n", h,m,N);
}
