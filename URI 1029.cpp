#include <iostream>
using namespace std;
int calls;
long long fibo(long long n)
{
    ++calls;
    if (n == 0 || n == 1)
        return n;
    else{
        return fibo(n-1)+fibo(n-2);
    }
}

int main ()
{
    int n, x, res;
    cin >> n;
    while (n--){
        calls = -1;
        cin >> x;
        res = fibo(x);
        cout << "fib(" << x << ") = " << calls << " calls = " << res << endl;
    }
    return 0;
}
