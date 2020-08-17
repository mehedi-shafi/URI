#include <iostream>
using namespace std;
int main ()
{
    int x, c, k = 0, n;
    bool found = false;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (i == 0)
            c = x;
        else{
            if (x < c){
                if (!found){
                    k = i + 1;
                    found = true;
                }
                c = x;
            }
            else
                c = x;
        }
    }
    cout << k << endl;
    return 0;
}
