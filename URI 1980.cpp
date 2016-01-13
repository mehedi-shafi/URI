#include <iostream>
#include <string>
using namespace std;
int main ()
{
    long long fat[21];
    fat[0]=1;
    for (int i=1; i<=20; i++){
        fat[i]=fat[i-1]*i;
    }
    string a;
    while (cin >> a){
        if (a=="0") break;
        int l = a.length();
        cout << fat[l] << endl;
    }
    return 0;
}
