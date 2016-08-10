#include <iostream>
using namespace std;
struct studnet {
    long long int ID;
    double notes;
}p[101];
int main ()
{
    int t;
    double maximum = 0;
    cin >> t;
    for (int i = 0; i<t; ++i){
        cin >> p[i].ID >> p[i].notes;
        if (p[i].notes > maximum)
            maximum = p[i].notes;
    }
    if (maximum<8)
        cout << "Minimum note not reached" << endl;
    else
        for (int i = 0; i<t; ++i){
            if (p[i].notes==maximum){
                cout << p[i].ID << endl;
                break;
            }
        }
    return 0;
}
