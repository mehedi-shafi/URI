#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int arr[200];
	int n;
	while (cin >> n){
		int x;
		char c;
		memset (arr, 0, sizeof arr);
		for (int i = 0; i < n; i++){
			cin >> x >> c;
			if (c == 'E')
				arr[x+60]++;
			else
				arr[x]++;
		}
		int cnt = 0;
		for (int i = 1; i <= 60; i++){
			cnt += min (arr[i], arr[i+60]);
		}
		cout << cnt << endl;
	}
	return 0;
}
