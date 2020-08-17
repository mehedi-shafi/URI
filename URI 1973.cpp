#include <bits/stdc++.h>
using namespace std;
int main ()
{
  long long total_sheep = 0, stolen_sheep = 0, attacked = 0;
  int star;
  scanf("%d", &star);
  int farms[star];
  int robbed[star];
  memset(robbed, 0, sizeof robbed);

  for (int i = 0; i < star; i++){
    scanf("%d", &farms[i]);
    total_sheep += farms[i];
    //cout << i << endl;
  }

  //cout << "Total sheeps : " << total_sheep << endl;

  int i = 0;
  while (i >= 0 && i < star){
    if (farms[i] > 0){
      total_sheep --;
      stolen_sheep ++;
      if (robbed[i] == 0){
        robbed[i] = 1;
        attacked++;
      }
    }
    if (farms[i] % 2 == 0){
        if (farms[i] > 0)
            farms[i] --;
        i--;
    }
    else{
        if (farms[i] > 0)
            farms[i] --;
        i++;
    }
  }
  cout << attacked << " " << total_sheep << endl;
  return 0;
}
