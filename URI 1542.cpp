#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int x, a, b, c;
    while (cin >> a && a!=0){
        cin >> b >> c;
        int page = trunc((double) (b*c)/(c-a) * a);
        if (page>1) cout << page << " paginas" << endl;
        else if (page == 1) cout << page << " pagina" << endl;
    }
}
