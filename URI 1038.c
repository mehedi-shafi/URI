#include <stdio.h>
void main ()
{
    int X, Y;
    double price, total;
    scanf ("%d %d", &X, &Y);
    switch(X){
        case 1: {
            price = 4.00;
            break;
        }
        case 2: {
            price = 4.50;
            break;
        }
        case 3: {
            price = 5.00;
            break;
        }
        case 4: {
            price = 2.00;
            break;
        }
        case 5: {
            price = 1.50;
            break;
        }
    }
    total = Y*price;
    printf ("Total: R$ %.2lf\n", total);
}
