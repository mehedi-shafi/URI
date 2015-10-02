#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, i,j,o=0;
    scanf("%d %d", &a, &b);
    for(i=a-1;i>b;i--){
        if(i%2!=0){
            o = o + i;
        }

    }
    printf("%d",o);

    return 0;
}
