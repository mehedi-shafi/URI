#include <iostream>
using namespace std;
int main ()
{
    int n, la, lb, ra, rb;
    cin >> n;
    cin >> la >> lb;
    cin  >> ra >> rb;
    if (n>=la && n<=lb && n>=ra && n<=rb) cout << "possivel" << endl;
    else cout << "impossivel" << endl;
    return 0;
}
