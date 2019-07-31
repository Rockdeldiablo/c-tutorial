// Example program #2 from Chapter 31 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter31ex2.c
/* The program demonstrates passing an array to a function. */
#include <stdio.h>
#include <string.h>
main()
{
char name[15] = "Michael Hatton";
change(name);
printf("Back in main(), the name is now %s.\n", name);
return(0); // Ends the program
}
/******************************************************************/
/* Sometimes putting dividers like the one above is a nice break
between your different functions. */

change(char name[15]) 
{
// Change the string stored at the address pointed to by name
strcpy(name, "XXXXXXXXXXXXXX");
return 0; // Returns to main
}
