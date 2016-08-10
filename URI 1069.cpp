#include <iostream>
#define SIZE 1111
using namespace std;
char stk[SIZE];
int top, c;
void push(char x)
{
    stk[top++] = x;
}

void pop()
{
    ++c;
    --top;
}
int main ()
{
    int t;
    cin >> t;
    while (t--){
        stk[SIZE] = '\0';
        top = 0;
        c = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == '<')
                push(s[i]);
            else if (s[i] == '>' && top != 0)
                pop();
        }
        cout << c << endl;
    }
    return 0;
}
