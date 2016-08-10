#include <iostream>
#include <string>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while (t--){
        int p;
        cin >> p;
        string a, first;
        bool yes = true;
        for (int i = 0; i < p; i++){
            cin >> a;
            if (i == 0)
                first = a;
            else{
                if (a.compare(first) != 0)
                    yes = false;
            }
        }
        if (yes)
            cout << a << endl;
        else
            cout << "ingles" << endl;
    }
    return 0;
}
