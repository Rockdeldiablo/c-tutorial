#include <stdio.h>
#define MAX 4
int main (void){

int numbers[MAX] = {1,2,3,4};
int sum=0;
int *p;
printf(" using a pointer to step through an array can be more efficient than simply stepping through the array" );
for(p=numbers;p< numbers + MAX; p++ ) {

sum += *p;


}
printf("\n%d\n",sum);
printf(" arrays can  also use pointer notation in the form "
"sum += *(numbers+1)");
sum =0;
for (size_t i = 0; i < 4; i++)
{
  sum +=  *(numbers+ i);
}
printf("\n%d\n",sum);


    return 0;
}
