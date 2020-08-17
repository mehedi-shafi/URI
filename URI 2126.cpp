#include <bits/stdc++.h>

using namespace std;

string s1, s2;
int sizeS1, sizeS2;

bool isSub (int pos)
{
    int j = 0;
    for (int i = pos; i < pos+sizeS1; i++){
        if (s1[j++] != s2[i]){
            return false;
        }
    }
    return true;
}

int main ()
{
    int t = 1;
    while (cin >> s1 >> s2){
        sizeS1 = s1.size();
        sizeS2 = s2.size();
        int cnt = 0;
        int pos;
        for (int i = 0; i <= sizeS2-sizeS1; i++){
            if (isSub(i)){
                cnt++;
                pos = i+1;
            }
        }
        cout << "Caso #" << t++ << ":" << endl;
        if (cnt > 0){
            cout << "Qtd.Subsequencias: " << cnt << endl;
            cout << "Pos: " << pos << endl;
        }
        else {
            cout << "Nao existe subsequencia" << endl;
        }
        cout << endl;
    }
}
