#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main ()
{
	int f;
	cin >> f;
	double ans = (pow(((1+sqrt(5))/2), f) - pow(((1-sqrt(5))/2), f))/sqrt(5);
	cout << setprecision(1) << fixed << ans << endl;
	return 0;
}
