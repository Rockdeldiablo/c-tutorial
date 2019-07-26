// in  this program we will see how we can sort numbers in a list
#include <stdio.h>

// incomplete
int main (void){

int sequence[] = {1,54,235,3,4,3,45,2,352,23};
int leng,i,outer,inner=0;
int swap,didSwap,temp=0;
leng = sizeof(sequence)/4;
printf(" la lunghezza è %d \n",leng);
for (size_t i = 0; i < leng; i++)
{
   if (sequence[i+1]<sequence[i])
   {
      swap = sequence[i];
      sequence[i]= sequence[i+1];
      sequence[i+1]= swap;

   }

}

printf(" array è  " );
for (size_t i = 0; i < leng; i++)
{
  printf(" %d", sequence[i]);
}
printf("\n");
printf("come si può vedere il risultato non è completo\n");
printf("serve allora un doppio loop\n");



// Sort the array
for (outer = 0; outer < leng; outer++)
{
didSwap = 0; //Becomes 1 (true) if list is not yet ordered
for (inner = outer; inner < leng; inner++)
   {
      if (sequence[inner] < sequence[outer])
         {
         temp = sequence[inner];
         sequence[inner] = sequence[outer];
         sequence[outer] = temp;
         didSwap = 1;
         };
   }
  


}




printf(" array è  " );
for (size_t i = 0; i < leng; i++)
{
  printf(" %d", sequence[i]);
}









return 0;
}
