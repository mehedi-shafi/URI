#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, n;
	cin >> t;
	while (t--){
		cin >> n;
		int arr[n], sorted[n];
		for (int i = 0; i < n; i++){
			cin >> arr[i];
			sorted[i] = arr[i];
		}
		sort(sorted, sorted+n);
		int change = 0;
		for (int i = 0; i < n; i++)
			if (arr[i] != sorted[n-1-i])
				change++;

		cout << n-change << endl;
	}
	return 0;
}
