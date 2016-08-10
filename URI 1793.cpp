#include <iostream>
using namespace std;
int main ()
{
    int n;
    while (cin >> n){
        if (n==0) break;
        int a, a_prev, time = 0;
        for (int i = 0; i<n; ++i){
            cin >> a;
            if (i==0){
                time+=10;
                a_prev = a;
                continue;
            }
            if ((a-a_prev)<=10){
                time+=(a-a_prev);
                a_prev = a;
            }
            else {
                time+=10;
                a_prev = a;
            }
        }
        cout << time << endl;
    }
    return 0;
}
