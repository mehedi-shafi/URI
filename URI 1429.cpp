#include <iostream>
#include <string>
using namespace std;
int main ()
{
  int fact[7];
  fact[0] = 0;
  fact[1] = 1;
  for (int i = 2; i < 7; i++)
    fact[i] = i * fact[i-1];
  string a;
  while (cin >> a){
    if (a[0] == '0')
      break;
    int ans = 0;
    for (int i = 0; i < a.size(); i++){
        ans +=  (a[i] - '0') * fact[a.size()-i];
    }
    cout << ans << endl;
    }
    return 0;
}
