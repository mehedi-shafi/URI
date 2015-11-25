#include <stdio.h>
int main ()
{
    int t, t1, t2, m1, m2, n1, n2, p1, p2;
    scanf ("%d", &t);
    while (t--){
        t1 = 0;
        t2 = 0;
        p1 = 0;
        p2 = 0;
        scanf ("%d x %d", &m1, &n1);
        t1+=m1;
        t2+=n1;
        if (m1>n1) p1 = 3;
        else if (m1<n1) p2 = 3;
        scanf ("%d x %d", &m2, &n2);
        t1+=n2;
        t2+=m2;
        if (n2>m2) p1+=3;
        else if (n2<m2) p2 += 3;
        if (p1>p2){
            printf ("Time 1\n");
            continue;
        }
        else if (p1<p2) {
                printf ("Time 2\n");
        continue;
        }
        else{
            if (t1>t2){
                    printf ("Time 1\n");
                    continue;
            }
            else if (t2>t1) {
                printf ("Time 2\n");
                continue;
            }
            else{
                if (n2>n1) {
                    printf ("Time 1\n");
                    continue;
                }
                else if (n1>n2) {
                    printf ("Time 2\n");
                }
                else printf ("Penaltis\n");
            }
        }
    }
    return 0;
}
