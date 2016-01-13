#include <stdio.h>
#include <string.h>
int main ()
{
    int t, b;
    char a[20];
    scanf ("%d", &t);
    getchar();
    while (t--){
        scanf ("%s %d", a, &b);
        getchar ();
        if (strcmp (a, "Thor") == 0) printf ("Y\n");
        else printf ("N\n");
    }
    return 0;
}
