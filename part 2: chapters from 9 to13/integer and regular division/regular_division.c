// Example program #1 from Chapter 9 of
// Absolute Beginner's Guide to C, 3rd Edition
// File Chapter9ex1.c
/* This is a sample program that demonstrates math operators, and
the different types of division. */
#include <stdio.h>
int main()
{
// Two sets of equivalent variables, with one set
// floating-point and the other integer
float a = 19.0;
float b = 5.0;
float floatAnswer;
int x = 19;
int y = 5;
int intAnswer;
// Using two float variables creates an answer of 3.8
floatAnswer = a / b;
printf("%.1f divided by %.1f equals %.1f. \nciò avviene quando poni il risultato della divisione di due float in un altro float \n", a, b, floatAnswer);
floatAnswer = x /y; //Take 2 creates an answer of 3.0
printf("%d divided by %d equals %.1f. \nciò avviene quando metti il risultato della divisione di due int in un float\n", x, y, floatAnswer);
// This will also be 3, as it truncates and doesn't round up
intAnswer = a / b;
printf("%.1f divided by %.1f equals %d. \nciò avviene quando metti il risultato della divisione di due int in un int\n", a, b, intAnswer);intAnswer = x % y; // This calculates the remainder (4)
printf("%d modulus (i.e. remainder of) %d equals %d", x, y,
intAnswer);
return 0;
}