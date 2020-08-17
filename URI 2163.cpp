#include <bits/stdc++.h>
using namespace std;

int grid[10000][10000];

bool isLightSaber(int x, int y){
     if (grid[x-1][y-1] == 7 && grid[x-1][y] == 7 && grid[x-1][y+1] == 7 && grid[x][y-1] == 7 && grid[x][y+1] == 7 && grid[x+1][y-1] == 7 && grid[x+1][y] == 7 && grid[x+1][y+1] == 7 )
        return true;
    return false;
}

int main()
{
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> grid[i][j];
        }
    }
    bool found = false;
    int x, y;
    for (int i = 1; i < m-1 && !found; i++){
        for (int j = 1; j < n-1 && !found; j++){
            if (grid[i][j] == 42) {
                if (isLightSaber(i, j)){
                    found = true;
                    x = i + 1;
                    y = j + 1;
                }
            }
        }
    }
    if (!found)
        x = y = 0;
    cout << x << " " << y << endl;
    return 0;
}
