#include <iostream>
using namespace std;
int main ()
{
    int t;
    while (cin >> t){
        if (t==0)
            break;
        while (t--){
            int a, b, c, d, e;
            char ans;
            int cnt = 0;
            cin >> a >> b >> c >> d >> e;
            if (a<=127){
                ++cnt;
                ans = 'A';
            }
            if (b <= 127){
                ++cnt;
                ans = 'B';
            }
            if (c <= 127){
                ++cnt;
                ans = 'C';
            }
            if (d <= 127){
                ++cnt;
                ans = 'D';
            }
            if (e <= 127){
                ++cnt;
                ans = 'E';
            }

            if (cnt == 1)
                cout << ans << endl;
            else
                cout << "*" << endl;
        }
    }
    return 0;
}
