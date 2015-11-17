#include <stdio.h>
#include <string.h>
void main ()
{
    char string[35];
    int i, j;
    strcpy (string, "LIFE IS NOT A PROBLEM TO BE SOLVED");
    scanf ("%d", &j);
    for (i=0; i<j; ++i){
        printf ("%c", string[i]);
    }
    printf ("\n");
}
