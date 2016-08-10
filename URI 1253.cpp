#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int t;
    cin >> t;
    while (t--){
        string a;
        int n;
        cin >> a;
        cin >> n;
        for (int i = 0; i<a.size(); i++){
            a[i] -= n;
            if (a[i]<65){
                a[i] += 26;
            }
        }
        cout << a << endl;
    }
    return 0;
}
