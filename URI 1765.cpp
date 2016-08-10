#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int t;
    while (cin >> t && t!=0){
        for (int i=1; i<= t; ++i){
            int amount;
            double a, b, area;
            cin >> amount >> a >> b;
            area = (double) (amount*(((a+b)/2)*5));
            cout << "Size #" << i << ":\nIce Cream Used: "
                 << setprecision(2) << fixed << area << " cm2" << endl;
        }
        cout << endl;
    }
    return 0;
}
