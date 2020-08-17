//letter frequency
#include <bits/stdc++.h>

using namespace std;

bool ischar(char a)
{
    if (a >= 'a' && a <= 'z')
        return true;
    return false;
}

int main ()
{
    int t;
    cin >> t;
    while (t--){
        string input;
        getline(cin, input);
        int arr[200] = {0};
        int mx = 0;
        for (int i = 0; i < input.size(); i++){
            char c = tolower(input[i]);
            if (ischar(c)){
                arr[c] ++;
                if (arr[c] >= mx){
                    mx = arr[c];
                }
            }
        }
        for (int i = 'a'; i <= 'z'; i++){
            if (arr[i]==mx)
                cout << (char) i;
        }
        cout << endl;
    }
}