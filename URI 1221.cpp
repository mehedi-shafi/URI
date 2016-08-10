#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(long long a)
{
    if (a == 1)
        return false;
    for (int i = 2; i <= sqrt(a); i++){
        if (a % i == 0)
            return false;
    }
    return true;
}
int main ()
{
    int n;
    cin >> n;
    while (n--){
        long long a;
        cin >> a;
        if (isPrime(a))
            cout << "Prime" << endl;
        else
            cout << "Not Prime" << endl;
    }
    return 0;
}
