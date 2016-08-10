#include <iostream>
#include <string>
using namespace std;
int main ()
{
    unsigned long long number;
    while (cin >> number){
        if (number == 0){
            cout << "0" << endl;
            break;
        }
        char ans[100];
        int j = 99;
        while (number>0){
            int temp = number % 32;
            if (temp == 0)
                ans[j] = '0';
            else if (temp<=9)
                ans[j] = (temp + '0');
            else
                ans[j] = (temp + 55);
            --j;
            number /= 32;
        }
        ++j;
        for (int i = j; i<=99; i++)
            cout << ans[i];
        cout << endl;
    }
    return 0;
}
