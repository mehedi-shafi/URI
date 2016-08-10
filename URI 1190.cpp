 #include <iostream>
 #include <iomanip>
 using namespace std;

 int main ()
 {
     char a;
     double sum = 0, num;
     cin >> a;
     int odd = 13;
     for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            cin >> num;
            if (i <= 5 && i+j >= 12)
                sum += num;
            else if (i >= 6 && i+j >= odd){
                sum += num;
            }
        }
        if (i >= 6)
            odd += 2;
     }
     if (a == 'S')
        cout << setprecision(1) << fixed << sum << endl;
     else
        cout << setprecision(1) << fixed << (sum/144) << endl;
     return 0;
 }
