#include <stdio.h>
#include <stdlib.h>

int main (void){
    char firstinit, lastinit;
printf("scrivi le tue iniziali, prego:");
firstinit= getchar(); //discard the newline
lastinit = getchar(); //discard the newline
getchar();
printf ("le tue iniziali sono %c e %c \n", firstinit,lastinit);

/* A character input function named getch() helps eliminate the leftover Enter keypress that
getchar() leaves. getch() is unbuffered—that is, getch() gets whatever keypress the user
types immediately and doesn’t wait for an Enter keypress. The drawback to getch() is that the user
can’t press the Backspace key to correct bad input. for example :


printf("What are your two initials?\n");
firstInit = getch();
lastInit = getch();




 */


    return 0;
}