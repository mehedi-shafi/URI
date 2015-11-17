#include <stdio.h>
void main ()
{
    int number, code;
    double price, total = 0, amount;
    scanf ("%d", &number);
    while (number --){
        scanf ("%d %lf", &code, &amount);
        switch (code) {
            case 1001 :{
                price = 1.50;
                break;
            }
            case 1002 : {
                price = 2.50;
                break;
            }
            case 1003 : {
                price = 3.50;
                break;
            }
            case 1004 : {
                price = 4.50;
                break;
            }
            case 1005 : {
                price = 5.50;
                break;
            }
        }
        total += amount * price;
    }
    printf ("%.2lf\n", total);
}
