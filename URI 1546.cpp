#include <iostream>
using namespace std;
int main ()
{
    int a, b, c;
    cin >> a;
    while (a--){
        cin >> b;
        while (b--){
            cin >> c;
            switch (c){
                case 1 : {
                    cout << "Rolien" << endl;
                    break;
                }
                case 2 : {
                    cout << "Naej" << endl;
                    break;
                }
                case 3 : {
                    cout << "Elehcim" << endl;
                    break;
                }
                case 4: {
                    cout << "Odranoel" << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
