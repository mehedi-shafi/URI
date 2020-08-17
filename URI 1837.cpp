#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int a, b, r, q;
    cin >> a >> b;

	if (a < 0){
		int t = b, f;
		if (b < 0)
			 t *= -1;
		for (r = 0; r < t; r++){
			f = a - r;
			if (f % b == 0) break;
		}
		q = f/b;
	}
	else {
		q = a/b;
		r = a %b;
	}
    cout << q << " " << r << endl;
    return 0;
}
