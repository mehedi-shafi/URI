#include <iostream>
using namespace std;
int main ()
{
    int a[6], b[6], check = 0;
    for (int i = 0; i<5; ++i)
        cin >> a[i];
    for (int i = 0; i<5; ++i)
        cin >> b[i];
    for (int i = 0; i<5; ++i){
        if (a[i]==b[i])
            check = 1;
    }
    if (check == 1) cout << "N" << endl;
    else cout << "Y" << endl;
}
