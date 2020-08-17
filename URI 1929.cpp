#include <bits/stdc++.h>
using namespace std;

bool possible(int a, int b, int c){
  if (a + b > c && b + c > a && c + a > b)
    return true;
  return false;
}

int main ()
{
  int data[4];
  bool pos = false;
  for (int i = 0; i < 4; i++)
    cin >> data[i];
  for (int i = 0; i < 4; i++){
    for (int j = i+1; j < 4; j++){
      for (int k = j+1; k < 4; k++){
        if (possible(data[i], data[j], data[k])){
          pos = true;
        }
      }
    }
  }

  if (pos)
    cout << "S" << endl;
  else
    cout << "N" << endl;
    
  return 0;
}
