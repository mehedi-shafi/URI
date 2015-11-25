#include <iostream>
using namespace std;
int main ()
{
    int n, a, m, j;
    while (cin >> n){
        if (n==0) break;
        m = 0;
        j = 0;
        while (n--){
            cin >> a;
            if (a==1) ++j;
            else if (a==0) ++m;
        }
        cout << "Mary won " << m << " times and John won " << j << " times" << endl;
    }
}
