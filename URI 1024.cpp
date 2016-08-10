#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int i, n, l, j;
    string ch;
    cin >> n;
    getchar();
    while (n--){
        getline (cin, ch);
        l = ch.size();
        for (j=0; j<l; ++j){
            if ((ch[j]>=65 && ch[j]<=90) || (ch[j]>=97 && ch[j]<=122)){
                if (ch[j]=='\0')
                    continue;
                ch[j]+=3;
            }
        }
        reverse (ch.begin(), ch.end());
        for (j = (l/2); j<l; ++j){
            if (ch[j]=='\0')
                continue;
            --ch[j];
        }
        cout << ch << endl;
    }
}
