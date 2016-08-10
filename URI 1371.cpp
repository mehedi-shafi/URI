#include <iostream>
using namespace std;

int main()
{
    long long t;
    while (cin >> t){
        if (t == 0)
            break;
        long long sum = 1;
        cout << "1";
        sum = 4;
        for (int i = 5; sum <= t; i+=2){
            cout << " " << sum;
            sum += i;
        }
        cout << endl;
    }
    return 0;
}
