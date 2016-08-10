#include <iostream>
using namespace std;
int main ()
{
    int n, r, a;

    while (cin >> n >> r){
        int arr[10001];
        for (int i = 0; i<n; ++i)
            arr[i] = (i+1);
        for (int i = 0; i<r; ++i){
            cin >> a;
            for (int j = 0; j<n; ++j)
                if (arr[j] == a)
                    arr[j] = 0;
        }
        if (n==r){
            cout << "*" << endl;
            continue;
        }
        for (int i = 0; i<n; ++i){
            if (arr[i]!= 0)
                cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
