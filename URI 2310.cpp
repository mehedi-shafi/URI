#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    double serv = 0, blck = 0, att = 0;
    double tot[6] = {0};
    cin >> n;
    while (n--){
        string a;
        cin >> a;
        double x;
        for (int i = 0; i < 6; i++){
            cin >> x;
            tot[i] += x;
        }
    }
    serv = (tot[3]*100)/tot[0];
    blck = (tot[4]*100)/tot[1];
    att = (tot[5]*100)/tot[2];
    cout << "Pontos de Saque: " << setprecision(2) << fixed << serv << " " << "\%." << endl;
    cout << "Pontos de Bloqueio: " << setprecision(2) << fixed << blck << " " << "\%." << endl;
    cout << "Pontos de Ataque: " << setprecision(2) << fixed << att << " " << "\%." << endl;
    return 0;
}
