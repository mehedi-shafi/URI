#include <iostream>
using namespace std;
int main ()
{
    int ax, ay, bx, by, cx, cy, dx, dy, rx, ry, t;
    cin >> t;
    while (t--){
        cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy >> rx >> ry;
        if (rx>=ax && rx<= bx && rx >= dx && rx <= cx && ry >= ay && ry >=by && ry <= dy && ry <=cy) cout << "1" << endl;
        else cout << 0 << endl;
    }
    return 0;
}
