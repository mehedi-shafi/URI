#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int n, h, x, c;
    bool pos = true;
    cin >> h >> n;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (i == 0){
            c = x;
        }
        else{
            if (abs(c - x) > h || abs(c - x) < 0)
                pos = false;
            c = x;
        }
    }
    if (pos)
        cout << "YOU WIN" << endl;
    else
        cout << "GAME OVER" << endl;
    return 0;
}
