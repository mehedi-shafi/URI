#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int t, x, y, rafael, beto, carlos;
    cin >> t;
    while (t--){
        cin >> x >> y;
        rafael = (pow((3*x), 2))+ pow(y,2);
        beto = 2 * (x*x) + (pow((5*y), 2));
        carlos = (-100)*x + pow(y,3);
        if (rafael > beto && rafael > carlos) cout << "Rafael ganhou" << endl;
        else if (beto > rafael && beto > carlos) cout << "Beto ganhou" << endl;
        else cout << "Carlos ganhou" << endl;
    }
    return 0;
}
