#include <iostream>
using namespace std;
int remaining (int n, int k)
{
    int r = 0;
    for (int i =2; i<=n; i++){
        r = (r+k)%i;
    }
    return r;
}
int main ()
{
    int t, n, k;
    cin >> t;
    for (int i =1; i<=t; i++){
        cin >> n >> k;
        cout << "Case " << i << ": " << remaining (n,k)+1 << endl;
    }
    return 0;
}
