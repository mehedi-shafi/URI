#include <bits/stdc++.h>

using namespace std;
double pi = 3.14;

int main ()
{
  double vol, dia;
  while (cin >> vol >> dia){
    double height;
    double area;
    area = pi * pow ((dia/2), 2);
    height = vol / area;
    cout << setprecision(2) << fixed;
    cout << "ALTURA = " << height << endl;
    cout << "AREA = " << area << endl;
  }
  return 0;
}
