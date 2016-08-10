#include <iostream>
#include <cstdio>
using namespace std;
int main ()
{
    int d = 0, h = 0, m = 0, s = 0;
    int d1, d2, h1, h2, m1, m2, s1, s2;
    scanf("Dia %d", &d1);
    scanf ("%d : %d : %d", &h1, &m1, &s1);
    getchar();
    scanf ("Dia %d", &d2);
    scanf ("%d : %d : %d", &h2, &m2, &s2);
    d = d2-d1;
    h = h2 - h1;
    m = m2 - m1;
    s = s2 - s1;
    if (s<0){
        s += 60;
        --m;
    }
    if  (m<0){
        m += 60;
        --h;
    }
    if (h<0){
        h += 24;
        --d;
    }
    cout << d << " dia(s)" << endl;
    cout << h << " hora(s)" << endl;
    cout << m << " minuto(s)" << endl;
    cout << s << " segundo(s)" << endl;
    return 0;
}
