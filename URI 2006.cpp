#include <iostream>
using namespace std;
int main ()
{
    int a, b, c=0;
    cin >> a;
    for (int i=0; i<5; i++)
    {
        cin >> b;
        if (b==a) c++;
    }
    cout << c << endl;
    return 0;
}
