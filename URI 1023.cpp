#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
struct resident {
    int number;
    int consumption;
    int avg;
}p[1000];
int main ()
{
    int t;
    for (int j = 1; ; ++j){
        cin >> t;
        if (t == 0) break;
        double avg;
        int total_consume = 0, total_number = 0, Sort[10000];
        for (int i = 0; i<t; ++i){
            cin >> p[i].number >> p[i].consumption;
            total_number += p[i].number;
            total_consume += p[i].consumption;
            p[i].avg = (p[i].consumption/p[i].number);
        }
        avg = (double) (total_consume/total_number);
        for (int i = 0; i<t; i++){
            for (int k = (i+1); k<t; k++){
                if (p[i].number>p[k].number)
                    Sort[i] = k;
            }
        }
        cout << "Cidade# " << j << ":" << endl;
        for (int i = 0; i<t; ++i){
            cout << p[Sort[i]].number << "-" << p[Sort[i]].avg;
            if (i!=(t-1)) cout << " ";
        }
        cout << endl;
        cout << "Consumo medio: " << fixed << setprecision(2) << avg << endl << endl;
    }
    return 0;
}
