#include <stdio.h>
#include <string.h>
void main ()
{
    char division[15], cls[15], ordr[15], sp[15];
    gets (division);
    if (strcmp ("vertebrado", division) == 0){
        gets (cls);
        if (strcmp ("ave", cls)==0){
            gets (ordr);
            if (strcmp ("carnivoro", ordr) == 0){
                printf ("aguia\n");
            }
            else printf ("pomba\n");
        }
        else {
            gets (ordr);
            if (strcmp ("onivoro", ordr) == 0){
                printf ("homem\n");
            }
            else printf ("vaca\n");
        }
        }
    else {
        gets (cls);
        if (strcmp ("inseto", cls)==0){
            gets (ordr);
            if (strcmp ("hematofago", ordr) == 0){
                printf ("pulga\n");
            }
            else printf ("lagarta\n");
    }
    else {
        gets (ordr);
            if (strcmp ("hematofago", ordr) == 0){
                printf ("sanguessuga\n");
            }
            else printf ("minhoca\n");
        }
    }
}
