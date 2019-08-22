#include <stdio.h>
void change (int **p);
int main (void ) {
    int numbers[3][4]= {{5,6,7,8},{10,11,12,13},{15,16,17,18}};
    int *pi;
   pi = numbers; 
change(&pi);
for (size_t i = 0; i < 3; i++)
    {for (size_t j = 0; j < 4; j++)
        {printf("%d ",numbers[i][j]);}
    }   
printf("\n");
return 0;}
void change (int **p){
for (size_t i = 0; i < 3; i++)
{
 *(*p+(i*4+2)) = *(*p+(i*4+2))+20;
 
}
}