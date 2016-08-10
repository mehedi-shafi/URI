#include <iostream>
#define SIZE 1111
using namespace std;
char stk[SIZE];
int top;
void push(char x)
{
    stk[top++] = x;
}

void pop()
{
    --top;
}
int main ()
{
    string s;
    while (cin >> s){
        stk[SIZE] = '\0';
        top = 0;
        bool broke = false;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == ')' && top == 0){
                cout << "incorrect" << endl;
                broke = true;
            }
            if (s[i] == '(')
                push(s[i]);
            else if (s[i] == ')' && top != 0)
                pop();
        }
        if (!broke){
            if (top == 0)
                cout << "correct" << endl;
            else
                cout << "incorrect" << endl;
        }
    }
    return 0;
}
