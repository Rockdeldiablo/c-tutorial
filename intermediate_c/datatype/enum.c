
//Enum variable takes only one value out of many possible values. Example to demonstrate it,
#include <stdio.h>
    enum suit {
        club = 0,
        diamonds = 10,
        hearts = 20,
        spades = 3
    } card;
    int main() 
    {
            card = club;
    	printf("Size of enum variable = %ld bytes\n", sizeof(card));	
    /*It's because the size of an integer is 4 bytes.

This makes enum a good choice to work with flags.

You can accomplish the same task using structures. 
However, working with enums gives you efficiency 
along with flexibility. for example:*/	
enum designFlags {
    	ITALICS = 1,
    	BOLD = 2,
    	UNDERLINE = 4
    } button; 
//There is a reason why all the integral constants are power of 2 in above pseudocode.

/*

// In binary

ITALICS = 00000001
BOLD = 00000010
UNDERLINE = 00000100 
 */
int myDesign = BOLD | UNDERLINE; 
        //    00000010
        //  | 00000100
        //  ___________
        //    00000110
	printf("%d\n", myDesign);


        
        return 0;
    }