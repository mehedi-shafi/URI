#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string a;
    while (getline(cin, a)){
        bool start = true;
        char current;
        for (int i = 0; i<a.size(); i++){
            if (a[i] == 32)
                continue;
            if (start){
                start = false;
                if (a[i]>='a' && a[i] <= 'z'){
                    current = 'U';
                    a[i] -= 32;
                }
                else
                    current = 'U';
                continue;
            }
            if (a[i]>='A' && a[i] <='Z'){
                if (current == 'U'){
                    a[i] += 32;
                    current = 'L';
                }
                else
                    current = 'U';
            }
            else if (a[i]>='a' && a[i]<='z'){
                if(current == 'L'){
                    a[i] -= 32;
                    current = 'U';
                }
                else
                    current = 'L';
            }
        }
        cout << a  << "\n";
    }
    return 0;
}
