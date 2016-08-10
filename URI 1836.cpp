#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    for (int i = 1; i<= t; ++i){
        string name;
        int level, Bs, IV, EV, HP, AT, DF, SP, s;
        cin >> name >> level;
        cin >> Bs >> IV >> EV;
        HP = (((IV + Bs + (sqrt(EV)/8) + 50)*level)/50)+10;
        for (int j= 0; j<3; ++j){
            cin >> Bs >> IV >> EV;
            s = (((IV +Bs + (sqrt(EV)/8))*level)/50)+5;
            if ( j== 0 )
                AT = s;
            else if (j==1)
                DF = s;
            else
                SP = s;
        }
        cout << "Caso #" << i << ": " << name << " nivel " << level << endl;
        cout << "HP: " << HP << endl;
        cout << "AT: " << AT << endl;
        cout << "DF: " << DF << endl;
        cout << "SP: " << SP << endl;
    }
    return 0;
}
