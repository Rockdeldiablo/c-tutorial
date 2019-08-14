#include <stdio.h>
int wordlength(void);

int main (void){

printf("la lunghezza di un int in bit su questa macchina"
" è %d \n",wordlength());




    return 0;
}

int wordlength (void){
unsigned int x = ~0;
int count =0;
while (x!= 0){
count++;
x>>=1; // bit positions fill with zeros when you shifgt an unsigned
}
return(count);

}