#include <iostream>
#include <string>
using namespace std;
int main ()
{
    int c = 0, add = 0;
    string s, check = "caw caw";
    while (getline(cin,s)){
        if (s.compare(check) == 0){
            cout << add << endl;
            add = 0;
            ++c;
        }
        else{
            if (s[0] == '*')
                add += 4;
            if (s[1] == '*')
                add += 2;
            if (s[2] == '*')
                add += 1;
        }
        if (c==3)
            break;
    }
    return 0;
}
