#include <iostream>
using namespace std;
int main ()
{
    int a, b;
    while (cin >> a >> b){
        if (a == 0 && b == 0)
            break;
        int arr[20000] = {0};
        int c = 0;
        for (int i = 0; i<b; i++){
            int n;
            cin >> n;
            if (arr[n-1] == 0)
                arr[n-1] = 1;
            else if (arr[n-1] == 1){
                ++c;
                arr[n-1] = 2;
            }
        }
        cout << c << endl;
    }
    return 0;
}
