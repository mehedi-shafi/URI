#include <iostream>
#include <string>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while (t--){
        int n, arr[51], hits = 0;
        string pos;
        cin >> n;
        for (int i = 0; i<n; i++){
            cin >> arr[i];
        }
        cin >> pos;
        for(int i = 0; i<n; i++){
            if (pos[i] == 'S'){
                if (arr[i] == 1 || arr[i] == 2)
                    ++hits;
            }
            if (pos[i] == 'J'){
                if (arr[i] > 2)
                    ++hits;
            }
        }
        cout << hits << endl;
    }
    return 0;
}
