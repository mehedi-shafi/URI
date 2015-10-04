#include <stdio.h>

void main ()
{
    int c = 1,g_i, g_g, inter = 0, gremio = 0, grenais = 0, draw = 0;
    for ( ; ; ){
        if (c==2) break;
        else if (c==1) {
            grenais++;
            scanf ("%d %d", &g_i ,&g_g);
            if (g_i>g_g) inter++;
            else if (g_i<g_g) gremio++;
            else if (g_i==g_g) draw++;
        }
        printf ("Novo grenal (1-sim 2-nao)\n");
        scanf ("%d", &c);
    }
    printf ("%d grenais\n", grenais);
    printf ("Inter:%d\n", inter);
    printf ("Gremio:%d\n", gremio);
    printf ("Empates:%d\n", draw);
    if (inter>gremio) printf ("Inter venceu mais\n");
    else if (gremio>inter) ("Gremio venceu mais\n");
    else if (inter == gremio) printf ("Nao houve vencedor\n");

}
