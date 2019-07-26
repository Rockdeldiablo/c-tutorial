#include <stdio.h>
#include <stdlib.h>
// nota: in c non basta definire una variabile per essere sicuri che sia 0, potrebbe essere qualsiasi valore.
int main (void ){
    int i;
    int array[100]={1};
    printf("lunghezza array è %ld \n",sizeof(array)/4);
for (size_t i = 0; i < 100; i++)
{
   array[i]= 1;
}

printf(" 25-esimo elemento array è %d\n",array[24]);



    return EXIT_SUCCESS;
}