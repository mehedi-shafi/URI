#include <iostream>
using namespace std;
int main ()
{
    int s, t, f;
    cin >> s >> t >> f;
    t += (s+f);
    (t > 24) ? t -= 24 : t -= 0;
    (t < 0) ? t += 24 : t += 0;
    cout << t << endl;
    return 0;
}
