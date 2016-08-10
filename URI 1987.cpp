#include <iostream>
using namespace std;
int add (long long num)
{
    int sum = 0;
    while (num > 0){
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int main ()
{
    long long n, m;
    while (cin >> n >> m){
        if (add(m) % 3 == 0)
            cout << add(m) << " sim" << endl;
        else
            cout << add(m) << " nao" << endl;
    }
    return 0;
}
