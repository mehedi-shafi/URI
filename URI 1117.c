#include <stdio.h>
void main ()
{
    float X, Y, media;
    for ( ; ; ){
        scanf ("%f", &X);
        if (X>=0 && X<=10.0){
            break;
        }
        else {

            printf ("nota invalida\n");
            continue;
            }
    }
    for ( ; ; ){
        scanf ("%f", &Y);
        if (Y>=0 && Y<=10.0){
            break;
        }
        else {

            printf ("nota invalida\n");
            continue;
            }

    }
    media = (X+Y)/2;
        printf ("media = %.2f\n", media);
}
