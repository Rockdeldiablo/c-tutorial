#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (void){
printf("C has several built-in character-testing functions. Now that you know how to use getchar() and \n getch() to get single characters, the character-testing functions can help you determine exactly what kind of input characters your program receives. You can set up if logic to execute certain courses of action based on the results of the character tests.");
printf("\n The isalpha() function returns true (which is 1 to C) if the value in its parentheses is an alphabetic character a through z (or the uppercase A through Z) and returns false (which is 0 to C) if the value in parentheses is any other character. Consider this if:");
printf("\n-------------------\n");

printf("\n isalpha, come islower(),isupper() and isdigit() need ctype.h");
printf("\n-------------------\n");
char lettera = 'A';

if (isalpha(lettera)){
    printf("\nyour input was a letter \n");


}


    return 0;
}