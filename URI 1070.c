#include <stdio.h>
void main ()
{
    int n, i, odd=0;
    scanf ("%d", &n);
    for (i=n; 1<3; ++i){
        if (i%2!=0){
            odd++;
            printf ("%d\n", i);
        }
        if (odd==6) break;
    }
}
