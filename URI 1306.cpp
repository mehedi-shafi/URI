#include <iostream>
using namespace std;
int main ()
{
    int r, n;
    for (int i = 1; ; ++i){
        cin >> r >> n;
        if (r == 0 && n == 0) break;
        bool impos = true;
        if (n >= r){
            cout << "Case " << i << ": 0" << endl;
            impos = false;
        }
        else {
            for (int j = 1; j< 27; j++){
                if (n*(j+1) >= r){
                    cout << "Case " << i << ": " << j << endl;
                    impos = false;
                    break;
                }
            }
        }
        if (impos)
            cout << "Case " << i << ": impossible" << endl;
    }
    return 0;
}
