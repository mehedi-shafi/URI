#include <stdio.h>
#include <string.h>
int main ()
{
    int n, v, i, s;
    char ch[10001], face[5];
    strcpy (face, "NLSO");
    while (scanf ("%d", &n) && n!=0){
        getchar ();
        gets (ch);
        v = strlen (ch);
        s = 0;
        for (i=0; i<v; i++){
            if (ch[i]=='D') s++;
            else s--;

            if (s==4) s = 0;
            if (s==-1) s = 3;
        }
        printf ("%c\n", face[s]);
    }
    return 0;
}
