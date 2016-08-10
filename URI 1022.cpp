#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int gcd(int n1, int n2)
{
    if (n2!=0)
       return gcd(n2, n1%n2);
    else
       return n1;
}
int main()
{
    int t;
    cin >> t;
    while (t--){
        int n1, d1, n2, d2, n, d, ns, ds;
        char ch;
        scanf("%d / %d %c %d / %d", &n1, &d1, &ch, &n2, &d2);
        if (ch == '+'){
            n = (n1*d2) + (n2*d1);
            d = d1 * d2;
        }
        else if (ch == '-'){
            n = (n1*d2) - (n2*d1);
            d = d1 * d2;
        }
        else if (ch == '*'){
            n = n1 * n2;
            d = d1 * d2;
        }
        else{
            n = n1 * d2;
            d = n2 * d1;
        }

        int hcf = (n > d) ? gcd(n, d) : gcd (d, n);
        ns = n / hcf;
        ds = d / hcf;
        if (ns >= 0 && ds >= 0)
            cout << n << "/" << d << " = " << (n/hcf) << "/" << (d/hcf) << endl;
        else
            cout << n << "/" << d << " = -" << abs(ns) << "/" << abs(ds) << endl;
    }
    return 0;
}
