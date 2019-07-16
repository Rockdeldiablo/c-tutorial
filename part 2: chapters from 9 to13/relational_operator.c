#include <stdio.h>
int main (void) {
float total = 250.23;

(total <= 3850.0) ? (total *= 1.10): (total *= 1.05);


printf("%f \n",total);
//convert to int
printf(" intero: %d \n", (int)total);
printf("I ate %d pear%s\n", (int)total, (total>1) ? ("s.") : ("."));
    return 0;
}