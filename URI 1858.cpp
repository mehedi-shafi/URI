#include <iostream>

using namespace std;
int main ()
{
    int n, a[101], pos = 0;
    cin >> n;
    for (int i = 0; i<n; ++i){
        cin >> a[i];
    }
    for (int i=0; i<n; ++i){
        if (a[pos]> a[i])
            pos = i;
    }
    cout << (pos+1) << endl;
    return 0;
}
