#include <iostream>
using namespace std;
int main ()
{
    int loop, a, y=0, n=0;
    cin >> loop;
    while (loop--){
        cin >> a;
        if (a==1) n++;
        else y++;
    }
    if (y>n) cout << "Y" << endl;
    else cout << "N" << endl;
    return 0;
}
