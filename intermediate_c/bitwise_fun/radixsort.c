#include <stdio.h>
int wordlength(void);
void radix(int *v, int size);
void print (int * array, int size);
/* this program allow to sort numbers by sorting the bits that compose them */

int main ( void){
int data[] ={46,30,82,90,56,17,95,15,48,26,4,58,71,79,92};
int length;
length = sizeof(data)/sizeof(int);
 
printf("ORIGINAL DATA:\n");
print(data, length);
printf("radix sort:\n");
radix(data,length);
print(data,length);
    return 0;
}

 // RADIX SORT FUNCTION
void radix (int *v , int size){
int temp[size],t_index,v_index,i,k =0;
unsigned mask;
int wordsize = wordlength()-1;
// loop (wordsize-1) times
    while ( k < wordsize)
    {
        t_index = v_index =0;
        //mask for bit manipulation
        mask = 1<< k;
        // separate into v and temp 
        for ( i = 0; i< size; i++){

            if ((v[i] & mask )== 0)
                v[v_index++]=v[i];
            else
                {
                    temp[t_index++]= v[i];
                }
        }
        //combine
        for (size_t i = 0; i < t_index; i++)
            {
            v[v_index++]= temp[i];}
    k++;
            
    }

}
// wordlength function
int wordlength (void){
unsigned int x = ~0;
int count =0;
while (x!= 0){
count++;
x>>=1; // bit positions fill with zeros when you shifgt an unsigned
}
return(count);

}



void print (int *array, int size){
    int x=0;
while (x< size-1)
{
 printf("%d, ",array[x]);
 x++;
}
if (x = size-1)
   printf("%d \n",array[x]);
 

}