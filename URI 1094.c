#include <stdio.h>
void main ()
{
    int N, Amount, n_c=0, n_r=0, n_s=0, i;
    double p_c, p_r, p_s, total = 0;
    char Type;
    scanf ("%d", &N);
    for (i=0; i<N; ++i){
        scanf ("%d %c", &Amount, &Type);
        if (Type== 'C'){
            n_c+=Amount;
        }
        else if (Type== 'R'){
            n_r+=Amount;
        }
        else if (Type=='S'){
            n_s+=Amount;
        }
        total+=Amount;
    }
    p_c = (n_c*100)/total;
    p_r = (n_r*100)/total;
    p_s = (n_s*100)/total;
    printf ("Total: %.0lf cobaias\n", total);
    printf ("Total de coelhos: %d\n", n_c);
    printf ("Total de ratos: %d\n", n_r);
    printf ("Total de sapos: %d\n", n_s);
    printf ("Percentual de coelhos: %.2f %%\n", p_c);
    printf ("Percentual de ratos: %.2f %%\n", p_r);
    printf ("Percentual de sapos: %.2f %%\n", p_s);
}
