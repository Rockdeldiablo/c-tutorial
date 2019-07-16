#include <stdio.h>
int main()
{
char topping[24];
int slices;
int month, day, year;
float cost;

//The first scanf will look for a floating-point variable, the cost
//of a pizza
//If the user doesn't enter a $ before the cost, it could cause
//problems
// The pizza topping is a string, so your scanf doesn't need an &
printf("How much does a pizza cost in your area?");
printf("enter as $xx.xx \n");
scanf("$%f", &cost);
printf("What is your favorite one-word pizza topping?\n");
scanf("%s", topping);
printf("How many slices of %s pizza can you eat in one sitting?\n", topping);
scanf(" %d", &slices);
printf("What is today's date (enter it in XX/XX/XX format).\n");
scanf(" %d/%d/%d", &month, &day, &year);
printf("\n\nWhy not treat yourself to dinner on %d/%d/%d",
month, day, year);
printf("\nand have %d slices of %s pizza!\n", slices, topping);
printf("It will only cost you $%.2f!\n\n\n", cost);

return (0);
}