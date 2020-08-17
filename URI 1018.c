#include <stdio.h>
int main() {
    int notes[] = {100, 50, 20, 10, 5, 2, 1}; //Notes' values
    int n, i = 0;
    scanf("%d", &n);
    printf("%d\n", n); //tk print korbo
    do {
     printf("%d nota(s) de R$ %d,00\n", n/notes[i], notes[i]);  //note er amount bair korbo.. Just tor normal formula n/<note er value>
    if (n >= notes[i])  //jodi tk er amount current index er note er value er cheye beshi hoy
        n -= notes[i]*(n/notes[i]);  //taile oituk amount minus koira dibo
    } while(notes[i++] != 1); //array index i koira baraibo ar jokhon array er last e jaibo break korbo
    return 0;
}
