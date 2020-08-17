#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    getchar();
    while (t--){
		string a;
		getline (cin, a);
		stringstream ss(a);
		while (ss >> a)
		 cout << a[0];
		cout << endl;
    }
    return 0;
}
