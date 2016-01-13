#include <iostream>
using namespace std;

int main ()
{
    int m, n;
    long long fat[21];
    fat[0]=1;
    for (int i=1; i<=20; i++){
        fat[i]=fat[i-1]*i;
    }

    while (cin >> m >> n){
        cout << (fat[m]+fat[n]) << endl;
    }
    return 0;
}
