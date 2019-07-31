#include <stdio.h>
int main(void)
{
int i;
printf("Please enter an integer... ");
scanf(" %d", &i);
// Now call the half function, passing the value of i
half(i);
// Shows that the function did not alter i's value
printf("In main(), i is still %d.\n", i);
return(0); // Ends the program
}
/******************************************************************/
/* Sometimes putting dividers like the one above is a nice break
between your different functions. */
half (int i) 
{
    float j;
j= (float)(i % 2) ;
i = i / 2;

printf("Your value halved is %d. with a rest of %2.2f\n", i,j);
return 0; // Returns to main
}