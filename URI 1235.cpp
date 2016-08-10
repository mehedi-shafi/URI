#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    char ab[101];
    getchar();
    while (t--){
        cin.getline(ab, 101);
        int len = strlen(ab);
        char first[len/2], last[len/2];
        for (int j = 0; j<len/2; ++j){
            first[j] = ab[len/2 -j -1];
            last[j] = ab[len - j - 1];
        }
        first[len/2] = '\0';
        last[len/2] = '\0';
        cout << first << last << endl;
    }
    return 0;
}
