#include <stdio.h>
#include <stdlib.h>
int main (void) {
int array[5]= {[0 ... 4]=6}; //utile per inizializzare ad un certo valore
int *parray = array;
printf("%d\n",array[0]);
printf("%d\n",parray[0]);
printf("%d\n",*parray);
printf("%d\n",*(array+0));
printf("%d\n",*array);// il nome dell'array è un puntatore al primo valore
printf("le ultime due opzioni : array e parray danno numeri legati all'indirizzo di memoria\n");
printf("%d\n",array); 
printf("%d\n",parray);





    return 0;
}