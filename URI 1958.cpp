#include <bits/stdc++.h>
using namespace std;

int main ()
{
  long double in;
  cout << scientific << setprecision(4) << uppercase;
  string line;
  while (cin >> line){
    if (line[0] != '-')
      cout << '+';
    stringstream ss(line);
    ss >> in;
    cout << in << endl;
  }
  return 0;
}
