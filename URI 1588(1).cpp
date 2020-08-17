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
    bool used = false;
};
typedef struct team_details team;

int main ()
{
    int t, a, b, m, n;
    string t1, t2;
    cin >> t;
    while (t--){
        team p[101];
        cin >> m >> n;
        getchar();
        for (int i = 0; i < m; ++i){
            cin >> p[i].name;
        }
        while (n--){
            cin >> a >> t1 >> b >> t2;
            getchar();
            for (int i = 0; i< m; ++i){
                if ((t1.compare(p[i].name)) == 0)
                    p[i].goals += a;
                    if (a>b)
                        p[i].points += 3;
                    else if (a==b)
                        p[i].points += 1;
            }
            for (int i = 0; i< m; ++i){
                if ((t2.compare(p[i].name)) == 0)
                    p[i].goals += b;
                    if (b>a)
                        p[i].points += 3;
                    else if (b==a)
                        p[i].points += 1;
            }
            /*for (int i = 0; i< m; ++i){
                cout << p[i].name << " Scored " << p[i].goals << " goals." << endl;*/
            }
            int position[110];
            for (int i=0; i<m; ++i){
                for (int j = 1; j<m; ++j){
                    if (p[j].points>p[(j+1)].points){
                        if (p[j].used)
                            continue;
                        else{
                            position[i] = j;
                            p[j].used = true;
                        }
                    }

                    else if (p[j].points==p[(j+1)].points){
                        if (p[j].goals > p[(j+1)].goals){
                        if (p[j].used)
                            continue;
                        else{
                            position[i] = j;
                            p[j].used = true;
                        }
                        }
                    }
                }
            }
            for (int i = 0; i<m; ++i){
                cout << p[position[i]].name << endl;
            }
        }
}

///sorting is the problem. :P

