#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int i, t, number, n, s[11], pos;
    cin >> t;
    while (t--){
        cin >> n >> number;
        for (i=0; i<n; ++i){
            cin >> s[i];
        }
        int dis;
        for (i=0; i<n; i++){
            if (i==0){
                dis = abs(number-s[i]);
                pos = i;
                continue;
            }
            if (dis>abs(number-s[i])){
                dis = abs(number-s[i]);
                pos = i;
            }
        }
        cout << (pos+1) << endl;
    }
}
