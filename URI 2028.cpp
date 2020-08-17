#include <iostream>
using namespace std;
int main ()
{
    int n, k = 1;
    while (cin >> n){
        cout << "Caso " << k++ << ": " << (((n*(n+1))/2)+1) << ((n == 0)? " numero" : " numeros") << endl;
        for (int i = 0; i <= n; i++){
            if (i != 0)
                cout << " ";
            if (i == 0 || i == 1)
                cout << i;
            else{
                for (int j = 0; j < i; j++){
                    if (j != 0)
                        cout << " ";
                    cout << i;
                }
            }
        }
        cout << endl << endl;
    }
    return 0;
}
