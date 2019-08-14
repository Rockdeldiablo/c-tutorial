#include <stdio.h>
#define HOWMANY 5
void starter();

int main(void)
{
int i;
for ( i = 0; i < HOWMANY; i++)
    starter();
    printf("this function will not work as the first one since the variable is"
    " always initialized to 0\n");
for (size_t j = 0; j < HOWMANY; j++)
{
starter2() ;// this function will not work as the first one since the variable is always initialized to 0
}


}
void starter()
    {
    /*
    Static storage is initialized with 0
    by default. Here we do it explicitly
    */
    static int first = 0;
    if(first == 0)
        {
        first++;
        printf ("Only once\n");
        
        }
    else
        {
        printf ("All but the first time\n");
        }
    printf ("Every time\n");
    }

void starter2(){

int first = 0;
    if(first == 0)
        {
        first++;
        printf ("Only once\n");
        
        }
    else
        {
        printf ("All but the first time\n");
        }



}
