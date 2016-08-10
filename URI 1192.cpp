#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        string str;
        cin >> str;
        int a = str[0] - '0';
        int b = str[2] - '0';
        if (a==b)
            cout << (a*b) << endl;
        else if (str[1] >= 'A' && str[1] <= 'Z')
            cout << (b-a) << endl;
        else if (str[1] >= 'a' && str[1] <= 'z')
            cout << (a+b) << endl;
    }
    return 0;
}
