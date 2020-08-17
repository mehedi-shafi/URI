#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <string.h>
using namespace std;

long long to_int (char a[])
{
    long long number = 0, m = 1;
    int len = strlen(a);
    for (int i = len-1; i>0; i--){
        int temp = a[i] - '0';
        number = (number*m) + temp;
        m = 10;
    }
    cout << number << endl;
    return number;
}

int main ()
{
    string in;
    while (cin >> in){
        string a, b, c;
        int j = 0;
        bool a_ = false, b_ = false, c_ = false;
        for (int i = 0; i<in.size(); i++){
            if (!a_){
                if (in[i] == '+'){
                    a_ = true;
                    j = 0;
                    continue;
                }
                a[j] = in[i];
            }
            else if (!b_){
                if(in[i] == '='){
                    b_ = true;
                    j = 0;
                    continue;
                }
                b[j] = in[i];
            }
            else{
                c[j] = in[i];
            }
        }
        if (a[0] == '0' && b[0] == '0' && c[0] == '0'){
            cout << "True" << endl;
            break;
        }
        if (to_int(a) + to_int(b) == to_int(c)){
            cout << "True" << endl;
        }
        else
            cout << "False" << endl;
    }
    return 0;
}

///not fucking solved
