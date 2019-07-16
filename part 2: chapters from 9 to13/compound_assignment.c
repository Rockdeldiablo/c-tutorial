#include <stdio.h>

int main()
{
    printf("we will sum  \" total *= 2+3 \" \n");
    int total = 5;
total *= 2 + 3;
/* Updates the total variable */
printf("total = %d \n",total);
printf("the reason is that *= has a lower order than + so translated the instruction looks like  total = total * 5\n");






    return 0;
}