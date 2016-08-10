#include <iostream>
using namespace std;
int main ()
{
    string s;
    char ch, ans[101];
    int k;
    while (cin >> ch >> s){
        k = 0;
        if (ch == '0' && s[0] == '0')
            break;
        for (int i = 0; i < s.size(); i++){
            if (k == 0){
                if (s[i] != ch && s[i] != '0'){
                    ans[k] = s[i];
                    ++k;
                }
            }
            else if (s[i] != ch){
                ans[k] = s[i];
                ++k;
            }
        }
        if (k == 0)
            cout << "0" << endl;
        else{
            for (int i = 0; i < k; i++){
                cout << ans[i];
            }
            cout << endl;
        }
    }
    return 0;
}
