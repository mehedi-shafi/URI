#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
void gen(int arr[])
{
    for (int i = 0; i<=10000; i++){
        for (int j = 0; j<=10000; j++){
            if ((i*i)+(j*j)<=10000){
                int temp = pow(i,2) + pow(j,2);
                arr[temp] = 1;
            }
        }
    }
}
int main ()
{
    int n;
    int arr[10001] ={0};
    gen(arr);
    while (scanf ("%d", &n) != EOF){
        if (n>= 0 && arr[n] == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
