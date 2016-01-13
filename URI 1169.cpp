#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while (t--){
        int x;
        cin >> x;
        long long unsigned ans = (pow(2, x)/12000) ;
        cout << ans << " kg" << endl;
    }
    return 0;
}
