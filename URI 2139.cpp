#include <bits/stdc++.h>
using namespace std;
int days[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int christmas = 360;

void countDays(int month, int day)
{
    int daysGone = 0;
    for (int i = 0; i < month-1; i++)
        daysGone += days[i];
    daysGone += day;
    if (daysGone == christmas)
        cout << "E natal!" << endl;
    else if (daysGone == christmas - 1)
        cout << "E vespera de natal!" << endl;
    else if (daysGone > christmas)
        cout << "Ja passou!" << endl;
    else
        cout << "Faltam " << (christmas - daysGone) << " dias para o natal!" << endl;
}

int main ()
{
    int month, day;
    while (cin >> month>> day)
        countDays(month, day);
    return 0;
}
