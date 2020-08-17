#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int m, n;
	while (cin >> m >> n && m && n){
		int grid[m][n], x;
		int problems[n];
		int contenstants[m];
		memset(problems, 0, sizeof problems);
		memset(contenstants, 0, sizeof contenstants);
		bool one = true, two = true, three = true, four = true;
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				cin >> grid[i][j];
				problems[j] += grid[i][j];
                contenstants[i] += grid[i][j];
			}
		}
        for (int i = 0; i < m; i++){
            if (contenstants[i] == n)
                one = false;
            if (contenstants[i] == 0)
                four = false;
        }

        for (int i = 0; i < n; i++){
            if (problems[i] == 0)
                two = false;
            if (problems[i] == m)
                three = false;
        }

        int ans = 0;
        if (one) ans++;
        if (two) ans++;
        if (three) ans++;
        if (four) ans++;
		cout << ans << endl;
	}
}
