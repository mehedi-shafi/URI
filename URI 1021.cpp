#include <iostream>
using namespace std;
int main ()
{
    double amount;
    int c[7] = {0}, n[7] = {0};
    cin >> amount;
    if (amount >=100.00) {
        n[0] = (int) (amount/100);
        amount -= (double) (n[0]*100);
    }
    if (amount >= 50) {
        n[1] = (int) (amount/50);
        amount -= (double) (n[1]*50);
    }
    if (amount >= 20) {
        n[2] = (int) (amount/20);
        amount -= (double) (n[2]*20);
    }
    if (amount >= 50) {
        n[3] = (int) (amount/10);
        amount -= (double) (n[3]*10);
    }
    if (amount >= 5) {
        n[4] = (int) (amount/5);
        amount -= (double) (n[4]*5);
    }
    if (amount >= 2) {
        n[5] = (int) (amount/2);
        amount -= (double) (n[5]*2);
    }
    if (amount >= 1) {
        c[0] = 1;
        amount -= 1.0;
    }
    if (amount >= .5) {
        c[1] = (int) (amount/.5);
        amount -= (double) (c[1]*.5);
    }
    if (amount >= .25) {
        c[2] = (int) (amount/.25);
        amount -= (double) (c[2]*.25);
    }
    if (amount >= .10) {
        c[3] = (int) (amount/.10);
        amount -= (double) (c[3]*.10);
    }
    if (amount >= .05) {
        c[4] = (int) (amount/.05);
        amount -= (double) (c[4]*.05);
    }
    if (amount >= .01) {
        c[5] = (int) (amount/.01);
        amount -= (double) (c[5]*.01);
    }
    cout << "NOTAS:" << endl;
    cout << n[0] << " nota(s) de R$ 100.00" << endl;
    cout << n[1] << " nota(s) de R$ 50.00" << endl;
    cout << n[2] << " nota(s) de R$ 20.00" << endl;
    cout << n[3] << " nota(s) de R$ 10.00" << endl;
    cout << n[4] << " nota(s) de R$ 5.00" << endl;
    cout << n[5] << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << c[0] << " moeda(s) de R$ 1.00" << endl;
    cout << c[1] << " moeda(s) de R$ 0.50" << endl;
    cout << c[2] << " moeda(s) de R$ 0.25" << endl;
    cout << c[3] << " moeda(s) de R$ 0.10" << endl;
    cout << c[4] << " moeda(s) de R$ 0.05" << endl;
    cout << c[5] << " moeda(s) de R$ 0.01" << endl;
}
