#include <bits/stdc++.h>
using namespace std;
int main ()
{
    double pi = acos(-1);
    int t, k = 1;
    cin >> t;
    while (t--){
        double r, n;
        cin >> r >> n;
        cout << "Case " << k++ << ": " << setprecision(10) << fixed << sin(pi/n)*r/(sin(pi/n) + 1) << endl;
    }
    return 0;
}
