#include <iostream>
#include <cmath>
using namespace std;
int par[6], impar[6];
void display (int a)
{
    if (a == 1)
        for (int i=0; i<=4; i++)
            cout << "par[" << i << "] = " << par[i] << endl;
    else
        for (int i=0; i<=4; i++)
            cout << "impar[" << i << "] = " << impar[i] << endl;
}
int main ()
{
    int i = 0, j = 0, a;
    for (int k = 0; k < 15; k++){
        cin >> a;
        int b = abs(a);
        if (b % 2 == 0){
            par[i++] = a;
        }
        else{
            impar[j++] = a;
        }

        if (i == 5){
            display(1);
            i = 0;
        }
        if (j == 5){
            display(4);
            j = 0;
        }
    }
    for (int k = 0; k < j; k++)
        cout << "impar[" << k << "] = " << impar[k] << endl;
    for (int k = 0; k < i; k++)
        cout << "par[" << k << "] = " << par[k] << endl;
    return 0;
}
