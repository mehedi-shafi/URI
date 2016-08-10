#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main ()
{
    int n, a;
    cin >> n;
    vector <int> odd;
    vector <int> even;
    for (int i = 0; i < n; i++){
        cin >> a;
        if (a % 2 == 0)
            even.push_back(a);
        else
            odd.push_back(a);
    }
    sort (even.begin(), even.end());
    sort (odd.begin(), odd.end());
    for (int i = 0; i < even.size(); i++)
        cout << even[i] << endl;
    for (int i = odd.size()-1; i >= 0; i--)
        cout << odd[i] << endl;
    return 0;
}
