#include <bits/stdc++.h>

using namespace std;

string choices[3] = {"ataque", "pedra", "papel"};
string outcome[5] = {"Jogador 1 venceu", "Jogador 2 venceu", "Ambos venceram", "Sem ganhador", "Aniquilacao mutua"};

string outCome(string a, string b)
{
  int p1, p2;
  for (int i = 0; i < 3; i++)
    if (a.compare(choices[i]) == 0)
      p1 = i;
  for (int i = 0; i < 3; i++)
    if (b.compare(choices[i]) == 0)
      p2 = i;
  if (p1 < p2)
    return outcome[0];
  if (p2 < p1)
    return outcome[1];
  if (p1 == 0 && p2 == 0)
    return outcome[4];
  if (p1 == 1 && p2 == 1)
    return outcome[3];
  return outcome[2];
}

int main()
{

  int t;
  cin >> t;
  while (t--){
    string a, b;
    cin >> a >> b;
    cout << outCome(a, b) << endl;
  }
  return 0;
}
