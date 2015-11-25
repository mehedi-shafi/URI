#include <iostream>
using namespace std;
int main ()
{
    int a, b, c, winner;
    while (cin >> a >> b >> c){
        if (a==b && c!= a) cout << "C" << endl;
        else if (b==c && a!=b) cout << "A" << endl;
        else if (a==c && b!=a) cout << "B" << endl;
        else cout << "*" << endl;
    }
}
