#include <iostream>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        double a;
        int d = 0;
        cin >> a;
        while (a>1){
            d++;
            a/=2;
        }
        cout << d << " dias" << endl;
    }
}
