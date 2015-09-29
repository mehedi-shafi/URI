#include <stdio.h>
void main ()
{
    float N1, N2, N3, N4, media_primary, media, exame;
    scanf ("%f %f %f %f", &N1, &N2, &N3, &N4);
    media_primary = ((N1*2)+(N2*3)+(N3*4)+(N4*1))/10;
    printf ("Media: %.1f\n", media_primary);
    if (media_primary>=7.0){
        printf ("Aluno aprovado.\n");
    }
    else if (media_primary<5.0){
        printf ("Aluno reprovado.\n");
    }
    else if (media_primary>=5.0&&media_primary<=6.9){
        printf ("Aluno em exame.\n");
        printf ("Nota do exame: ");
        scanf ("%f", &exame);
        media = ((media_primary + exame)/2);
        if (media>=5.0)
            printf ("Aluno aprovado.\n");
        if (media<=4.9)
            printf ("Aluno reprovado.\n");
        printf ("Media final: %.1f\n", media);
    }
}
