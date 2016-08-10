#include <iostream>
#include <string>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while (t--){
        string a, b;
        cin >> a >> b;
        int i = 0, j = 0;
        while (i < a.size() && j < b.size()){
            cout << a[i++];
            cout << b[j++];
        }
        while (i < a.size())
            cout << a[i++];
        while (j < b.size())
            cout << b[j++];
        cout << endl;
    }
    return 0;
}
