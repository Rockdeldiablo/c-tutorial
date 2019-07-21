// File Chapter19ex1.c
/* This program asks a user for a username and a password. It tests
whether their password has an uppercase letter, lowercase letter,
and a digit. If it does, the program congratulates their selection.
If not, it suggests they might want to consider a password with more
variety for the sake of security. */
// stdio.h is needed for printf() and scanf()
// string.h is needed for strlen()
// ctype.h is needed for isdigit, isupper, and islower
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isspecial (char ch){
    int bol =1;
if ((ch>=97  && ch <=122) && (ch >=65 && ch <= 90) && (ch>= 48 && ch <=57))
    {
        bol=0;
    }
 
return bol;

}

int main(void)
{
int i;
int hasUpper, hasLower, hasDigit,hasspecial=0;
char user[25], password[25];
// Initialize all three test variables to 0 i.e. false
hasUpper = hasLower = hasDigit = 0;
printf("What is your username? ");
scanf(" %s", user);
printf("Please create a password: ");
scanf(" %s", password);

/* This loop goes through each character of the password and
tests
whether it is a digit, upppercase letter, then lowercase
letter.*/
for (i = 0; i < strlen(password) ; i++ )
    {
    if (isdigit(password[i]))
        {
        hasDigit = 1;
        continue; // continue non mi sembra serva in verità
        }
    if (isupper(password[i]))
        {
        hasUpper = 1;
        continue;
        }
    if (islower(password[i]))
        {
        hasLower = 1;
        }
     if (isspecial(password[i]))
        {
            hasspecial=1;


        }
    
    }

    printf("\n %d,%d,%d,%d \n",hasDigit,hasUpper,hasLower,hasspecial);
/* The if portion will only execute if all three variables
below are 1, and the variables will only equal 1 if the appropriate
characters were each found */
if ((hasDigit) && (hasUpper) && (hasLower) && (hasspecial))
    {
    printf("\n\nExcellent work, %s,\n", user);
    printf("Your password has upper and lowercase ");
    printf("letters and a number + a special character.");
    }
 else
    {
    printf("\n\nYou should consider a new password, %s,\n",
    user);
    printf("One that uses upper, lowercase letters,a number and a special character ");

    }
return(0);
}