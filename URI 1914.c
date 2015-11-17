#include <stdio.h>
#include <string.h>
void main ()
{
    int i, n, j, n1, n2, sum;
    char temp[100], name1[100], name2[100], type1[10], type2[10], nm1[100], nm2[100];
    scanf ("%d", &n);
    getchar ();
    for (i=0; i<n; ++i){
        scanf ("%s %s %s %s", name1, type1, name2, type2);
        getchar ();
        if (strcmp (type1, "IMPAR")==0){
            strcpy (nm1, name2);
            strcpy (nm2, name1);
        }
        else {
            strcpy(nm1, name1);
            strcpy(nm2, name2);
        }
    scanf ("%d %d", &n1, &n2);
    if ((n1+n2)%2==0) printf ("%s\n", nm1);
    else printf ("%s\n", nm2);
    }

}
