#include <stdio.h>
struct information {

unsigned int is_male: 1;
unsigned int is_married: 1;
unsigned int how_many_kids: 1;
unsigned int is_manager: 1;
};
typedef struct information INFO;

// invece di valere 1 is_male vale 0  perchè i valori variano tra -1 e 0

int main (void){
INFO person;
printf("blablabla\n");
if ( !person.is_male && !person.is_married){

printf("blabla\n");    
}
else
{
    printf(" %d\n",person.is_male == 0);
}

person.how_many_kids++;




    return 0;
}