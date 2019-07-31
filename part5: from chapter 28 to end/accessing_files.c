#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
FILE *fptr;
 int main (void){
     char fileLine[100];
fptr = fopen("/home/pasquale/local-repo/c-tutorial/tmp/fopen.txt", "a+");
/*append/update: Open a file for update (both for input and output) with all output operations writing 
data at the end of the file. Repositioning operations (fseek, fsetpos, rewind) affects the next input 
operations, but output operations move the position back to the end of file. The file is created if it 
does not exist. */
if (fptr == 0)
        {
        printf("Error--file could not be opened.\n");
        exit (1);
        }
else
{
            while (!feof(fptr))
                {
                fgets(fileLine, 100, fptr);
                if (!feof(fptr))
                    {
                    puts(fileLine);
                    }
                }
}
  //to do:moving around in a file

fclose(fptr);


     return 0;
 }