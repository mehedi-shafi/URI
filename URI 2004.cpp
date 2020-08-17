#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t, f[110][2];
    cin >> t;
    while (t--){
        memset(f, 0, sizeof f);
        int q, type, w;
        cin >> q;
        while (q--){
            cin >> type >> w;
            if (w >= 10 && w <= 100){
                if (w > f[type][0])
                    f[type][0] = w;
            }
            else{
                if (w > f[type][1])
                    f[type][1] = w;
            }
        }
        int sum = 0;
        for (int i = 0; i < 110; i++){
            if (f[i][0] == 0)
                sum += f[i][1];
            else
                sum += f[i][0];
        }
        cout << sum << endl;
    }
    return 0;
}
