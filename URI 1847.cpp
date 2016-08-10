#include <iostream>
using namespace std;


int main ()
{
    int a, b, c;
    bool emo;
    cin >> a >> b >> c;
    if (a>b && c>=b)
        emo = true;
    if (b>a && c<=b)
        emo = false;
    if (a<b && b<c){
        if ((c-b)<(b-a))
            emo = false;
        else if ((c-b)>=(b-a))
            emo = true;
    }
    if (a>b && b>c){
        if ((b-c)<(a-b))
            emo = true;
        else if ((b-c)>=(a-b))
            emo = false;
    }
    if (a==b){
        if (c>b)
            emo = true;
        else
            emo = false;
    }
    if (emo)
        cout << ":)" << endl;
    else
        cout << ":(" << endl;
    return 0;
}

