#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{
    int arr[2001] = {0};
    int n, x;
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> x;
        ++arr[x-1];
    }
    for (int i = 0; i<2001; i++){
        if (arr[i] != 0){
            cout << (i+1) << " aparece " << arr[i] << " vez(es)" << endl;
        }
    }
    return 0;
}
