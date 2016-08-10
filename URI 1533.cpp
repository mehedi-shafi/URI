#include <iostream>
using namespace std;
int main ()
{
    int n;
    while (cin >> n){
        if (n == 0)
            break;
        int arr[n+1];
        int most = 0, ans = 0, pos_m = 0, pos_a = 0;
        for (int i = 0; i<n; i++)
            cin >> arr[i];
        most = 0;
        ans = 0;
        for (int i = 0; i<n; i++){
            if (arr[i] > most){
                ans = most;
                most = arr[i];
                pos_a = pos_m;
                pos_m = i;
            }
            else if (arr[i] > ans){
                ans = arr[i];
                pos_a = i;
            }
            else if (arr[i] == ans){

            }

        }
        cout << (pos_a+1) << endl;
    }
    return 0;
}
