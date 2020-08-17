#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main ()
{
    long long int ld, cd, lv, cv;
    vector <long long int> serial;
    cin >> ld >> cd >> lv >> cv;
    if (ld==cv)
        serial.push_back((ld*cv));
    if (ld == lv)
        serial.push_back((ld*lv));
    if (cd == lv)
        serial.push_back((cd*lv));
    if (cd == cv)
        serial.push_back((cd*cv));
    sort(serial.begin(), serial.end());
    cout << serial[serial.size()-1] << endl;
    return 0;
}
//20% fucking error -_-

