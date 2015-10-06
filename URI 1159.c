#include <stdio.h>
void main ()
{
    int a, i, sum = 0,count;
    for ( ; ; ){
        scanf ("%d", &a);
        count = 0;
        sum = 0;
        if (a==0) break;
        else{
        for (i=a; ;++i){
            if (i%2==0){
                sum+=i;
                ++count;
            }
            if (count==5) break;
        }
        printf ("%d\n", sum);
        }
    }
}
