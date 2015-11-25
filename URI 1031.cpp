#include <iostream>
using namespace std;
int region(int n, int k)
{
    int r = 0;
    for (int i = 1; i<n; i++)
        r = (r+k)%i;

    return r;
}
int main ()
{
    int n, y;
    while (1){
        cin >> n;
        if (n==0) break;
        y = 1;
        while (1){
            if (region(n,y) != 11) y++;
            else break;
        }
        cout << y << endl;
    }
    return 0;
}
