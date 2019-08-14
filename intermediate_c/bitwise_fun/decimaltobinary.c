#include <stdio.h>
#include <stdarg.h>
int binary(int ,...); //prototype
int binary2(int ,...); //prototype



int main (void){

 binary(2,8,2);
 printf(" as you can see the binary form is inverted and a circular shift is required.\n now we show a second method:\n");

 binary2(2,8,2);

printf("\n");
    return 0;
}


int binary ( int n, ...){ // args have no names

    va_list arg; // arg refers to each arg in turn

    int i,number;
    va_start(arg,n); // arg points to first arg

    for (i= number=0;i<n;i++){
    number = va_arg(arg,int); // return next arg
    while (number){
    printf("%d", number & 1);
    number>>=1; // the binary form is inverted!!!!!!
    }

    printf("\t");

    }
    va_end(arg); // cleanup
}




int binary2(int n, ...){

va_list arg; // arg refers to each arg in turn

int c,number,k;
va_start(arg,n); // arg points to first arg
for (size_t i = 0; i < n; i++)
{
            number = va_arg(arg,int);
    /* code */
                for (c= 31;c>=0;c--){
                k= number>>c;
                if (k & 1)
                    printf("1");
                else
                    printf ("0");

                }

                printf("\t");
}




va_end(arg); // cleanup


}