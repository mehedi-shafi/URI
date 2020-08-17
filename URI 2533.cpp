#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    while (cin >> n){
        double number, credit, total_credit = 0, total_grade = 0;
        double grade;
        for (int i = 0; i < n; i++){
            cin >> number >> credit;
            total_credit += credit;
            total_grade += (number * credit);
        }
        cout << setprecision(4) << fixed << (double) (total_grade / (total_credit * 100)) << endl;
    }
    return 0;
}
