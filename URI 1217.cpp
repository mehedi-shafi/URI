#include <iostream>
#include <string>
#include <string.h>
#include <cstdio>
#include <iomanip>
using namespace std;
int main()
{
    int t;
    double amount, avgamount, total_amount=0, cost, total_cost=0, avgcost;
    char a[20000];
    cin >> t;
    for (int i = 1; i<= t; ++i){
        cin >> cost;
        getchar();
        total_cost+=cost;
        int Count = 1;
        cin.getline(a, 20000);
        int len = strlen(a);
        for (int j = 0; j<len; ++j)
            if (a[j] == 32)
                ++Count;
        total_amount+=Count;
        cout << "day " << i << ": " << Count << " kg" << endl;
    }
    avgamount = total_amount/t;
    avgcost = total_cost/t;
    cout << fixed << setprecision(2) << avgamount << " kg by day" << endl;
    cout << fixed << setprecision(2) << "R$ " << avgcost << " by day" << endl;
}
