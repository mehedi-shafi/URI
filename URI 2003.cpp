#include <cstdio>
#include <iostream>
using namespace std;
int main ()
{
    int a, b;
    while (scanf ("%d:%d", &a, &b) == 2){
        b += 60;
        if (b >= 60){
            ++a;
            b -= 60;
        }
        int late = 0;
        if (a > 8){
            late += (((a-8) * 60) + b);
        }
        else if (a == 8)
            late += b;
        cout << "Atraso maximo: " << late << endl;
    }
    return 0;
}
