#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (void){
    int i =0;
    char ans;
 char str1[30] = "ayyy lmao aliens :DDD";
 char str2[30] = " benis :DDDDDD";
 printf(" you can  join 2 strings in 2 ways: with a simple %%s,%%s\n");
 printf ("%s%s\n", str1,str2);
 printf(" or with the function strcat(str1,str2)\n");
 strcat(str1, str2); //Adds last to the end of first
printf("I am $s\n", str1);
printf(" now str1 contains at the end the string stored in str2");

printf(" do you want to convert all the letters from lower case to upper case?");
 printf("\n y/n?");
 scanf(" %c",&ans);

if (toupper(ans) == 'Y') // only need to test for upper case
{ printf("\nyes\n");

 while(str1[i]) {
      putchar (toupper(str1[i]));
      i++;
   }


 }
else
{ printf("\n no\n"); }




    return 0;
}