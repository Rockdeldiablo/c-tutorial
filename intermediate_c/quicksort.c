#include <stdio.h>

int quicksort(int *number,int lower,int higher);
int main (void){
int swappino,index=0;
int uff[6] = {4,5,6,3,2,1};
int *twat;
twat = uff;
for (size_t i = 0; i < 6; i++)
{
 printf("%d ",twat[i]);
}
quicksort(twat,1,6-1);


printf("\n");
for (size_t i = 0; i < 6; i++)
{
 printf("%d ",twat[i]);
}

printf("\n");

 swappino= twat[0];

for ( int  i = 0; i < 5; i++)
{
    if (twat[0]<twat[i]){ 
        index=i;
        for (size_t j = 0; j < i; j++)
        {
            twat[j]= twat[j+1];

        }
    }
 }
twat[index-1] =swappino;


printf("\n");
for (size_t i = 0; i < 6; i++)
{
 printf("%d ",twat[i]);
}

printf("\n");
    return 0;
}
int quicksort (int *number,int first,int last){

int i, j, pivot, temp;
if(first<last){
    pivot=first;
    i=first;
    j=last;
    while(i<j){
        while(number[i]<=number[pivot]&&i<last)
            i++;
        while(number[j]>number[pivot])
            j--;
        if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
            }
        }
    temp=number[pivot];
    number[pivot]=number[j];
    number[j]=temp;
    quicksort(number,first,j-1);
    quicksort(number,j+1,last);
    }
}