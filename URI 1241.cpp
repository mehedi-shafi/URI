#include <iostream>
#include <string>
using namespace std;
int main ()
{
    long long t;
    cin >> t;
    while (t--){
        string a, b;
        cin >> a >> b;
        int l1 = a.size(), l2 = b.size();
        string temp = b;
        if (l1<l2){
            cout << "nao encaixa" << endl;
            continue;
        }
        for (int i = 0; i < l2; i++){
            int d = ((l1-l2)+i);
            temp[i] = a[d];
        }
        if (b.compare(temp) == 0)
            cout << "encaixa" << endl;
        else
            cout << "nao encaixa" << endl;
    }
    return 0;
}
