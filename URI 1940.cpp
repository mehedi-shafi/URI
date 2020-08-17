#include <iostream>
using namespace std;
int main ()
{
    int p[510] = {}, r, n, last[510], highest = 0;
    cin >> n >> r;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < n; j++){
            int a;
            cin >> a;
            p[j] += a;
            if (p[j] > highest)
                highest = p[j];
            last[j] = a;
        }
    }
    int c = 0;
}
