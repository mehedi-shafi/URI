#include <iostream>
#include <string>
using namespace std;
int main ()
{
    int n, m;
    string cm;
    cin >> n >> m;
    while (m--){
        cin >> cm;
        if (cm.compare("fechou") == 0)
            ++n;
        else
            --n;
    }
    cout << n << endl;
    return 0;
}
