#include <iostream>
using namespace std;
int main ()
{
    int t, a;
    string ch;
    while (cin >> t){
        int epr = 0, ehd = 0, intro = 0;
        while (t--){
            cin >> a >> ch;
            if (ch== "EPR") epr ++;
            else if (ch== "EHD") ehd++;
            else intro ++;
        }
        cout << "EPR: " << epr << endl << "EHD: " << ehd << endl << "INTRUSOS: " << intro << endl;
    }
    return 0;
}
