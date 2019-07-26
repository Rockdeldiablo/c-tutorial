#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
int main (void){
int age =19;
int month = 6;
int *point = &age;
int *mth;

printf("%d\n",age);
printf("%d\n",*point);

// se il puntatore è già definito non serve il * 
mth= &month;

printf("%d\n",*mth);
printf(" ora applichiamo il deferencing: rempostiamo la variabile age a 25 ponendo *point =25\n");

//dereferencing * 

*point = 25;
printf("stampiamo al variable age\n");
printf("%d\n",age);
printf("stampiamo la variable age tramite puntatore *point\n");
printf("%d\n",*point);

    return 0;
}