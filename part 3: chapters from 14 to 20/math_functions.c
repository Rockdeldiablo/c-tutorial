#include <stdio.h>
#include <stdlib.h> //required for rand()
#include <time.h> //required for time and srand()
#include <math.h>


int main (void ) {
int dice1,dice2;
time_t t; //time variable

printf(" 10 raised to the third power is %.0f.\n",pow(10.0,3.0));
printf(" absolute value of -10 is %.0f \n",fabs(-10));

printf(" the floor of  18.5 is %.0f.\n",floor(18.5));
printf(" the ceiling of -10 is %.0f \n",ceil(-18.5));


dice1 = (rand() % 5) + 1; // it remains always equal
 
/* From 1 to 6 */
printf("%d\n",dice1); 


srand(time(&t));
 dice2 = (rand() % 10) + 1;

printf("%d\n",dice2); // this change at every run


 
 



    return 0;
 

    
}