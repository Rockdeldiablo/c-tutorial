#include <stdlib.h>
#include <stdio.h>

#define ROWS 3
#define COLS 5
int main (void){
    int **p,i,j,k,l;

    p = malloc (ROWS * sizeof(int *));
    if (p == NULL){


        printf(" Memory allocation error \n");
        exit(1);
    }
    for (size_t i = 0; i < ROWS; i++){
            p[i] = malloc ( COLS * sizeof(int));
            if  ( p[i]== NULL){
            printf(" Memory allocation error \n");
            exit(1);
            }
    }
    for (size_t i = 0; i < ROWS; i++)
    {
        for (size_t j = 0; j < COLS; j++)
        {
            p[i][j] = 10*i + j;
        }
    
    }

for ( k = 0; k < ROWS; k++)
    {
        for ( l = 0; l < COLS; l++)
        {
            printf("%d ",p[k][l]);

        }
    printf("\n");
    }
printf("to retrieve data consider that:");
printf("numbers[2][1] is equal to *(numbers+2)[1] and *(*(numbers+2)+1)\n");
printf("numbers \t value:5000\t Type: ptr to array of 3 int's\n");
printf("numbers+2\t value:5012\t Type: ptr to array of 3 int's\n");
printf("*(numbers+2)\t value:5012\t Type: ptr to int\n");
printf("*(numbers+2)+1\t value:5014\t Type: ptr to int\n");
printf("*(*(numbers+2)+1)\t value:20\t Type: int\n");
 



}