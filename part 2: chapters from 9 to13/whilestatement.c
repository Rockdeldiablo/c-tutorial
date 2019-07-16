#include <stdio.h>
#define CURRENTYEAR 2019
int main(void)
{
int yearBorn, age;
printf("What year were you born?\n");
scanf(" %d", &yearBorn);

/*  This if statement can do some data validation, making sure
the year makes sense
The statements will only execute if the year is after the
current year */
while (yearBorn > CURRENTYEAR)
{
printf("Really? You haven't been born yet?\n");
printf("Want to try again with a different year?\n");
printf("What year were you born?\n");
scanf(" %d", &yearBorn);
}
age = CURRENTYEAR - yearBorn;
printf("\nSo this year you will turn %d on your birthday!\n",
age);
// The second if statment uses the modulus operator to test if
// the year of birth was a Leap Year. Again, only if it is will
// the code execute
if ((yearBorn % 4) == 0)
{
printf("\nYou were born in a Leap Year--cool!\n");
}
return 0; }