#include <stdio.h>
void main()
{
    int x, z, count = 0, i, temp = 0;
    scanf ("%d", &x);
    while (scanf ("%d", &z)){
        if (z>x) break;
    }
    i=x;
    while (temp<=z){
        temp +=i;
        ++count;
        ++i;
    }
    printf ("%d\n", count);
}
