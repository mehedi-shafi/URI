#include <iostream>
using namespace std;
int main ()
{
	int t;
	while (cin >> t && t){
		while (t--){
			int n;
			cin >> n;
			if (n % 2 == 0)
				cout << ((n*2)-2) << endl;
			else
				cout << ((n*2)-1) << endl;
		}
	}
	return 0;
}
