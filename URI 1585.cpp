#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int t, a, b;
    cin >> t;
    while (t--){
        cin >> a >> b;
        cout << trunc ((double)(.5*a*b)) << " cm2" << endl;
    }
    return 0;
}
