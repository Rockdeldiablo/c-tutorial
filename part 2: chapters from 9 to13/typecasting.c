// typecasting è l 'azione di convertire una variabile in un altro tipo di dato
// il formato è (dataType) value
// ad esempio (float) age;

// if you are using age in an expression with other floats, you should typecast age to float to maintain consistency in the expression.


#include <stdio.h>

int main(void) {
 int age1 = 4;
 float result;

 float age2 = 6;
 result = (float)age1+ age2;
printf ("%.2f \n",result);
 return  0;

}

/*Because of some rounding problems that can automatically occur if you mix data types,
you’ll have fewer problems if you explicitly typecast all variables and literals in an
expression to the same data type. */