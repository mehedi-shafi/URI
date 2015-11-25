#include <iostream>
using namespace std;
int prime[10000];
int prime_create()
{
    int i, k, l =4, flag;
   prime[0] = 2;
   prime[1] = 3;
   i = 2;
    while (i<10001) {
        for (k=2; k<=(l/2); k++){
            flag = 0;
            if (l%k==0){
                flag = 1;
                break;
            }
        }
        if (flag == 0){
                prime[i] = l;
                i++;
        }
        l++;
    }
}
int saved(int i)
{
    int r =0;
    for (int n = 1; n<=i; n++){
        r = (r+prime[i-n])%n;
    }
    return r;
}
int main ()
{
    prime_create();
    int i, j, k;
    while (1){
        cin >> i;
        if (i==0) break;
        cout << saved(i) + 1 << endl;
    }
    return 0;
}
