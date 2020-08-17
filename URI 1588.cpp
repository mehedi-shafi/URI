///Madafaqqa

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstdio>
#include <string.h>
using namespace std;
struct team_details {
    string name;
    int goals = 0;
    int points = 0;
    int wins = 0;
}p[10001];
typedef struct team_details team;

int main ()
{
    int t, a, b, m, n;
    string t1, t2;
    cin >> t;
    while (t--){
        int pos[10001];
        cin >> m >> n;
        getchar();
        for (int i = 0; i < m; ++i){
            cin >> p[i].name;
            pos[i] = i;
        }
        while (n--){
            cin >> a >> t1 >> b >> t2;
            getchar();
            for (int i = 0; i< m; ++i){
                if (t1.compare(p[i].name)==0){
                    p[i].goals += a;
                    if (a>b){
                        p[i].points += 3;
                        p[i].wins += 1;
                    }
                    else if (a==b)
                        p[i].points += 1;
                }
            }
            for (int i = 0; i< m; ++i){
                if (t2.compare(p[i].name) == 0){
                    p[i].goals += b;
                    if (b>a){
                        p[i].points += 3;
                        p[i].wins += 1;
                    }
                    else if (b==a)
                        p[i].points += 1;
                }
                }
            }
            for (int i = 0; i<m; ++i){
                for (int j = (i+1); j<m; ++j){
                    if (p[pos[j]].points > p[pos[i]].points)
                        swap(pos[i], pos[j]);
                    else if (p[pos[j]].points == p[pos[i]].points){
                        if (p[pos[j]].wins > p[pos[i]].wins)
                            swap(pos[i], pos[j]);
                        else if (p[pos[j]].wins == p[pos[i]].wins){
                            if (p[pos[j]].goals > p[pos[i]].goals)
                                swap(pos[i], pos[j]);
                        }
                    }
                }
            }
            for (int i = 0; i<m; i++){
                cout << p[pos[i]].name << endl;
            }
    }
    return 0;
}



