#include <stdio.h>
#include <stdarg.h>
int sum (int ,...); //prototype

int main (void){

printf("%d\n", sum(3,4,5,6,7)); // first number tells the number of arguments to pass
printf("%d\n", sum(4,5,6));

    return 0;
}

int sum ( int n, ...){ // args have no names

va_list arg; // arg refers to each arg in turn

int i,s;
va_start(arg,n); // arg points to first arg

for (i= s=0;i<n;i++){
    s += va_arg(arg,int); // return next arg
}
va_end(arg); // cleanup
return(s);


}