// here we introduce the union type
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "/home/pasquale/local-repo/c-tutorial/intermediate_c/unions/hash.h" //definition in the hash.h file

int main (void){
int probe;
union Data data;        
 char table[NUM_STRINGS][MAX_CHARS];
union hash string;
fgets(string.name, MAX_CHARS, stdin);
probe = string.index % NUM_STRINGS;
if ( strcmp(table[probe],string.name) == 0 )
printf("found %s\n", string.name);
else
printf (" boh\n");


printf( "Memory size occupied by data : %ld  perchè è la memoria occupata dal tipo più grande, vale a dire l' array di char\n", sizeof(data));



    return 0;
}