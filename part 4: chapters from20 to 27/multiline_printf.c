 #include <stdio.h>

 int main (void){

// in case of very long printf  you can split the text on multiple lines:


printf (" test1"

" test2"


" test3 \n");

// oppure

printf( " part1 \
 part2 \
 part3 \n" );

//oppure :
printf( R"( part1 
 part2 
 part3 )"  );



     return 0;
 }