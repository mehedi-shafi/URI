///couldn't solve

#include <stdio.h>
#include <string.h>
int main ()
{
   char string[100000];
   int len, i=0, j=14;

   gets (string);
   len = strlen(string);
   for (i=0; i<len; ++i){
    if (string[i] == 'v' || string[i] == 'j' || string[i] == 'b' || string[i] =='z' || string[i] == 's' || string[i] == 'p' || string[i] == 'x'){
        string [i] = 'f';
    }
    if (string[i] == 'V' || string[i] == 'J' || string[i] == 'B' || string[i] =='Z' || string[i] == 'S' || string[i] == 'P' ||string[i] == 'X' || string[i] == 'C') string[i] = 'F';
   }
   for (i=0; i<len; ++i){
    if (string[i]== 'f' && string[i+1] == 'f') {
     continue;
    }
    printf ("%c", string[i]);
   }
   printf ("\n");
   return 0;
}
