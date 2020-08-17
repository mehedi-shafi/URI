#include <stdio.h>
#include <string.h>
void main ()
{
    int i, n, del, nmb;
    char num[1001] = {0}, l;
    while (1){
        scanf("%d", &del);
        i=0;
        while (num[i] != '\n'){
            scanf ("%c", &l);
            if (l!= del) num[i] = l;
        }
        if (del == 0 && num[0] == '0') break;
        printf ("%s", num);
    }
}
