#include <iostream>
using namespace std;
int main()
{
	int n, arr[4] = {0};
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		if (a % 2 == 0)
			++arr[0];
		if (a % 3 == 0)
			++arr[1];
		if (a % 4 == 0)
			++arr[2];
		if (a % 5 == 0)
			++arr[3];
	}
	for (int i = 0; i < 4; i++)
		cout << arr[i] << " Multiplo(s) de " << (i+2) << endl;
    return 0;
}
