/* be careful with lengths. you must be extremely careful, not to let the program store
strings longer than the first string you point to with the 
character pointer */

#include <stdio.h>
#include <stdlib.h>

int main (void){
char *name = "Tom Rocket";
int i;

printf("\n if you now use gets(name) there is the risk the user may enter a string longer than the original");


printf("\n \n Although a character pointer can point to strings of anylength, the gets() function, along with scanf(), strcpy(), and strcat(), doesn’t know that it’s being sent a character pointer.");

printf("\n \nIf you want to have the advantage of a character pointer—that is, if you want to be able to assignstring" 
" literals to the pointer and still have the safety of arrays so you can use the character pointer toget user input— you "
" can do so with a little trick.If you want to store user input in a string pointed to by a pointer, first reserve enough "
"storage for that input string. The easiest way to do this is to reserve a character array and then assign a character pointer "
" to the beginning element of that array");

printf(" char input[81];"\
" char *iptr =input;");
printf("\nNow you can input a string by using the pointer as long as the string entered by the user is not longer"
" than 81 bytes long:");
printf("\ngets(iptr);");
printf ("\nYou can use a nice string-input function to ensure that entered strings don’t get longer than 81"
"characters, including the null zero. Use fgets() if you want to limit the number of characters"
"accepted from the user. fgets() works like gets(), except that you specify a length argument."
"The following statement shows fgets() in action:\n"

"\nfgets(iptr, 81, stdin);\n");
 
fgets(&name, 6, stdin);
/*  for (size_t i = 0; i < 3; i++)
{
printf(" %c",name[0]);
  
};*/
printf("%c",name);
printf("%c",name);
    return 0;
}